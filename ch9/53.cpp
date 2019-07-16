#include <iostream>
#include <vector>
using namespace std;

int main() {
  int days; cout << "days : "; cin >> days;
  if (!(days > 366 || days < 0)) {
    int months[] = {31,29,31,30,31,31,30,31,30,31,30,31};
    int monthNum = 1;
    for (int daysInMonth : months)
      if (days > daysInMonth) {
        days -= daysInMonth;
        ++monthNum;
      } else { 
        cout << "date : " << days << '/' << monthNum;
        break;
    } 
  }
  return 0;
}