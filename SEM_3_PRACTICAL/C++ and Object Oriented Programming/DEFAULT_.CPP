#include<iostream.h>
#include<conio.h>
//write a C++ program for default argument
void fun(int num1=100)
{
cout<<endl<<"Value is:"<<num1;
}
void main()
{
	clrscr();
	int num=10;
	cout<<endl<<"Hello BCA";
	cout<<endl<<"First time function call with value:";
	fun(num);
	cout<<endl<<"second time function call with default value:";
	fun();
	getch();
}