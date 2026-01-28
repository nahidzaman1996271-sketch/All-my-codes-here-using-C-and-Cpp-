#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  double sum = 0.0;
for(int i=1, n=1; i<=39;i+=2, n*=2){
    sum += (double)i / n;
}
cout << fixed << setprecision(2);
cout << sum << endl;
return 0;
}
