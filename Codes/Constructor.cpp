#include <iostream>
#include <conio.h>
using namespace std;

class student
{
    public:
int id;
double cgpa;


void display()
{
    cout << id << " " << cgpa << endl << endl;

}

student(int x, double y)
{
    id = x;
    cgpa = y;
}
};
int main(){

student Nahid(571,3.88);
Nahid.display();
student Mahmuda(537,3.96);
Mahmuda.display();
getch();
}
              /*constructor name must be as a class name
                     in constructor no need to call function  */


