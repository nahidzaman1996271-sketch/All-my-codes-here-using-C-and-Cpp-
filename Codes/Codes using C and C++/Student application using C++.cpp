#include <iostream>

using namespace std;

int main(){
int n;
cout<<"The number of students: ";
cin >> n;
int a[n];
for(int i=0; i<n; i++){
    cout<<"The number of student " << i+1 << ": ";
    cin >> a[i];
}
int sum = 0;
for(int i=0;i<n;i++){
    sum += a[i];
}
cout <<"Total numbers: "<< sum<<endl;
float avg = (float)sum/ n;
cout << "Total average: "<< avg<<endl;
int max = a[0];
int min = a[0];
for(int i=0;i<n;i++){

    if(max < a[i]){
        max = a[i];
    }
    if(min > a[i]){
        min = a[i];
    }
}
cout << "The maximum number is: "<<max <<endl;
cout << "The minimum number is: "<<min <<endl;
return 0;
}
