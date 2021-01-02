#include <iostream>
#include <string>
#include <future>
#include <condition_variable>
#include <chrono>

std::chrono::milliseconds delay(1000);
std::mutex m1;
std::condition_variable cv;

bool flag1 = true;    
bool flag2 =false;      

constexpr int max = 30;
int iter=1;

void print(bool* thisflag,bool* othrFlag,int threadID){

    std::unique_lock<std::mutex> lck(m1);
    std::string label = "T"+std::to_string(threadID); 

    while(iter<max){
         cv.wait(lck,[=](){return *thisflag;}); 

        if(iter>max)                            // this is conditional statement
            break;

        std::cout <<label<< "- welcome\n";

        for(int i=iter;i<=iter+4;i++){
        std::cout <<label<<": "<< std::to_string(i)<<"\n";
        }

        iter += 5;

        *thisflag = false;  // respective thread will be blocked
        *othrFlag=true;           //  thread2 is released
        cv.notify_one();      // other Thread will start

    }
}


int main()
{
std::thread t1(print,&flag1,&flag2,1);
std::thread t2(print,&flag2,&flag1,2);

t1.join();
t2.join();
return 0;

}