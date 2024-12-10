#include<iostream.h>
#include<conio.h>
int s(int n)
{
	int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int c(int n)
{
	int count=0;
	while(n>0)
	{
		count++;
		n/=10;
	}
	return count;
}
void main()
{
	clrscr();
	int num;
		cout<<"Enter a number:";
		cin>>num;
			int sum=s(num);
			int count=c(num);
		cout<<endl<<"Sum of Digit is:"<<sum;
		cout<<endl<<"Count of Digit is:"<<count;
	getch();
}