#include <iostream>
using namespace std;
int main()
{
    int par[5],impar[5],evencount=0,oddcount=0,num;
for(int i=0; i<15; i++){
    cin >> num;
    if(num%2==0){
        if(evencount==5){
            for(int j=0; j<5; j++){
                cout << "par[" << j << "] = " << par[j] << endl;
                evencount = 0;
            }
        }
        par[evencount++]=num;

    }
    else{
            if(oddcount==5){
                           for(int j=0; j<5; j++){
                cout << "impar[" << j << "] = " << impar[j] << endl;
                oddcount = 0;
            }
        }
        impar[oddcount++]=num;

    }
            }

        for(int k=0; k<oddcount; k++){
            cout << "impar[" << k << "] = " << impar[k] << endl;
        } for(int k=0; k<evencount; k++){
            cout << "par[" << k << "] = " << par[k] << endl;
        }
        return 0;

    }
