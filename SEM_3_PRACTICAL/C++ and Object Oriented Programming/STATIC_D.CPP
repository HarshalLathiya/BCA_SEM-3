#include<iostream.h>
#include<conio.h>
//write a C++ program for use of static data member
class bca
{
	public:
	static int num;
	void sy();
};
int bca::num;
void bca::sy()
{
	cout<<endl<<"Value of num is:"<<num;
}
void main()
{
	clrscr();
	bca h,m;
	cout<<"Hello Main"<<endl;
	h.num=11;
	h.sy();
	m.sy();
	getch();
}