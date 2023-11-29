#include <stdio.h>
//--------------------------------------------------------------------------------
///
/// This functions checks whether the given number is a prime.
///
/// @param number Number which should be checked for being a prime
///
/// @return If number is a prime, it returns the number itself
/// otherwise 0 is returned
//
int isNumberPrime(unsigned long long number)
{
 // TODO
// we don't need to check whether the number is positive, but we need to check whether it equal/bigger than 1:
if(number >= 1){
    //the number is prime if it is only divisible by itself or by 1:
    for(int i = 2; i < number - 1;i++)
    {
        if(number % i == 0)//if the remainder of the division on some number that is smaller than that is 
        //zero, then the number can be divided by our i and so the number is not prime.
        {
            return 0;
        }else{
            return 1;
        }
    }
}else{
    printf("Invalid number");
}

 return 0;
}
//--------------------------------------------------------------------------------
///
/// Main function header - start of the program
///
/// @return - Returnvalue to the OS
//
int main()
{
 unsigned long long number = 13751701123; // you may adapt this in order to try different numbers
 if(isNumberPrime(number))
 {
 printf("Number was a prime!\n");
 }
 else
 {
 printf("Number was not a prime!\n");
 }
 return 0;
}/*                         TASK 2C 
a. 7
b. 3084467
c. 6595718477
d. 13751701123
time needed:
a: 0sec, b: 0sec, c: 0.1sec, d: 0.1sec (I have a powerful laptop);

                            TASK 2D
a) 3 = 1*3
b)10 = 5*2;
c)21 = 3*7;
d)99 = 11*9 = 11*3*3; 
*/
