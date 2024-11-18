#include<iostream.h>
#include<conio.h>
//Write a C++ program to use referance variable to store normal variable.
void main()
{
	clrscr();
	int var=100;
	int &ref=var;
	//cin>>var;
	cout<<"value of normal Variable:"<<var;
	cout<<"\nvalue of &ref is:"<<ref;
	cout<<"\nAddress of var is :"<<&var;
	cout<<"\nAddress of ref is :"<<&ref;
	getch();
}