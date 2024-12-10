#include<iostream.h>
#include<conio.h>
//write a C++ program to print number without reassigning.
void main()
{
	clrscr();
	int row,column,number=0,num=5;
	for(row=0;row<=num;row++)
	{
		for(column=0;column<=row;column++)
		{
			cout<<number<<" ";
			number++;
		}
		cout<<"\n";
	}
	getch();
}