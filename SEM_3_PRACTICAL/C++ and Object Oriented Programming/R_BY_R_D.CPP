#include<iostream.h>
#include<conio.h>
//write a C++ program for dynamic return by refrance
int a[5];//global array
int& fun(int i)
{
	return a[i];
}
void main()
{
	clrscr();
	int index,value;
	char message;
	do
	{
		cout<<endl<<"Enter an Index :";
		cin>>index;
	if(index<0 || index>4)//if you enter grater than 4 it will throw indexout message
	{
		cout<<endl<<"index out";
	}
	else
	{
		cout<<endl<<"Enter value of index:";
		cin>>value;
		fun(index)=value;
	}
		cout<<endl<<"do you want to continue:";
		cin>>message;
	}while(message=='y'||message=='Y');
	for(int i=0;i<5;i++)
	{
		cout<<"a["<<i<<"]"<<a[i]<<endl;
	}
	getch();
}


