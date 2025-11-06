#include <iostream>
using namespace std;
const int SIZE = 4;
double sumMajorDiagonal(const double m[][SIZE]){
double sum=0;

    for (int i=0;i<SIZE;i++) {
        sum+=m[i][i];
    }
    return sum;
}
int main() {
    int rowSize;
    cout << "Enter number of rows: ";
    cin >> rowSize;
    double m[rowSize][SIZE];
    cout<<"enter matrix elements("<<'x'<<SIZE<<"):";
    for (int i=0;i<rowSize;i++) {
        for (int j=0;j<SIZE;j++) {
            cin>>m[i][j];
        }
    }
    cout<<sumMajorDiagonal(m)<<endl;
    return 0;
}