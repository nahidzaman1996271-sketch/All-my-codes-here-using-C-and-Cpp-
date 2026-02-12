#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char O;
    cin >> O;

    double M[12][12];
    double sum = 0.0;

    /// Input
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin >> M[i][j];
        }
    }

    /// Sum above main diagonal
    for(int i=0; i<12; i++){
        for(int j=i+1; j<12; j++){
            sum += M[i][j];
        }
    }

    if(O == 'S'){
        cout << fixed << setprecision(1) << sum << endl;
    } else { /// 'M'
        cout << fixed << setprecision(1) << sum/66.0 << endl;
    }

    return 0;
}
