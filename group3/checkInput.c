#include <stdio.h>
#include <ctype.h>  

int main() {
    char ch;


    printf("Enter a character: ");
    scanf(" %c", &ch);  

 
    if (isupper(ch))
        printf("'%c' is an Uppercase Letter\n", ch);
    else if (islower(ch))
        printf("'%c' is a Lowercase Letter\n", ch);
    else if (isdigit(ch))
        printf("'%c' is a Digit\n", ch);
    else
        printf("'%c' is a Special Character\n", ch);

    return 0;
}
