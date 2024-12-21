#include<iostream.h>
#include<conio.h>
class parent1
{
	public:
	int num1;
};
class parent2
{
	public:
	int num2;
};
class child : public parent1 , public parent2
{
	public:
	int num3;
	void c_fun()
	{
	cout<<"Value of num1:"<<num1<<endl;
	cout<<"Value of num2:"<<num2<<endl;
	cout<<"Value of num3:"<<num3<<endl;
	}
};
class subchild : public parent1
{
	public:
	void s_fun()
	{
		cout<<"Value of num1 in subchild:"<<num1<<endl;
	}
};
class superchild : public parent1
{
	public:
	void sup_fun()
	{
		cout<<"Value of num1 in sup_child:"<<num1<<endl;
	}
};
	void main()
	{
		clrscr();
		child obj;
		obj.num1=10;
		obj.num2=20;
		obj.num3=30;
		obj.c_fun();

		subchild sobj;
		sobj.num1=1;
		sobj.s_fun();

		superchild sup_obj;
		sup_obj.num1=2;
		sup_obj.sup_fun();

		getch();
	}