#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main() {
    int train[55] = { 0 };
    int n;
    scanf("%d", &n);
    int i = 0;
    int count;
    int k;
    for (i = 0; i < n; i++) {
          int count = 0;
          int a;
          scanf("%d", &a);
   for (k = 0; k < a; k++) {
          int b;
          scanf("%d", &b);
          train[k] = b;
  }
  for (int t = 0; t < k - 1; t++) {
       for (int d = 1; d < k-t; d++) {
            if (train[d] < train[d - 1]) {
            int temp = train[d - 1];
            train[d - 1] = train[d];
            train[d] = temp;
            count++;
            }
        }
     }
  
     printf("Optimal train swapping takes %d swaps.\n", count);
   }
}