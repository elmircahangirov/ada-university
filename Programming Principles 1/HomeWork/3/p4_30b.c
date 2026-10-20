#include <stdio.h>

void processGrade(int grade, int *aCount, int *bCount, int *cCount, int *dCount, int *fCount, int *totalStudents)
{
    int isValidGrade = 0;

    if (grade == 'A' || grade == 'a') {
        (*aCount)++;
        isValidGrade = 1;
    }
    if (grade == 'B' || grade == 'b') {
        (*bCount)++;
        isValidGrade = 1;
    }
    if (grade == 'C' || grade == 'c') {
        (*cCount)++;
        isValidGrade = 1;
    }
    if (grade == 'D' || grade == 'd') {
        (*dCount)++;
        isValidGrade = 1;
    }
    if (grade == 'F' || grade == 'f') {
        (*fCount)++;
        isValidGrade = 1;
    }

    if (isValidGrade) {
        (*totalStudents)++;
    }
    else {
        printf("Incorrect letter grade entered (%c). Try again.\n", grade);
    }
}