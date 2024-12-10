#include<iostream.h>
#include<conio.h>
//Write a C++ program to use pointer variable.
void main()
{
	int var=10;
	int *p=&var;
	clrscr();
	//cin>>var;
	cout<<"Value of normal variable is :"<<var;
	cout<<"\nValue of p is address of var:"<<p;
	cout<<"\nvalue of pointer *p is :"<<*p;
	getch();
}