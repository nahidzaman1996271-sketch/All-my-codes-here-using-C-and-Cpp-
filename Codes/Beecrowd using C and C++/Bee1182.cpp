#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int v;
    char T;
    float M[12][12];
    float sum = 0.0;

    cin >> v;
    cin >> T;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> M[i][j];
        }
    }

    for(int i = 0; i < 12; i++){
        sum += M[i][v];
    }

    if(T == 'S'){
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if(T == 'M'){
        cout << fixed << setprecision(1) << sum / 12.0 << endl;
    }

    return 0;
}
