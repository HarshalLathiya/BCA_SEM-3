#include<iostream.h>
#include<conio.h>
// Unary operator overloading.
class bca
{
	public:
	int pub;

	void fun()
	{
		cout << endl << "Final value of pub is : " << pub;
	}

	// Overloading the unary minus (-) operator
	bca operator -()
	{
		bca temp;
		temp.pub = -pub;  // Negate the value of x
		return temp;
	}
};

void main()
{
	clrscr();
	bca obj1, obj2;
	obj1.pub = 10;
	obj2 = -obj1; // Unary operator overloading

	cout << endl << "Original value of obj.pub: " << obj1.pub;
	cout << endl << "Negated value in obj1.pub: " << obj2.pub;
	obj2.fun();
	getch();
}
