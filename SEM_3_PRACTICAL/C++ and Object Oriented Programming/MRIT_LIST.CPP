#include <iostream.h> // use proper iostream header
#include <conio.h>  // for clrscr() and getch() functions in Turbo C++

class result
{
    public:
    int rollno;
    char name[10];  // array to store the name
    int sub1;
    int sub2;
    int sub3;

    // Corrected function signature for 'getdata'
    void getdata(int r, const char* nm, int s1, int s2, int s3) 
    {
        rollno = r;
        strcpy(name, nm); // use strcpy to copy strings into char arrays
        sub1 = s1;
        sub2 = s2;
        sub3 = s3;
    }

    void show()
    {
        cout << "Student Rollno: " << rollno << endl;
        cout << "Student Name: " << name << endl;
        cout << "Student Sub1 Mark: " << sub1 << endl;
        cout << "Student Sub2 Mark: " << sub2 << endl;
        cout << "Student Sub3 Mark: " << sub3 << endl;
    }
};

int main()  // Corrected 'void main()' to 'int main()'
{
    clrscr();  // Clears the screen (specific to Turbo C++)
    
    result obj[10]; // Array to store 10 student results
    int i;
    char nm[10]; // Temporary array to input name

    for (i = 1; i < 10; i++) // Loop from 1 to 9 (change as per requirement)
    {
        cout << "Enter rollno of student: ";
        cin >> obj[i].rollno;

        cout << "Enter name of student: ";
        cin >> nm;

        cout << "Enter sub1 mark: ";
        cin >> obj[i].sub1;

        cout << "Enter sub2 mark: ";
        cin >> obj[i].sub2;

        cout << "Enter sub3 mark: ";
        cin >> obj[i].sub3;

        // Call getdata with proper arguments
        obj[i].getdata(obj[i].rollno, nm, obj[i].sub1, obj[i].sub2, obj[i].sub3);
        
        obj[i].show(); // Display student information
    }

    getch(); // Wait for user input (specific to Turbo C++)
    return 0; // Indicating successful execution
}
