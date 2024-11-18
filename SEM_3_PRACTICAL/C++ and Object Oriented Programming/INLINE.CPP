#include<iostream.h>
#include<conio.h>
//write a C++ program for Inline function
inline int cube(int num)
{
	return num * num * num;
}
void main()
{
	clrscr();
	int a;
	cout<<"Enter number that you want to cube:";
	cin>>a;
	cout<<endl<<"Hello BCA";
	cout<<endl<<"cube of 3 is:"<<cube(a);
	cout<<endl<<"BBy BCA";
	getch();
}