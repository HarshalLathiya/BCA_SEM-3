#include<iostream.h>
#include<conio.h>
//write a c++ program for private member function
class bca
{
	private:
	void sy()
	{
	cout<<"\nHello SY BCA B";
	}
	public:
	void global()
	{
	sy();//private memeber function call
	}
};
void main()
{
	clrscr();
	bca obj;//object declared
	cout<<"\nHello Main";
	obj.global();//function call
	getch();
}