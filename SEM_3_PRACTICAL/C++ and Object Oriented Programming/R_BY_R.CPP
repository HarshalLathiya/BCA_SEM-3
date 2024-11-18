#include<iostream.h>
#include<conio.h>
//return by referance
int arr[5];
int &fun(int i)
{
	return arr[i];
}
void main()
{
	clrscr();
	int i;
	cout<<"Hello BCA.\n";
	fun(1)=10;
	fun(4)=20;
	for(i=0;i<5;i++)
	{
	cout<<"Value is :"<<arr[i]<<endl;
	}
	getch();
}