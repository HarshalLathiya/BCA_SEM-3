#include<iostream.h>
#include<conio.h>
//write a C++ program to use scope resoltion operator.
class sy
{
	public:
	void UDF();//this is the declaration of UDf
};
void sy::UDF()//body of function
{
	cout<<"\nNow You are in the UDF";
	cout<<"\nHello UDF";
}
void main()
{
	clrscr();
		sy obj;//create object for class
			cout<<"\nHello Main";
			cout<<"\nBefore the function Call";
		obj.UDF();//object with function call
	cout<<"\nAfter the function Call";
	cout<<"\nBBy Main";
	getch();
}