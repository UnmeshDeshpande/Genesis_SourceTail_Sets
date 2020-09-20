#include "distance.h"
#include<iostream>
distance::distance() :feet(0), inch(0) {}

distance::distance(int ft, int in) : feet(ft), inch(in) {}

distance distance::operator+(const distance& d1)
{
	distance temp;
	temp.feet = d1.feet + feet;
	temp.inch = d1.inch + inch;
	temp.feet = temp.feet + (temp.inch / 12);
	temp.inch = temp.inch % 12;
	return temp;

}
distance distance::operator-(const distance& d1)
{
	distance temp;
	int ft, in;
	ft = (d1.feet * 12) + d1.inch;
	in = feet * 12 + inch;
	//temp.feet = d1.feet - feet;
	temp.inch = ft - in;
	temp.feet = (temp.inch / 12);
	temp.inch = temp.inch - (temp.feet * 12);
	return temp;
}
distance distance::operator+(int d)
{
	distance temp;
	temp.feet = d + feet;
	temp.inch = d + inch;
	temp.feet = temp.feet + (temp.inch / 12);
	temp.inch = temp.inch % 12;
	return temp;
}
distance distance::operator-(int d)
{
	distance temp;
	int ft, in;
	ft = (d * 12) + d;
	in = feet * 12 + inch;
	temp.inch = ft - in;
	temp.feet = (temp.inch / 12);
	temp.inch = temp.inch - (temp.feet * 12);
	return temp;
}

distance distance::operator++()
{
	distance temp;
	temp.feet = feet;
	temp.inch = inch + 1;
	if (temp.inch >= 12)
	{
		temp.feet = temp.feet + 1;
		temp.inch = 0;
	}
	return temp;
}
distance distance::operator++(int abc)
{

	distance temp;
	temp.feet = feet;
	temp.inch = inch;
	if (inch >= 12)
	{
		feet = feet + 1;
		inch = 0;
	}

	return temp;
}
bool distance::operator==(const distance& dist)
{
	if (dist.feet == feet && dist.inch == inch)
		return true;
	else
		return false;
}
bool distance::operator<(const distance& dist)
{
	if (dist.feet > feet && dist.inch > inch)
		return true;
	else
		return false;
}
bool distance::operator>(const distance& dist)
{
	if (dist.feet < feet && dist.inch < inch)
		return true;
	else
		return false;
}
void distance::display()
{
	std::cout << feet <<","<< inch << "\n";
}
int distance::get_feet()
{
	return feet;
}
int distance::get_inch()
{
	return inch;
}
