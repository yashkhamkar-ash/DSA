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

//Steps

1.Start

2.Initialize array arr with n = 10 elements.

3.Input the search element x.

4.Set index variable i ← 0.

5.Repeat while i < n:

  If arr[i] == x, then:

   Print "Element is at location i+1".

   Break from loop.

  Else increment i.

6.After loop:

  If i == n, then print "Element not found".

7.Case Analysis:

  If i == 0, print "Best Case".

  Else if 0 < i < n, print "Average Case".

  Else if i == n, print "Worst Case".

8.Stop
