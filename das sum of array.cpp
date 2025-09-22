// Write a C++ program to find the sum of elements in an array and analyze its time complexity using its frequency count.


#include <iostream> 
using namespace std;
int main() {
    int a[10];
    int sum = 0; 
    cout << "Enter the elements of the array: " << endl;

    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    cout << "The elements of the array are: ";
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
     cout << endl;

    for (int i = 0; i < 10; i++) {
        sum += a[i];
    }

    cout << "The sum of the elements in the array is: " << sum << endl;

    return 0;
}
