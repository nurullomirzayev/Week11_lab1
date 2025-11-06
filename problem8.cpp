#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> grades(n);
    for (int i = 0; i < n; i++)
        cin >> grades[i];

    double sum = 0;
    double maxGrade = grades[0];
    double minGrade = grades[0];

    for (int i = 0; i < n; i++) {
        sum += grades[i];
        if (grades[i] > maxGrade) maxGrade = grades[i];
        if (grades[i] < minGrade) minGrade = grades[i];
    }

    double average = sum / n;

    cout << "Maximum grade: " << maxGrade << endl;
    cout << "Minimum grade: " << minGrade << endl;
    cout << "Average grade: " << average << endl;

    return 0;
}
