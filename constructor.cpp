
#include <iostream>
#include <string.h>
using namespace std;

// class definition
class student {
    int rno;
    char name[50];
    double fee;

public:
    student(int, char[], double);
    void display();
};


student::student(int no, char n[], double f)
{
    rno = no;
    strcpy(name, n);
    fee = f;
}

void student::display()
{
    cout << endl << rno << "\t" << name << "\t" << fee;
}

// driver code
int main()
{
    student s(1001, "Ram", 10000);
    s.display();
    return 0;
}
