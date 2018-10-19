#include<stdio.h>

int check_prime (int a)

{
    int i;


    if(a<2)
        return 0;
    if(a==2)
        return 1;

    for (i = 3 ; i*i<=a+1; i=i+2)
    {
        if(a%i==0)
        {
            return 0;
            break;
        }


    }
    return 1;



}

int main ()

{
    int x,y;
    scanf("%d",&x);
    y = check_prime (x);

    if(y==1)
        printf("%d is a prime number",x);
    else
        printf("%d is not a prime number",x);

    return 0;
}
