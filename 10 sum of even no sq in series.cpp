#include <stdio.h>
int main() {
   int n ;
   printf("enter the limit ");
   scanf("%d",&n);
   int sum = 0;
   for (int i = 0; i <= n; i++)
      sum += (2*i ) * (2*i );
   printf("The sum of square of first %d even numbers is %d",n, sum);
   return 0;
}
