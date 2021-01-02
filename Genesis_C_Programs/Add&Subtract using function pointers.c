#include<stdio.h>

int add(int n1,int n2);
int sub(int n1,int n2);

int main()
{
    int a,b,mode,solution;
    int (*op[2])(int, int);

    op[0] = add;
    op[1] = sub;

    a = 7;
    b = 5;

    printf("Enter 0 for add, 1 for subtract:");
    scanf("%d",&mode);
    solution = op[mode](a,b);

    return solution;
}
int add(int a,int b)
{
    return (a+b);
}
int sub(int a,int b)
{
    return (a-b);
}
