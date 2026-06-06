#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main(){
 
 int t;
 while (scanf("%d", &t) == 1) { 
  
  int n;
  int num[3001] = { 0 }; 
  
  for (n = 0; n < t; n++) {
   int k;
   scanf("%d", &k);
   num[n] = k;
  }
  
  int arr[3001] = { 0 };
  int a = 0;
        int not_jolly_flag = 0;
        
        if (t <= 1) {
            printf("Jolly\n");
            continue;
        }

  for (n = 0; n < t - 1; n++) {
   a = num[n + 1] - num[n];
   if (a < 0) {
    a = -a;
   }
            
   if (a >= 1 && a < t) {
    arr[a] = 1;
   }
   else {
    not_jolly_flag = 1;
    break;
   }
  }

        if (not_jolly_flag) {
            printf("Not jolly\n");
            continue;
        }
        
  int is_jolly = 1;
  for (n = 1; n < t; n++) {
   if (arr[n] == 0) {
    is_jolly = 0;
    break;
   }
  }
        
  if (is_jolly) {
   printf("Jolly\n");
  }
  else {
   printf("Not jolly\n");
  }
  return 0;
 }
}