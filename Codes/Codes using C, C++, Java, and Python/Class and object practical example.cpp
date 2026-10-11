#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    double cgpa;


};

int main() {

Student Nahid, Mahmuda;
Nahid.id = 571;
Nahid.cgpa = 3.88;
cout << Nahid.id << "   " << Nahid.cgpa << endl;
cout << endl;
Mahmuda.id = 537;
Mahmuda.cgpa = 4.00;
cout << Mahmuda.id << "   " << Mahmuda.cgpa << endl;
return 0;
}
