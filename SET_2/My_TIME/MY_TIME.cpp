#include "MyTime.h"
#include <iostream>
using namespace std;

MyTime::MyTime() :
	hrs(0), mins(0), sec(0)
{ }
MyTime::MyTime(int x, int y, int z) :
	hrs(x), mins(y), sec(z)
{ }
MyTime::MyTime(int x, int y) :
	hrs(x), mins(y), sec(0)
{ }
MyTime MyTime :: operator+(const MyTime& ref_val)
{
	int tmins = mins + ref_val.mins;
	int thrs = hrs + ref_val.hrs;
	return MyTime(thrs, tmins);
}
MyTime  MyTime ::operator - (const MyTime& ref_val)
{
	int tmins = mins - ref_val.mins;
	int thrs = hrs - ref_val.hrs;
	return Mytime(thrs, tmins);
}
MyTime  MyMyTime:: operator + (int nmins)
{
	int tmins = mins + nmins; // TODO: tmins > 60
	int thrs = hrs;
	return MyTime(thrs, tmins);
}
MyTime  MyTime ::operator - (int nmins)
{
	int tmins = minutes - nmins; // TODO: tmins > 60
	int thrs = hrs;
	return MyTime(thrs, tmins);
}
void  MyTime :: operator++ ()
{

	this->mins = (this->mins) + 1;
	if ((this->minutes) > 60)
	{
		this->hrs += 1;
		this->mins -= 60;
	}
}
void  MyTime ::operator++ (int data)
{
	this->mins += data;
	if ((this->mins) > 60)
	{
		this->hrs += 1;
		this->mins -= 60;
	}

}
bool MyTime ::   operator == (const MyTime& ref_val)
{
	return hrs == ref_val.hrs && mins == ref_val.mins;
}
/*Mytime :: Mytime & operator += ()
{
	return *this;
}
*/
MyTime& MyTime :: operator += (const MyTime& ref_val)
{
	hrs += ref_val.hrs;
	mins += ref_val.mins;
	return *this;
}
bool MyTime ::  operator < (const MyTime& ref_val)
{
	return hrs < ref_val.hrs && mins < ref_val.mins;
}
bool MyTime ::  operator > (const MyTime& ref_val)
{
	return hrs > ref_val.hrs && mins > ref_val.mins;
}
void MyTime::display()
{
	cout << " Hours: " << hrs << "Mins: " << minutes << "Seconds: " << sec;
