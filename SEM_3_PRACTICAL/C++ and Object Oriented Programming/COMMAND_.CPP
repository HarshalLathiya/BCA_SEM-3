#include<iostream.h>
#include<conio.h>
//command line argument
void main(int argc,char *argv[])
{
	clrscr();
	int i;
	cout<<endl<<"\nTotal argument is :"<<argc;
	cout<<"\nProgram name is:"<<argv[0];
	cout<<"\nother argument are:\n\n";
		for(i=0;i<argc;i++)
		{
		cout<<endl<<argv[i];
		}
		cout<<"in the end total argument is:"<<argc;
	getch();
}