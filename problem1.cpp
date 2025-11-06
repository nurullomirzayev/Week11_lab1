#include <iostream>
using namespace std;

const int SIZE = 4;

double sumColumn(const double m[][SIZE], int rowSize, int columnIndex) {
    double sum = 0;
    for (int i = 0; i < rowSize; i++) {
        sum += m[i][columnIndex];
    }
    return sum;
}

int main() {
    int rowSize;
    cout << "Enter number of rows: ";
    cin >> rowSize;

    double m[rowSize][SIZE];

    cout << "Enter elements (" << rowSize << "x" << SIZE << "):" << endl;
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> m[i][j];
        }
    }

    int columnIndex;
    cout << "Enter column index (0–3): ";
    cin >> columnIndex;

    cout << "Sum of column " << columnIndex << " = " << sumColumn(m, rowSize, columnIndex) << endl;

    return 0;
}
