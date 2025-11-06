#include <iostream>
using namespace std;
bool symmetric(const int arr[][100],int SIZE) {
    for(int i=0;i<SIZE;i++) {
        for(int j=0;j<SIZE;j++) {
            if(arr[i][j]!=arr[j][i]) {
                return false;
            }
        }
    }
    return true;
}
int main() {
    int SIZE;
    cout << "Enter size of array: ";
    cin >> SIZE;
    int arr[SIZE][100];
    for(int i=0;i<SIZE;i++) {
        for(int j=0;j<SIZE;j++) {
            cin>>arr[i][j];
        }
    }
    if(symmetric(arr,SIZE)) {
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }
    return 0;
}