#include <stdio.h>
#define AMOUNT_FACTORS 100 // you may adapt this in order if you need more space for
// prime factors (but I dont think so ;))
//--------------------------------------------------------------------------------
///
/// This functions determines the prime factorization of a given number.
///
/// @param number The number on which the prime factorization should be performed
/// @param factors An Array where the primefactores should be stored
///
/// @return Nothing - decrpyted text is in the cipher_text variable.
//
void createPrimeFactors(unsigned long number, unsigned long factors[AMOUNT_FACTORS])
{
 //our number is positive
 //we would need to decompose each number:
 //we move through each element of our number and if that number is
int count = 0;
long long int i = 2;
while(i <= number)
{

    if(number % i == 0)
    {   

        factors[count] = i;
        count++;//to assign our factor to each consecutive element of factors.
        number /= i;//decrease our number by that factor;
        i = 2; //because if the number can be divided by two two times
        //the first time it will be divided, the second it will not, because i will be already increased;
    }
    i++;
}
  
 
}
//--------------------------------------------------------------------------------
///
/// Main function header - start of the program
///
/// @return - Returnvalue to the OS
//
int main()
{
 unsigned long factors[AMOUNT_FACTORS] = {0};
 unsigned long number = 21; // you may adapt this to try out different numbers
 createPrimeFactors(number, factors);
 printf("The factors are:\n");
 for(int index = 0; index < AMOUNT_FACTORS && factors[index]; index++)
 {
 printf("%lu ", factors[index]);
 }
 return 0;
}
