#include <stdio.h>
#include <string.h>

char *concat(char *s1, char *s2);//the return type should be int because we are returning the value of the first element;
int main(void){
    char s1[] = "This is the first string.";
    char s2[] = "This is the second string.";//declared the arrays;
    concat(s1, s2);
    char *answer = concat(s1, s2);//receiving the answer;
    for(;*answer != '\0'; answer++){//printing the answer;
        printf("%c", *answer);
    }
}
char *concat(char *s1, char *s2)//the input is just the addresses of the first elements, so i use pointers to dereference them;
{   
    //the string version:
    //  printf("The pointers are: %s, %s", s1, s2);
     char newArr[100];
     int i;
     for(i = 0; i < strlen(s1); i++, *s2++){
        newArr[i] = *s1;
     }
     for(; i < strlen(s2); i++, *s2++){
        newArr[i] = *s2;
     }
     newArr[i] = '\0';
     return newArr;
    // //the pointer version:
    // char newArr[100];
    // int i;
    // for( i = 0;*s1 != '\0';i++, s1++){
    //     newArr[i] = *s1;
    //     printf("%d", newArr[i]);
    // }
    
    // for(; *s2 != '\0'; i++, s2++){
    //     newArr[i] = *s2;
    //     printf("%d", newArr[i]);

        
    // }
    // char *pointer = newArr;
    // return pointer;
    //the array version:
 }
// void swap(int i, int j);
// void swap1(int i, int j);
// void swap2(int* i, int* j);
// void swapStrings(char *s1, char *s2);
// int main(void){
//     // int i = 9, b = 7;
//     // printf("The value of i is: %d, the value of b is: %d\n", i, b);
//     // int* pointer_to_i = &i;
//     // printf("The address of i is: %p\n", pointer_to_i);
//     // printf("This the value of i: %d\n", *pointer_to_i);
//     // int* p_copy = pointer_to_i;
//     // printf("The pointer copy is: %p\n", p_copy);
//     // printf("The pointer copy is: %d\n", *p_copy);
//     // int* p_copy_copy = p_copy;//p_copy contains the address, we don't need the address operand
//     // printf("The address of our pointer copy copy is: %p\n", p_copy_copy);
//     // printf("The value of our pointer_copy_copy is %d\n", *p_copy_copy);
//     // printf("The value of b is: %d", *&*&*&*&*&b);

//     //arrays

//     // int array[] = {1, 2, 3, 4, 5, 6};//array[6]
//     // int* pointer = &array[0];
//     // printf("The pointer now contains the address of our first element, and when dereference, then a[0]: %d", *pointer);
//     // //how about 
//     // pointer = 0;//cleaning the pointer from the old address
//     // pointer = array;//since the array is a synonym for an address of the first element of our array, we can assign it to our pointer;
//     // printf("THe pointer points now to our array: %d", pointer[2]);
//     // int* p2;
//     // p2 = &array[3];
//     // printf("The fourth element of our array is: %d", *p2);
//     // printf("The third element through p2 is: %d", *(p2-1));
//     // printf("The third element through p2 is: %d", *(p2+1));
//     char s1[40] = "Such a nice day.";
//     char s2[] = "Thank you mom and dad.";
//     char *pointer = s1;
//     swapStrings(s1, s2);
//     for(;*pointer != '\0' ; pointer++){
//         printf("%c", *pointer);
//     }


//     // int** pointer_to_pointer = &pointer_to_i;
//     // printf("The address of our pointer to pointer is: %p\n", pointer_to_pointer);
//     // printf("The value of our pointer to pointer is: %d", **pointer_to_pointer);
//     // int*** pointer_to_pointer_to_pointer =  &pointer_to_pointer;
//     // printf("THe address of our pointer to pointer to pointer is: %p\n", pointer_to_pointer_to_pointer);
//     // printf("The value of our pointer to pointer to pointer is: %d\n", ***pointer_to_pointer_to_pointer);
//     // int num1 = 2312, num2 = 9231;
//     // swap(num1, num2);
//     // printf("The num1: %d, num2: %d", num1, num2);//in this case the values didn't change, because we worked just with copies;
//     // // swap1(&num1, &num2);//we switched the addresses of our num1 and num2 but returned and changed nothing;error;
//     // // printf("The num1: %d, num2: %d", num1, num2);
//     // swap2(&num1, &num2);//even though we worked in a separate scope, but we addressed through pointers the real 
//     // //values of our num1 and num2;, thus we changed the real values of those numbers;
//     // printf("The num1: %d, num2: %d", num1, num2);
// }
// void swapStrings(char *s1, char *s2){
//     //now we are passing the pointers

//     // while(*s2 != '\0'){
//     //     *s1 = *s2;
//     //     s1++;
//     //     s2++;//this is the pointer to the first element;the value gets incremented after the assignment
//     //     //*s1 and *s2 give us the values of the string;
//     // }
//     // int i;
//     // i = 0;
//     // while((*s1 = *s2) != '\0'){
//     //     s1++;
//     //     s2++;
//     // }
//     while((*s1++ = *s2++) != '\0')
//     ;


// }
// void swapStrings2(char *s1, char *s2){
//     int i = 0;
//     while(s2[i] != '\0'){
//         s1[i] = s2[i];
//         i++;
//     }
// }



// void swap(int i, int j){
//     int temp = 0;
//     temp = i; 
//     i = j;
//     j = temp;
// }
// void swap1(int i, int j){
//     int temp = 0;
//     temp = i; 
//     i = j;
//     j = temp;
// }
// void swap2(int* i, int* j){
//     int temp = 0;
//     temp = *i;
//     *i = *j;
//     *j = temp;
// }
// // int strlen(char *s){
// //     int *p = s;
// //     while(*p != '\0'){
// //         p++;
// //     }
// //     return p - s;// return the length of the string;
// // }