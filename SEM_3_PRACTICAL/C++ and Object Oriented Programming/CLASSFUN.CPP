#include<iostream.h>
#include<conio.h>
//write a C++ program to use function as class member.
	class sy
	{
	  public:
	  void UDF()
	  {
	  cout<<"\nNow You are in the UDF";
	  cout<<"\nHello UDF";
	  }
	};
void main()
{
	clrscr();
	sy obj;
	cout<<"\nHello Main";
	cout<<"\nBefore the function Call";
	obj.UDF();
	cout<<"\nAfter the function Call";
	cout<<"\nBBy Main";
	getch();
}