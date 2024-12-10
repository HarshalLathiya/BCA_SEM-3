#include<iostream.h>
#include<conio.h>
//write a C++ program for member of nesting function.
class sy
{
	public:
	int num;
	void show()
	{
		cout<<endl<<"Hello Member function";
		fun();
	}
	private:
	void fun()
	{
	cout<<endl<<"Hello UDF";
	}
};
void main()
{
	sy obj;
	clrscr();
	obj.show();
	getch();
}
