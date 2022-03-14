#include <stdio.h>
int triangle(int n);
int main(void){
  
int i ;
printf("Enter int: \n");
scanf ("%d",&i);
printf("%i", triangle(i));  
}

int triangle(int n) {

if (n == 0)
    {
      return 0;
    }
return triangle(n-1)+n;
} 
