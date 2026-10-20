#include <stdio.h>

void processGrade(int grade, int *aCount, int *bCount, int *cCount, int *dCount, int *fCount, int *totalStudents);

int main(void)
{
    int grade;
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;
    int totalStudents = 0;

    printf("Enter the letter grades (A, B, C, D, F).\n");
    printf("Enter EOF (Ctrl+D on Linux/Mac or Ctrl+Z on Windows) to end input:\n");

    while ((grade = getchar()) != EOF)
    {
        if (grade == '\n' || grade == '\t' || grade == ' ')
        {
            continue;
        }

        processGrade(grade, &aCount, &bCount, &cCount, &dCount, &fCount, &totalStudents);
    }

    printf("\n--- Class Grade Report ---\n");
    printf("Total number of students: %d\n", totalStudents);
    printf("Number of students who received A: %d\n", aCount);
    printf("Number of students who received B: %d\n", bCount);
    printf("Number of students who received C: %d\n", cCount);
    printf("Number of students who received D: %d\n", dCount);
    printf("Number of students who received F: %d\n", fCount);

    return 0;
}