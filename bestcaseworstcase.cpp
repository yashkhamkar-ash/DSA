#include<iostream>
using namespace std;
int main() {
    int x;
    int i;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "enter the number" << endl;
    cin >> x;
    for(i = 0; i < 10; i++) {
        if(arr[i] == x) {
            cout << "element is at " << i + 1 << " location" << endl;
            break;
        }
    }
    if(i==10) {
        cout << "element not found" << endl;
    }
    if(i==0){
        cout << "best case" << endl;
    }
    else if(i<10){
        cout << "average case" << endl;
    }
    else(i>=10);{
    cout << "worst case case" << endl;
    }

    return 0;
}
