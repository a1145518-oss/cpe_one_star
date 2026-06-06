#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#pragma warning(disable:4996)

int main() {
 int T;//測試資料的組數
 int arr[500] = {};
 scanf("%d", &T);
 for (int i = 0; i < T; i++) {
  int r, d = 0;
  scanf("%d", &r);
  for (int j = 0; j < r; j++) {
   scanf("%d", &arr[j]);
  }
  for (int a = 0; a < r - 1; a++) {//當a從0到r-2時，b從0到r-2-a，這樣就可以把陣列從小到大排序
   for (int b = 0; b < r - 1 - a; b++) {
    int temp;
    if (arr[b] > arr[b + 1]) {
     temp = arr[b];
     arr[b] = arr[b + 1];
     arr[b + 1] = temp;
    }
   }
  }
  if (r % 2 == 1) {
   int m;
   m = (r - 1) / 2;
   for (int k = 0; k < r; k++) {
    d = d + abs(arr[k] - arr[m]);
   }
   printf("%d\n", d);
  }
  else {
   int m;
   m = (arr[r / 2] + arr[(r / 2) - 1]) / 2;
   for (int k = 0; k < r; k++) {
    d = d + abs(arr[k] - m);
   }
   printf("%d\n", d);
  }
 }
 system("pause");
 return 0;
}