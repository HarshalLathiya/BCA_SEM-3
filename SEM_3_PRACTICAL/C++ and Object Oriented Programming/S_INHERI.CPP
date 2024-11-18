#include<iostream.h>
#include<conio.h>
//write a C++ program to use single inheritance
class bca
{
	private:
	int rollno;
		protected:
		char name[10];
	public:
	char div;
	int assign(int pv)
	{
	rollno=pv;
		cout<<"Enter Name:";
		cin>>name;
			cout<<"Enter Div:";
			cin>>div;
	return rollno;
	}
};
class syb:public bca
{
	private:
	int srno;
		protected:
		char pno[11];
			public:
			void table(int num)
			{
				char str[11];
				cout<<"Enter s.r_no:";
				cin>>srno;
		cout<<"Enter phone no:";
		cin>>pno;
	cout<<endl<<"rollno:"<<num;
	cout<<endl<<"name:"<<name;
	cout<<endl<<"Div:"<<div;
	cout<<endl<<"s.r_no:"<<srno;
	cout<<endl<<"phone number:"<<pno;
	}
};
void main()
{
	clrscr();
	int pva;
	syb obj;
	cout<<"Enter rollno:";
	cin>>pva;
	pva=obj.assign(pva);
	obj.table(pva);
	getch();
}