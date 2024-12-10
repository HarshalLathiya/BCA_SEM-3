#include<iostream.h>
#include<conio.h>
class syb
{
	public:
	int x;
};
void main()
{
	clrscr();
	syb obj;
	int syb::*p=&syb::x;
	cout<<"Enter Value of Pointer variable:";
	cin>>obj.*p;
	cout<<"Value of Pointer:"<<obj.*p;
	getch();
}