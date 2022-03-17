#include <stdio.h>
#include "cs50.h"
#include <string.h>

int countX(string n);

int main(void) {

    string text = get_string("String: \n"); 
    printf("the letter x appears %i times\n",countX(text));
}

int countX(string n) {
  
string x = "x";
  if(n[0] == 120){
     n[0] = 121;                                              //changing first letter from x to stop infinte loop
     n = strstr(n, x);
     if (n)                                                   //check if at end of string
      {
        return 1 + countX(n);                                 //recursively count x
      }
    return 1;                                                 //return 1 and stop function when x is last letter in string
  } 
  else {
    return 0;
  }
} 
