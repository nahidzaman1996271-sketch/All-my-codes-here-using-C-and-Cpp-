#include <iostream>
using namespace std;
class student
{
    public:
int id;
double cgpa;

void display()
{
    cout << id << " " << cgpa << endl;

}
student(int x, double y)
{
    id = x;
    cgpa = y;

}
student()
{
cout << "Default constructor: " << endl << endl;
}
};
int main(){
student ob;
student Nahid(571,3.80);
Nahid.display();

student Ifti(648,3.98);
Ifti.display();

}


