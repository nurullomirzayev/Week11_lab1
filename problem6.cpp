#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    double matrix[100][100];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];

    for (int i = 0; i < n; i++) {
        double sum = 0;
        for (int j = 0; j < m; j++)
            sum += matrix[i][j];
        double average= sum /n
        cout << "Average of row " << i << " = " << average << endl;
    }

    return 0;
}
