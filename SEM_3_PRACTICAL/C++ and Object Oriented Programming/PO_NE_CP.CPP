#include<iostream.h>
#include<conio.h>
class number
{
	private:
	int value;//pvt_data_member
	void positive_num()//pvt_member_function
	{
	 cout<<endl<<"Entered value is positive"<<value;
	}
	public:
	number()//constructor
	{
		cout<<endl<<"Enter one value to check entered value is positive or negative:";
		cin>>value;
		if(value<0)
		{
		cout<<endl<<"Entered value is negative:"<<value;
		}
		else
		{
			positive_num();//function call
		}
	}
};
void main()
{
	clrscr();
	number obj;//object creation
	getch();
}