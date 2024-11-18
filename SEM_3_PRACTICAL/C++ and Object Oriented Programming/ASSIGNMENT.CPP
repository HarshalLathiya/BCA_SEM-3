#include<iostream.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	for(i=1;i<5;i++)
	{
		for(n=1;n<=i;n++)
		{
			if(n%2==0)
			{
			 cout<<n;
			}
			else
			{
			cout<<"*";
			}
		}
	cout<<"\n";
	}
	getch();
}