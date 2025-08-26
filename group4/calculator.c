#include <stdio.h>

int main() {
    float marksObtained, totalMarks, percentage;
    int gradeCategory;


    printf("Enter marks obtained: ");
    scanf("%f", &marksObtained);

    printf("Enter total marks: ");
    scanf("%f", &totalMarks);


    if (marksObtained < 0 || totalMarks <= 0 || marksObtained > totalMarks) {
        printf("Invalid input! Please enter correct marks.\n");
        return 0;
    }

 
    percentage = (marksObtained / totalMarks) * 100;

   
    printf("Percentage: %.2f%%\n", percentage);

    
    gradeCategory = (int)percentage / 10; 

   
    switch (gradeCategory) {
        case 10: 
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        default:
            printf("Grade: F\n");
    }

    return 0;
}
