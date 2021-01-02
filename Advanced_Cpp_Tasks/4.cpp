#include <iostream>
#include <string>
#include <mutex>
#include <functional>
#include <thread>
#include <future>
#include <condition_variable>

std::chrono::milliseconds delay(1000);

#define print(msg) std::cout << msg << std::endl
#define str(i) std::to_string(i)
#define threadSleep std::this_thread::sleep_for(delay)

class Stack {
  int *m_arr;
  int maxlen;
  int m_ptr;
  std::mutex m1;
  std::condition_variable ucv;
  std::condition_variable ocv;

  public:

  Stack(int len):maxlen(len),m_ptr(-1) {
    m_arr = new int[len];
  }

  ~Stack() {
    if(m_arr!=nullptr)
        delete[] m_arr;
  }

  // Push should wait untill the stack if stack is full
  void push(int val) {
    threadSleep;
    print("Thread-Push");
    std::unique_lock<std::mutex> lck(m1);
    ocv.wait(lck, [=]{ return isVacancy(); });    //wait if the stack is full
    m_arr[++m_ptr]=val;
    std::cout<< "Push: " << val << std::endl;
    ucv.notify_one();

  }

  // Pop should wait untill the stack is empty

  int pop() {
    print("Thread-Pop");
    std::unique_lock<std::mutex> lck(m1);
    ucv.wait(lck,[=]{ return !isEmpty(); });   // wait if stack is empty
    int val=m_arr[m_ptr--];
    std::cout<< "Pop: " << val << std::endl;
    ocv.notify_one();
    return val;
  }

  bool isFull() const { return m_ptr==maxlen-1; }
  bool isVacancy() const { return m_ptr<maxlen-1; }
  bool isEmpty()  const { return m_ptr==-1; }

  void display(){
    print("Stack: ");
    for(int i=maxlen-1;i>=0;i--)
      print(m_arr[i]);
  }

};

int main()
{
  print("Main");

  Stack s1(2);
  Stack *stackPtr = &s1;

  std::thread t1(std::bind(&Stack::push,stackPtr,3));
  std::thread t2(&Stack::pop,stackPtr);

  t1.join();
  t2.join();
  s1.display();


  print("Main end");

  return 0;
}
