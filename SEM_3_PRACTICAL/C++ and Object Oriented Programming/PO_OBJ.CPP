#include<iostream.h>
#include<conio.h>
#include<string.h>
//write a C++ program for pointer to object.
class bca
{
	public:
	int rollno;
	char name[10];
	bca()
	{
		rollno=416;
		strcpy(name,"Harshal");
	}
	void display()
	{
		cout<<"Roll number is :"<<rollno<<endl;
		cout<<"Name is :"<<name;
	}

};
void main()
{
	clrscr();
	bca obj;
	bca *pobj;
	pobj=&obj;
	pobj->display();
	getch();
}