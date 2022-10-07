#include <stdio.h> 
 
void swap(int *a, int *b); 
 
int main() { 
  int arr[] = {1,2,5}; 
  swap(&arr[0], &arr[2]); 
  printf("%d, %d and %d\n",  
    arr[0], arr[1], arr[2]); 
  return 0; 
} 
 
void swap(int *a, int *b) { 
  int t = *a; 
  *a = *b; 
  *b = t; 
} 