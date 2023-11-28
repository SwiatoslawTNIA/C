#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define max(A,B) (( A > B) ? A : B)

int rightT(char s[]);
void trim(char str1[]);
void expand(char s1[100], char s2[100]);
// void calculator(void);

// static double run = -123.345345;
int main(void){
    //examples of statements and blocks are:
    // x = 0;
    // printf(...)
    // int numbers[] = {12, 3, 45, 35, 123, 35, 45, 46, 5, 76, 8, 6};
    // // checkValue(&numbers, 6);
    //  int positive = 0;
    // // for(int i = 0; i < (int)(strlen(numbers));i++){
    // //     if(numbers[i] == 6){
    // //         return numbers[i]; 
    // //      
    // //         positive = 1;
    // //     }
    // // }
    // if(positive == 0){
    //     return -1;
    // }
    // char s1[] = "This is the string, where A-Z, a-z";
    // char s2[] = "This is the string, where everything goes";
    // char expand(s1, s2);
    // char str3[] = "A string with some empty spaces from the end                    \n ";
    // trim(str3);
    //   printf("The new length of the string is: %llu", strlen(str3));
    // for(int i = 0; i < strlen(str3); i++){
    //     printf("%c", str3[i]);
      
    // }
    //   printf("The new length of the string is: %llu", strlen(str3));
    //function that returns the right most occurrence:
    char s[] = "THis is my array, which will be tested for the presence of our letter \"T\"";
    int right = rightT(s);
    printf("The position is: %d", right);
    printf("THe maximum is: %d", max(20, 25));
    
    // calculator();
}
int rightT(char s[]){
    int position = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == 'T' || s[i] == 't'){
            position = i + 1;
            printf("The position is: %d", position);

        }
    }
    return position;
}

// void calculator(void){
//     int numbers[20], c = 0;
//     int empty_index = 0;
//     double result = 0;
//     while((c = getchar()) != EOF)
//     {
//         if(c >= 0 && c <= 9)
//         {//record the characters
//             numbers[empty_index] = c;

//             empty_index++;
//         }else {
//             //print our results:
//             for(int i = 0; i < strlen(numbers); i++){
//                 printf("%d ", numbers[i]);
//             }
//             switch(c)
//             {
//                 case('*'):
//                 {
//                       for(int i = 0; i < empty_index + 1; ++i)
//                     {
//                         if(i == 0)
//                             result = numbers[i];
//                        result *= numbers[i];
//                     }   
//                     break;
//                 }
//                 case('+'):
//                 {
//                       for(int i = 0; i < empty_index + 1; ++i)
//                     {
//                        result += numbers[i];

//                     }   
//                     break;
//                 }
//                 case('/'):
//                 {
//                       for(int i = 0; i < empty_index + 1; ++i)
//                     {
//                         if(i == 0)
//                             result = numbers[i];
//                        result /= numbers[i];
//                     }   
//                     break;
//                 }
//                 case('-'):
//                 {
//                       for(int i = 0; i < empty_index + 1; ++i)
//                     {
//                        result -= numbers[i];
//                     }   
//                     break;
//                 }
//             }
          
//         }
//     }
//     printf("The result of the current computation is: %.2f", result);
// }

void trim(char str[]){
    for(int i = strlen(str) - 1; i > 0; i--){
        if(str[i] != ' ' || str[i] != '\t' || str[i] != '\n'){
            break;
        }
        str[i + 1] = '\0';
    }
    
}
void expand(char s1[100], char s2[100]){
    for(int i = 0; s1[i] != '\0';){
        if((toupper(s1[i]) >= 'A' && toupper(s1[i]) <= 'Z') && s1[i + 1] == '-' && (toupper(s1[i + 1]) >= 'A' && toupper(s1[i + 1 ]) <= 'Z')){
            //find the length of our input array;
            //copy all the elements after that in our array;
            //paste all the extensions;
            //paste our array at the end of these extensions;
            return;
        }
    }
}



// int checkValue(int* array[], int number){
//     int positive = 0;
//     for(int i = 0; i < (int)(strlen(*array));i++){
//         if(array[i] == number){
//             return array[i];
//             goto done;
//             positive = 1;
//         }
//     }
//     if(positive == 0){
//         return -1;
//     }
//     done:;
    

// }