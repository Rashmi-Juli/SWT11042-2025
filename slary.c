#include <stdio.h>
int main() {
   float payRate;
   int hours;
   printf("Enter total Worked hours:");
   scanf("%d",&hours);
   printf("Enter pay Rate:");
   scanf("%f",&payRate);
   printf("Your pay Rate:%.2f,Worked hours:%d\n",payRate,hours);
   return 0;
   }
