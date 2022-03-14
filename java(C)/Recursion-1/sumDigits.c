#include <stdio.h>
int sumDigits(int n);
int main(void){
  
int i ;
printf("Enter int: \n");
scanf ("%d",&i);
printf("%i", sumDigits(i));  
}

int sumDigits(int n) {

if (n == 0)
    {
      return 0;
    }

return sumDigits(n/10)+n%10;
} 
