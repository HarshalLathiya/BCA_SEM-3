#include<iostream.h>
#include<conio.h>
//write a C++ program to create array of object
class stud
{
	int roll;
	char name[30];
	public:
	void get_data()
	{
		cout<<"Enter Roll number:";
		cin>>roll;
		cout<<"Enter Name:";
		cin>>name;
	}
	void show_data()
	{
		cout<<endl<<"Roll number:"<<roll;
		cout<<endl<<"Name:"<<name;
	}
};
	void main()
	{
		clrscr();
		stud obj[2];
		for(int i=0;i<2;i++)
		{
			obj[i].get_data();
		}
		for(int j=0;j<2;j++)
		{
			obj[j].show_data();
		}
		getch();
	}