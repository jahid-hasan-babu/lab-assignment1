#include <stdio.h>
#include <ctype.h>  

int main() {
    char ch, lower;


    printf("Enter a single uppercase letter (A-Z): ");
    scanf(" %c", &ch);

   
    if (isupper(ch)) {
        lower = tolower(ch);  
        printf("Lowercase of '%c' is '%c'\n", ch, lower);
    } else {
        printf("Invalid input! Please enter an uppercase letter (A-Z).\n");
    }

    return 0;
}
