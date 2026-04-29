#include<iostream>
#include<iomanip>
using namespace std;
int main(){
double M[12][12],sum=0,avg;
int x=1,y=10,ct=0;
char O;
cin >> O;
for(int i=0;i<12;i++){
    for(int j=0;j<12;j++){
        cin >> M[i][j];
    }
}
for(int i=0;i<5;i++){
    for(int j=x;j<=y;j++){
            sum+=M[j][i];
            ct++;
    }
            x++;
            y--;
}
avg = sum / (double)ct;
if(O=='S'){
cout << fixed << setprecision(1)<<sum << endl;
}
else{
    cout << fixed << setprecision(1)<<avg << endl;
}
return 0;
}
