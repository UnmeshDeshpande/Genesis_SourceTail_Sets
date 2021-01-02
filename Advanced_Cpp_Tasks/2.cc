#include <iostream>
#include <string>
#include <thread>
#include <future>

int sum_arr(int *arr,int start,int end)
{
    int sum=0;
    for(int i=start;i<=end;i++)
        sum+=arr[i];
    return sum;
}   

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    std::future<int> res1,res2,res3;
  //  std::future<int> res2;
  //  std::future<int> res3;

    res1 = std::async(sum_arr, arr, 0,3);
    res2 = std::async(sum_arr, arr, 4,7);
    res3 = std::async(sum_arr, arr, 8,9);

    int res = res1.get()+res2.get()+res3.get();
    std::cout<<"Sum is "<< std::to_string(res);

   }
