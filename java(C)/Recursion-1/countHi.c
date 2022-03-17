#include <stdio.h>
#include "cs50.h"
#include <string.h>

int countHi(string n);

int main(void) {

    string text = get_string("String: \n"); 
    printf("the word hi appears %i times\n",countHi(text));
}

int countHi(string n) {
  
string x = "hi";
  if(n[0] == 104 && n[1]== 105){
     n[0] = 121;                                  //changing first letter from x to stop infinte loop
     n = strstr(n, x);
     if (n)                                       //check if at end of string, if yes strstr() returns NULL
      {
        return 1 + countHi(n);                    //recursively count x
      }
    return 1;                                     //return 1 and stop function when x is last letter in string
  } 
  else {
    n = strstr(n, x);
    return 0 + countHi(n);                        //index to next letter, start function over
  }
} 
