#include <stdio.h>
int count7(int n);
int main(void){
  
int i ;
printf("Enter int: \n");
scanf ("%d",&i);
printf("%i", count7(i));  
}

int count7(int n) {

if (n%10 == 7)
    {
      return 1 + count7(n/10);
    }
    else
    {
      return 0;
    }

return count7(n/10);
} 
