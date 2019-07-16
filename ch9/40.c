#include <stdio.h>

int main () {
  
  int arr[] = {5,78,-5,0,12,-10,78,0,23,73,81,-91,0,0,15};
  
  printf("The negatives are: ");
  for (int i = 0; i < 15; ++i) {
    if (arr[i] < 0) printf("%d ", arr[i]);
  } printf("\n");

  printf("The zeroes are: ");  
  for (int i = 0; i < 15; ++i) {
    if (arr[i] == 0) printf("%d ", arr[i]);
  } printf("\n");

  printf("The positives are: ");
  for (int i = 0; i < 15; ++i) {
    if (arr[i] > 0) printf("%d ", arr[i]);
  } printf("\n");

}
