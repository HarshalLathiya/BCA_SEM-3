#include<iostream.h>
#include<conio.h>
class demo
{
	private:
	int num1,num2;
	public:
	demo(int x,int y):num1(x),num2(y)
	{}
	void show()
	{
		cout<<endl<<"Value of Num1:"<<num1;
		cout<<endl<<"Value of Num2:"<<num2;
	}
};
void main()
{
	clrscr();
	demo obj(10,10);
	obj.show();
	getch();
}