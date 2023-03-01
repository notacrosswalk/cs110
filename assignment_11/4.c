#include <stdio.h>

#pragma pack(1)

struct student
{
    char name[11];
    int roll;
    char sex;
    double gpa;
};

void print(struct student s)
{
    printf("%s\n", s.name);
    printf("%d\n", s.roll);
    printf("%c\n", s.sex);
    printf("%lf\n", s.gpa);
}

int main()
{
    struct student s = {"Ahlad", 2201017, 'M', 9.5};
    print(s);
    
    printf("%d\n", &s);
    
    printf("%d %d %d %d\n", &s.name, &s.roll, &s.sex, &s.gpa);

    printf("%d\n", sizeof(s));

    return 0;
}                                       
