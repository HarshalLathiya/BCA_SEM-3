#include<iostream.h>
#include<conio.h>
//unary operator over loading.
class syb
{
	private:
		int x;
	public:
	friend	syb operator +(syb);
	void show()
	{
		cout<<endl<<"Value of X is:"<<x;
	}
	void operator -()
	{
		x=-x;
	}
};
	syb operator +(syb o)//friend fun outside of the class
	{
		o.x=+10;
		cout<<endl<<"Operator overloading:"<<o.x;
		return o;//object return
	}
void main()
{
	clrscr();
	syb obj;//object creation
	obj=+obj;
	obj.show();
	-obj;
	obj.show();
	getch();
}