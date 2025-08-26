#include <stdio.h>
#include <ctype.h>  

int main() {
    char ch;


    printf("Enter an alphabet character: ");
    scanf(" %c", &ch);


    if (isalpha(ch)) {
        ch = tolower(ch); 


        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("'%c' is a Vowel\n", ch);
        else
            printf("'%c' is a Consonant\n", ch);
    } else {
        printf("Invalid input! Please enter an alphabet character.\n");
    }

    return 0;
}
