#include <stdio.h>

int main(void)
{
    int grade;
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;
    int totalStudents = 0;
    double gradePointsTotal = 0.0;

    printf("Enter the letter grades (A, B, C, D, F).\n");
    printf("Enter EOF (Ctrl+D on Linux/Mac or Ctrl+Z on Windows) to end input:\n");

   
    while ((grade = getchar()) != EOF)
    {
        
        if (grade == '\n' || grade == '\t' || grade == ' ')
        {
            continue;
        }

        
        switch (grade)
        {
            case 'A':
            case 'a':
                aCount++;
                gradePointsTotal += 4.0;
                totalStudents++;
                break;

            case 'B':
            case 'b':
                bCount++;
                gradePointsTotal += 3.0;
                totalStudents++;
                break;

            case 'C':
            case 'c':
                cCount++;
                gradePointsTotal += 2.0;
                totalStudents++;
                break;

            case 'D':
            case 'd':
                dCount++;
                gradePointsTotal += 1.0;
                totalStudents++;
                break;

            case 'F':
            case 'f':
                fCount++;
                gradePointsTotal += 0.0; // 0 points for F
                totalStudents++;
                break;

            default:
                printf("Incorrect letter grade entered (%c). Try again.\n", grade);
                break;
        }
    }

    
    printf("\n--- Class Grade Report ---\n");
    printf("Total number of students: %d\n", totalStudents);
    printf("Number of students who received A: %d\n", aCount);
    printf("Number of students who received B: %d\n", bCount);
    printf("Number of students who received C: %d\n", cCount);
    printf("Number of students who received D: %d\n", dCount);
    printf("Number of students who received F: %d\n", fCount);

    
    if (totalStudents > 0)
    {
        double classAverage = gradePointsTotal / totalStudents;
        printf("\nClass Average GPA: %.2f\n", classAverage);
    }
    else
    {
        printf("\nNo valid grades were entered.\n");
    }

    return 0;
}