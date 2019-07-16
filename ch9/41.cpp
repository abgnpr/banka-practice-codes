/* Program to input 20 numbers in a 1-D
 * and print the number as well as the 
 * location of the biggest and the
 * smallest number */

#include <iostream>
using namespace std;

int main() {


  int N; cin >> N; 
  int arr[N];
  
  // input loop
  for (int i = 0; i < N; ++i) {
    scanf("%d", &arr[i]);
  }

  int big = arr[1], bigloc = arr[1];
  int sma = arr[1], smaloc = arr[1];

  for (int i = 1; i < N; ++i) {
    if (big < arr[i]) {
      big = arr[i];
      bigloc = i;
    } else if (sma > arr[i]) {
      sma = arr[i];
      smaloc = i;
    }
  }

  cout << "Biggest:  " << big << " loc: " << bigloc << '\n';
  cout << "Smallest: " << sma << " loc: " << smaloc << '\n';

}
