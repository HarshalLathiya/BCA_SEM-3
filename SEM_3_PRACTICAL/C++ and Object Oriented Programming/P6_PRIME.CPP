#include<iostream.h>
#include<conio.h>
class fun
{
	private:
	int a;
	void prime();
	public:
	void prime1()
	{
		prime();
	}
};
void fun::prime()
{
	int i,j,k=0;
	cout<<"Enter a Number:";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
		k++;
		}
	}
	if(k==2)
	{
		cout<<"This is prime number";
	}
	else
	{
	cout<<"This is not Prime number";
	}
}
void main()
{
	clrscr();
	fun obj;
	obj.prime1();
	getch();
}