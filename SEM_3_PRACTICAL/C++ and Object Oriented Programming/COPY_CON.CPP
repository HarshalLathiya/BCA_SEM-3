#include<iostream.h>
#include<conio.h>
class syb
{
	int x;
	public:
	syb(int s)
	{
		x=s;
		cout<<"\nHello constructor";
	}
	syb(syb &obj)
	{
		cout<<"\nCopy constructor";
		x=obj.x;
	}
	void show()
	{
		cout<<"\nHello Member function"<<x;
	}
};
void main()
{
	clrscr();
	syb obj(11),obj1(obj);
	obj.show();
	obj1.show();
	getch();
}