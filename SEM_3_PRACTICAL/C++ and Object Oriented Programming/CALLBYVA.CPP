#include<iostream.h>
#include<conio.h>
void sy(int num)
{
	cout<<endl<<endl<<"\t\t\tWelcome to UDF";
	cout<<endl<<"\t\t\tThanks to bring value from Main function:"<<num;
	num+=100;
	cout<<endl<<"\t\t\tBrought value through Call by value add 100 in 10:"<<num;
	cout<<endl<<"\t\t\tBBye to UDF";
}
void main()
{
	clrscr();
	int num2=10;
	cout<<"Welcome to Main";
	cout<<endl<<"value of local Variable in Main is:"<<num2;
	sy(num2);
	cout<<endl<<endl <<"Welcome back to main ";
	cout<<endl<<"value of local Variable in Main is:"<<num2;
	getch();
}