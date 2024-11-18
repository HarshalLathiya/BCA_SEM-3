#include<iostream.h>
#include<conio.h>
//write a C++ program to multi-level inheritance
class perent
{
	public:
	int home;
};
class child : public perent
{
	public:
	char car[10];
};
class sub_child : public child
{
	public:
	void print()
	{
		cout<<"number of Home by super perent:";
		cin>>home;
		cout<<"you have car by child:";
		cin>>car;
		cout<<endl<<"Sub_child have :";
		cout<<endl<<"number of Home by super perent:"<<home;
		cout<<endl<<"you have car by child:"<<car;

	}
};
void main()
{
	clrscr();
	sub_child obj;
	obj.print();
	getch();
}