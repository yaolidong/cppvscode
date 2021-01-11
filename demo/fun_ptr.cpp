//______________________________________________________________
//_            File  Name   : fun_ptr.cpp
//_            Author       : Yaolidong
//_            My   email   :yao401405972@gmail.com
//_            Created Time :Mon Jan 11 14:49:03 2021
//______________________________________________________________

#include <iostream>
using namespace std;

double square(int lines)
double rectangle(int lines)

void area(int len_Side,double (*pt)(int lines))
int main()
{
	cout<<"what volume you wanted to account?"<<endl;
	cout<<"1.square"<<endl;
	cout<<"2.rectangle"<<endl;
	double area;
	int code;
	cin>>code;
	switch (code)
case 1:
		cout<<"the volume of square is "<<area(lines,square)<<endl;
case 2:
		cout<<"the volume of rectangle is "<<area(lines,rectangle)<<endl;
default:
		cout<<"输入错误"<<endl;
	return 0;
}
double square(int lines)
{
	double s;
	s = lines*lines;
	return s;
}

double rectangle(int lines)
{
	double s;
	s = 0.9*lines*lines;
	return s;
}
double area(int len_Side,double(*pt)(int lines))
{
	int height = 5;
	double volume;
	volume = height *(*pt)(len_Side);
	return volume;
}

	
