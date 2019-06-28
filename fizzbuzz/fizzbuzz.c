#include <stdio.h>

/*
    Your fizzbuzz implementation should initialize a counter, then
    iterate n times. If the ith iteration is divisible by 3, print
    "Fizz". If it's divisible by 5, print "Buzz". If it's divisible
    by both 3 and 5, print "FizzBuzz". Increment the counter variable
    every time that nothing gets printed and return the counter.
    Don't forget to include newlines '\n' in your printf statements!
*/
int fizzbuzz(int n)
{
 int counter = 0;
 for(counter = 0; counter<=n; counter++){
     if (counter == 0){
         continue;
     }
     else if(counter%3 == 0){
         if(counter%5 == 0){
            char *str = "FizzBuzz";
            printf( "%s\n", str); 
         }
         else{
             char *str = "Fizz";
             printf( "%s\n", str);
         }
     }
     else if(counter%5 == 0){
            char *str = "Buzz";
            printf( "%s\n", str);
     }
 }
 return 0;
}

#ifndef TESTING
int main(void)
{
    fizzbuzz(20);

    return 0;
}
#endif
