#include<iostream.h>
#include<conio.h>
//write a C++ program for multiple operation using switch case
class sy
{
	public:
	void armstrong(int num);
	void fibonacci(int num);
	void factorical(int num);
};
	void sy::armstrong(int num)
	{
		int r,sum=0,temp;
		temp=num;
		while(num>0)
		{
			r=num%10;
			sum=sum+(r*r*r);
			num=num/10;
		}
		if(temp==sum)
			{
				cout<<"Number is Armstrong";
			}
			else
			{
				cout<<"Number is not Armstrong";
			}
	}
	void sy::fibonacci(int num)
	{
		int a=0, num2=1,temp;
		for(int i=1;i<=num;i++)
		{
		temp=a+num2;
		cout<<endl<<a<<"+"<<num2<<":"<<temp;
		a=num2;
		num2=temp;
		temp=num2;
		}
	}
	void sy::factorical(int num)
	{
		int fact=1;
		for(int i=1;i<=num;i++)
		{
			fact=fact*i;
		}
			cout<<"Factorial of :"<<num<<"is:"<<fact<<endl;
	}
void main()
{
	clrscr();
	sy num;//object declaration
	int choice,value;//choice and value variable declaration
	cout<<"Enter the number that you want to check:";
	cin>>value;
	cout<<"Enter Your choise for which operation do you want to perform:";
	cin>>choice;
	switch(choice)
	{
	case 1:
	num.armstrong(value);
	break;
	case 2:
	num.fibonacci(value);
	break;
	case 3:
	num.factorical(value);
	break;
	default:
	cout<<"invalid choice";
	}
	getch();
}