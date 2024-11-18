#include<iostream.h>
#include<conio.h>
//scope resolution
int num=100;
void main()
{
	clrscr();
	int num=10;
	cout<<"\nThis is for normal variable:"<<num;
	cout<<"\nThis is for Scope resolution Value:"<<::num;
	getch();
}