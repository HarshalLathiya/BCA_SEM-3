#include<iostream.h>
#include<conio.h>
//write a C++ program to use multiple inheritance.
class base1
{
	protected:
	int num1;
};
class base2
{
	protected:
	int num2;
};
class derived : public base1,public base2
{
	public:
	derived()
	{
		num1=11;
		num2=77;
	}
	void display()
	{
	cout<<"value of num1 is :"<<num1<<endl;
	cout<<"value of num2 is :"<<num2;
	}
};
void main()
{
	clrscr();
	derived obj;
	obj.display();
	getch();
}