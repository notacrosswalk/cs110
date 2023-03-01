#include <stdio.h>

union claw
{
    char a;
    int b;
    float c;
    double d;
};

int main()
{
    // i
    union claw x;
    printf("%p %p %p %p\n", &x.a, &x.b, &x.c, &x.d);
    
    // ii
    printf("%d\n", sizeof(x));
    
    // iii
    union claw y = {0};
    y.a = 'A';
    printf("%d %f %lf\n", y.b, y.c, y.d);
    
    // iv
    union claw z = {0};
    z.b = 99;
    printf("%c %f %lf\n", z.a, z.c, z.d);   
    
    // v
    union claw *p = &z;
    p->a = 'H';
    printf("%c\n", p->a);
        
    return 0;
}
