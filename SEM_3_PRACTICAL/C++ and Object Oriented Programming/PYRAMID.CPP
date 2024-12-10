#include<iostream.h>
#include<conio.h>
//write a C++ program to print pyramid.
void main()
{
	clrscr();
	int rows=5;
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=i;j++)
		{
		cout<<"*";
		}
		cout<<"\n";
	}
	getch();
}