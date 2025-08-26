#include <stdio.h>
#include <ctype.h>  

int main() {
    char ch;

  
    printf("Enter a single alphabet character: ");
    scanf(" %c", &ch);


    if (isalpha(ch)) {
        ch = tolower(ch); 

     
        switch(ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("'%c' is a Vowel\n", ch);
                break;
            default:
                printf("'%c' is a Consonant\n", ch);
        }
    } else {
        printf("Invalid input! Please enter an alphabet character.\n");
    }

    return 0;
}
