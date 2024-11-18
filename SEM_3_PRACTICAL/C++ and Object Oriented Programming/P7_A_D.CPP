#include <iostream.h>
#include<conio.h>
class arr{
public:
    int a[5];
    void display();
    void input();
};
void arr::input()
{
	int found,num,i,j;
	for ( i = 0; i < 5;)
	{
	    found=1;
	    cout << "\nEnter Value:";
	    cin>>num;
	    if (num < 0)
	    {
		cout << "Invalid number. Please enter a positive number." << endl;
		found=0;
	    }
	    else
	    {
		for (j = 0; j < i; j++)
		{
		    if (a[j] == num)
		    {
			cout << "Number already exists. Please enter a unique number." << endl;
			found = 0;
			break;
		    }
		}

	    }
	       if (found==1)
		{
		    a[i] = num;
		    i++;
		}
	}
	display();
    }
    void arr::display(){

	for(int i = 0; i<5;i++)
	{
	    for(int j = 0; j<4;j++)
	{
	    if(a[j]>a[j+1])
	    {
		int temp;
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	    }
	}

	}
	cout << "\nAscending Order:" << endl;
	for(i=0;i<5;i++)
	{
	    cout <<a[i]<< endl;
	}
	cout << "\nDescending Order:" << endl;
	for(i=4;i>=0;i--)
	{
	    cout <<a[i]<< endl;
	}
    }

void main()
{
	clrscr();
	arr obj;
	obj.input();
	getch();
}