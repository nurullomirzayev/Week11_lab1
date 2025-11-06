#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 1; i < n - 1; i++) {
        if (v[i] < v[i - 1] && v[i] < v[i + 1])
            cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
