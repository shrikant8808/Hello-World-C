
#include <stdio.h>

int main(void) {
    int Maths, Physics, Chemistry, Biology, History, Total;
    float percentage;
    char Grade;

    printf("Enter Maths Marks: ");
    scanf("%d", &Maths);

    printf("Enter Physics Marks: ");
    scanf("%d", &Physics);

    printf("Enter Chemistry Marks: ");
    scanf("%d", &Chemistry);

    printf("Enter Biology Marks: ");
    scanf("%d", &Biology);

    printf("Enter History Marks: ");
    scanf("%d", &History);

    // Calculate Total
    Total = Maths + Physics + Chemistry + Biology + History;

    // Calculate Percentage
    percentage = (Total / 500.0) * 100;

    printf("\nMaths Marks = %d\n", Maths);
    printf("Physics Marks = %d\n", Physics);
    printf("Chemistry Marks = %d\n", Chemistry);
    printf("Biology Marks = %d\n", Biology);
    printf("History Marks = %d\n", History);
    printf("Total Marks = %d/500\n", Total);
    printf("Percentage = %.2f%%\n", percentage);

    if (percentage >= 90) {
        Grade = 'A';
    }
    else if (percentage >= 75) {
        Grade = 'B';
    }
    else if (percentage >= 60) {
        Grade = 'C';
    }
    else if (percentage >= 40) {
        Grade = 'D';
    }
    else {
        Grade = 'F';
    }

    printf("Grade = %c\n", Grade);

    return 0;
}
