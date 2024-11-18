#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int value;
	cout<<"Enter a number to print Triangle:";
	cin>>value;
	int num1,num2,sum=0;
	for(int i=1;i<=value;i++)
	{
		num1=0,num2=1;
		for(int j=1;j<=i;j++)
		{
			sum=num1+num2;
			cout<<num2<<" ";
			num1=num2;
			num2=sum;
		}
		cout<<endl;
	}
	getch();
}