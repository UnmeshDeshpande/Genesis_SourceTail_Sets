#include<iostream>
#include<thread>

int arr[100];
int size, thread=0;
int sum_arr[5];

void sum()
{
 int total=0;
 int part = thread++;
int start = part*size/5;
int end = (part+1)*size/5;
   for(int i=start; i<end; i++)
   {
       total = total + arr[i];
   }
   sum_arr[part] = total;
}
int main()
{

    for(int i=0; i<100; i++)
    {
        arr[i] = rand()%10;
    }
    

std::thread t1(sum);
std::thread t2(sum);
std::thread t3(sum);
std::thread t4(sum);
std::thread t5(sum);


t1.join();
t2.join();
t3.join();
t4.join();
t5.join();


int final_sum;
for(int j=0; j<5; j++)
{
  final_sum = final_sum + sum_arr[j];
}
std::cout << "Final Sum " << final_sum << std::endl;

}