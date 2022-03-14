#include <stdio.h>
int powerN(int base, int n);
int main(void){
  
int i ;
int y ;
printf("Enter int i : \n");
scanf ("%d",&i);
printf("Enter int y : \n");
scanf ("%d",&y);
printf("%i", powerN(i,y));  
}

int powerN(int base, int n) {
if (n <= 1)
{
  return base;
}
return base * powerN(base , n - 1);
} 
