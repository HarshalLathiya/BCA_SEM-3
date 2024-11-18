#include<iostream.h>
#include<conio.h>
//write a C++ program for dynamic constructor
class syb
{
	char *name;
	public:
	syb()
	{
		name= new char[7];
		name="Harshal";
		cout<<"\nHello constructor";
	}
	void show()
	{
		cout<<"\nmemory allocated by new and Name is :"<<name;
	}
};
void main()
{
	clrscr();
	syb obj;
	obj.show();
	getch();
}