#include<iostream.h>
#include<conio.h>
	void f(int &x)
	{
		x--;
	}
void main()
{
	int a=5;
	clrscr();
		cout<<a<<endl;
		f(a);
		cout<<a<<endl;
	getch();
}