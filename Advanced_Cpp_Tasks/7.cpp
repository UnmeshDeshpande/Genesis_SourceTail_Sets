#include<iostream>
#include<thread>
#include<mutex>
#include<fstream>
using namespace std;
std::mutex m1;

void WriteFile(const char* thread)
{	std::fstream myfile;	
	myfile.open("exe1.txt",ios::out|ios::app);
	std::unique_lock<mutex>lock(m1);
	
	for(int i=0;i<10;i++)
	myfile<<"Writing the file from thread "<<thread<<" i= "<<i<<"thread id is "<<std::this_thread:: get_id()<<std::endl;
	myfile.close();
}


int main()
{
	std::thread t1(WriteFile,"T1");
	std::thread t2(WriteFile,"T2");
	t1.join();
	t2.join();
	//myfile.open("exe1.txt",ios::trunc);
	//myfile.clear();
return 0;
}
	
	
 
