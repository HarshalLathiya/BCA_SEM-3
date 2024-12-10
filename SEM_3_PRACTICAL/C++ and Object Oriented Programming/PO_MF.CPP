#include<iostream.h>
#include<conio.h>
//write a C++ program to pointer to member function
//and pass value form main and sum in member function and print in main.
class syb
{
	public:
	int show(int n1,int n2)
	{
	int sum;
	cout<<endl<<"Value of n1:"<<n1;
	cout<<endl<<"Value of n2:"<<n2;
	sum=n1+n2;
	return sum;
	}
};
void main()
{
	clrscr();
	syb obj;
	int result;
	int (syb::*ptr)(int,int)=&syb::show;
	result=(obj.*ptr)(10,10);
	cout<<endl<<"Sum of both Value is :"<<result;
	getch();
}