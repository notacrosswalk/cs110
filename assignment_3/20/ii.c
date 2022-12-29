/* Consider a grading scheme as follows:
Marks Grade
90—100 A
80—89 B
70—79 C
60—69 D
50—59 E
40—49 P
0—39 F
i. Given marks, write a program in C to find the corresponding grade. If the
input marks are more than 100 or less than 0, you should assign the grade ‘X’
to indicate an error with the input marks.
ii. Given marks, write a program in C to find the corresponding grade. If the
input marks are more than 100 or less than 0, you should assign the grade ‘X’
to indicate an error with the input marks. Do not use &&, ||, and ?: operators.
iii. Given marks, write a program in C to find the corresponding grade. If the
input marks are more than 100 or less than 0, you should assign the grade ‘X’
to indicate an error with the input marks. Do not use any if-else construct. */

#include <stdio.h>

int main() {
    int marks = 50; // Change input here
    char grade = 'X';
    if(marks <= 100) {
        if(marks >= 90)
            grade = 'A';
        else if(marks >= 80)
            grade = 'B';
        else if(marks >= 70)
            grade = 'C';
        else if(marks >= 60)
            grade = 'D';
        else if(marks >= 50)
            grade = 'E';
        else if(marks >= 40)
            grade = 'P';
        else if(marks >= 0)
            grade = 'F';
    }
    printf("Marks: %d\nGrade: %c \n", marks, grade);
    return 0;
}