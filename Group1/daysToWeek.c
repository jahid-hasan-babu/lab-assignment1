#include <stdio.h>

int main() {
    int days, weeks, remainingDays;

  
    printf("Enter the number of days: ");
    scanf("%d", &days);

   
    weeks = days / 7;
    remainingDays = days % 7;

    
    printf("%d days = %d week(s) and %d day(s)\n", days, weeks, remainingDays);

    return 0;
}
