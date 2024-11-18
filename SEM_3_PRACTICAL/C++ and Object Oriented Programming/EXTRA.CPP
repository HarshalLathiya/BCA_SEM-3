#include<iostream.h>
#include<conio.h>
//write a C++ program to check getch() in UDF.
void sy() //function body
{
	cout<<"\nWelcome to UDF";
	getch();
	cout<<"\nBBy UDF";
}
	void main()
{
	clrscr();
	cout<<"Hello BCA in main...!";
	sy();//function call
	cout<<"\nBBy BCA in main.";
	getch();
}
