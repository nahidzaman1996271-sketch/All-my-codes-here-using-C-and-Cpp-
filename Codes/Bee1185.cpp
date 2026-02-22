#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double M[12][12], sum = 0;
    char O;
    cin >> O;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> M[i][j];
        }
    }

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            if(j > i){   // above main diagonal
                sum += M[i][j];
            }
        }
    }

    if(O == 'S'){
        cout << fixed << setprecision(1) << sum << endl;
    }
    else{
        cout << fixed << setprecision(1) << sum / 66.0 << endl;
    }

    return 0;
}
