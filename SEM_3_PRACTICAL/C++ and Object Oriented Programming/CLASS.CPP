#include<iostream.h>
#include<conio.h>
//write a c++ program to creat class.
class sy
{
	public:
	int num1;
};
void main()
{
	clrscr();
	sy obj;
	obj.num1=100;
	cout<<"class member value is :";
	cout<<obj.num1;
	getch();
}