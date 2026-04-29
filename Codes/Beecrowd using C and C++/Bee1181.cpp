#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int L,i,j,sum=0;
    float M[12][12],avg=0;
    char T;
    cin >> L;
    cin.ignore();
    cin >> T;
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            cin >> M[i][j];
        }
    }
    /* Quick note :
    for row: sum+= M[l][i];
    for column: sum+= M[i][l];
    */
     for(i=0;i<12;i++){
            sum+=M[L][i];
     }
     avg = sum / 12.0;
if(T == 'S'){
    cout << fixed << setprecision(1)<< sum <<  endl;

}
else {
    cout << fixed << setprecision(1)<< avg <<  endl;
}
return 0;
}
