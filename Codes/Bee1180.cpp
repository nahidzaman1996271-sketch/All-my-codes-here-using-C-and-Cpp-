#include <iostream>
using namespace std;
int main()
{
int k;
cin >> k;
int n[k];
for(int i=0; i<k; i++){
    cin >> n[i];
}
int min = n[0];
int pos = 0;
for(int i=0; i<k; i++){
        if(n[i]<min){
            min = n[i];
            pos = i;
        }
}
cout << "Menor valor: "<< min << endl;
cout << "Posicao: "<< pos << endl;
return 0;
}
