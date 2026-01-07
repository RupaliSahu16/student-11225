// 5.Program demonstrating data types and format specifiers

#include <stdio.h>

int main() {

    int ERP = 11225;
    float cgpa = 8.75f;
    double projectScore = 92.5678;
    char grade = 'A';
    char course[] = "Computer Science";
    long fileSize = 5242880;
    unsigned int errorCode = 404;
    short int semester = 4;

    printf("ERP: %d\n", ERP);
    printf("CGPA: %.2f\n", cgpa);
    printf("Project Score: %.4lf\n", projectScore);
    printf("Grade: %c\n", grade);
    printf("Course: %s\n", course);
    printf("File Size (bytes): %ld\n", fileSize);
    printf("Error Code: %u\n", errorCode);
    printf("Semester: %hd\n", semester);

    return 0;
}
