#include <iostream>
using namespace std;
const int N = 4;
void multiplyMatrix(const double a[][N],
const double b[][N], double c[][N]){
   int sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
int main() {
    const double a[N][N] = {
        1.0,2.0, 3.0, 4.0,
5.0 ,6.0, 7.0, 8.0,
9.0, 10.0 ,11.0 ,12.0,
13.0, 14.0 ,15.0, 16.0
    };
    const double b[N][N] = {
        1.5, 2.5, 3.5, 4.5,
        5.5, 6.5, 7.5, 8.5,
        9.5, 10.5, 11.5, 12.5,
        13.5, 14.5, 15.5, 16.5,
    };
    double c[N][N];
    multiplyMatrix(a,b,c);
for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
        cout << c[i][j] << " ";
    }
    cout << endl;
}
    return 0;
}

