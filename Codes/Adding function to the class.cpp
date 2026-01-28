#include <iostream>
using namespace std;
class Student
{
public:
    int id;
    double cgpa;
    void display(){
    cout << id << "  " << cgpa<<endl << endl;
    }
};
int main(){
    Student Nahid, Pranjol;
Nahid.id = 571;
Nahid.cgpa = 3.85;
Nahid.display();

Pranjol.id = 648;
Pranjol.cgpa = 3.95;
Pranjol.display();


}
