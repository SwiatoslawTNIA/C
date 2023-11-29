#include <stdio.h>
#include <string.h>
//--------------------------------------------------------------------------------
///
/// This functions decrypts the text within the cipher_text variable directly.
///
/// @param cipher_text The cipher text
/// @param offset The amount each letter is shifted
///
/// @return Nothing - decrpyted text is in the cipher_text variable.
//
char *decipher(char cipher_text[], int offset)
{
    for (int j = 0; cipher_text[j] != '\0'; j++) 
    {
        char original_char = cipher_text[i];
        //getting the ascii value of our character
        int char_value = original_char;
        //updating the value with an offset:
        char_value += offset;
        while(char_value > 127)//if the character will be off range;
        {
            char_value -= 127;
        }
        
        char original_char_off = char_value;
        //check if the character is in our range:        
        cipher_text[j] = original_char_off;
    }
    return cipher_text;
}
int main() 
{
    char cipher_text[] = "Gsqixs$DFehyhy5$sr$]syXyfi0$epp}sy{lsevi{iev}erhfyvhirih0$erhM{mppkmzi}sy$IWT$Qiqiw2$1Qexxli{$55>6<";
    //so there are 127 possible shifts, we must use our deciphering offset at most 127 times;
    int offset = 108;
    char *pointer;
    for(int i = 0; i < 127 ; i++){
        
        pointer = decipher(cipher_text, offset);
       
        puts(pointer);
        
        
    }
     // Assuming the offset used for encryption
       //the passing offset is 113;
    // Decipher the text
        char str[] = "#OMETO \"ADUDU◄ON9OU4UBEALLYOUWHOAREWEARYANDBURDENED-ATTHEW◄◄→↕↑YOU\%30-EMES";
        puts(str);
    // Display the deciphered text
    // printf("Deciphered text: %s\n", pointer);

    return 0;
}
//--------------------------------------------------------------------------------
///
/// Main function header - start of the program
///
/// @return - Returnvalue to the OS
//
