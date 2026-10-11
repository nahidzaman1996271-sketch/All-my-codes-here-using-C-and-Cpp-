#include <iostream>

using namespace std;

class student{

public:
    int id;
    double cgpa;

void display(){

cout << id << "  " << cgpa << endl << endl;

}
void set_value(int x, double y){
id = x;
cgpa = y;
}

};
int main(){

student Nahid ,Ibn;
Nahid.set_value(101,3.98);
Nahid.display();

Ibn.set_value(65,3.85);
Ibn.display();
return 0;
}
