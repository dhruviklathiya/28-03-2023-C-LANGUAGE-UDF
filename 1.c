#include <stdio.h>
int cube(int a){
    return a*a*a;
}
int main()
{
    int a,n;
    printf("Enter value for getting cube:");
    scanf("%d",&n);
    int c = cube(n);
    printf("Cube of %d is %d",n,c);
    return 0;
}
