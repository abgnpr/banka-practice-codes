// smallest odd number

#include <iostream>
using namespace std;

int main() {
    
    int arr[10];
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }
    
    int sOdd; bool found = false;
    for (int i = 0; i < 10; ++i) {
        if (arr[i]%2/*arr[i] is odd*/) {
            if(!found) {/* this block executes only once */
                found = true;
                sOdd = arr[i];
            } else if (arr[i]<sOdd) {
                sOdd = arr[i];
            }
        }
    }
   
    if (found) cout << sOdd;
    else cout << "No odds in the list";

}
