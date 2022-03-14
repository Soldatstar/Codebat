#include <stdio.h>
int bunnyEars2(int n);
int main(void) {

int i ;
printf("Enter int: \n");
scanf ("%d",&i);
printf("%i", bunnyEars2(i));
}

int bunnyEars2(int n) {

if (n == 0)
    {
        return 0;
    }
if (n %2 == 1)
    {
        return 2 + bunnyEars2(n-1);
    }

return 3 + bunnyEars2(n-1);
} 
