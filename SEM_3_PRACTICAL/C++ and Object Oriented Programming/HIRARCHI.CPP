#include<iostream.h>
#include<conio.h>
#include<string.h>
//write a C++ program to use hirarchical inheritance
class bca//base class
{
	public:
	int rollno;
	char name[10];
	int srno;
	float marks;
};
class fy : public bca//derived1
{
	public:
	void assign()
	{
		rollno=415;
		strcpy(name, "Harshal"); // Use strcpy to copy the string
		srno=1;
		marks=74.90;
	}
	void show()
	{
		cout<<rollno<<endl;
		cout<<name<<endl;
		cout<<srno<<endl;
		cout<<marks<<endl<<endl;
	}
};
class sy : public bca//derived2
{
	public:
	void assign()
	{
		rollno=416;
		 strcpy(name, "Harshal"); // Use strcpy to copy the string
		srno=2;
		marks=78.90;
	}
	void show()
	{
		cout<<rollno<<endl;
		cout<<name<<endl;
		cout<<srno<<endl;
		cout<<marks<<endl;
	}

};

void main()
{
	clrscr();
	fy fobj;
	sy sobj;
	fobj.assign();
	fobj.show();
	sobj.assign();
	sobj.show();
	getch();
}