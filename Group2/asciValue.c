#include <stdio.h>
#include <ctype.h>  

int main() {
    char ch;


    printf("Enter a single character (A-Z or a-z): ");
    scanf(" %c", &ch);  


    if (isalpha(ch)) {
        printf("You entered a LETTER: '%c'\n", ch);
        printf("ASCII value = %d\n", ch);
    } else {
        printf("Invalid input! Please enter only an alphabet character (A-Z or a-z).\n");
    }

    return 0;
}
