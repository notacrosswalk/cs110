#include <stdio.h>

struct S 
{
    int a;
    struct P
    {
        char m;
        union U
        {
            char x;
            float y;
        } u1;
    } p1;
};

int main()
{
    struct S obj;
    scanf("%d", &obj.a);
    scanf("\n%c", &obj.p1.m);
    scanf("\n%c", &obj.p1.u1.x);
    scanf("%f", &obj.p1.u1.y);
    
    printf("%d %c %c %f\n", obj.a, obj.p1.m, obj.p1.u1.x, obj.p1.u1.y);
       
    return 0;
}
