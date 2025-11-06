#include <iostream>
using namespace std;
int findMax(const int arr[][100],int rows, int columns) {
    int max = arr[0][0];
    for (int i = 1; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}
int main() {

    int rows; int columns;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;
    int arr[100][100];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin>>arr[i][j];
        }
    }
    int maxVal = findMax(arr, rows, columns);
    cout <<"maximum elemnt in matrix:" <<maxVal << endl;
    return 0;
}