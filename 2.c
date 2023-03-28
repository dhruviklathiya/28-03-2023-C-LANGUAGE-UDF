#include <stdio.h>
int cube(int a){
    if(a%3==0 && a%5==0)
    {
        printf("Yes number is divisible with 3 &5");
    }
    else{
        printf("No number is not divisible with 3 &5");
    }
    return 0;
}
int main()
{
    int a,n;
    printf("Enter Number you to check if it's divisible with 3 &5 :");
    scanf("%d",&n);
    cube(n);
    return 0;
}
