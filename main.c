#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int i= 1;
    int sum = 0;
    printf(" enter the number you want to check\n");
    scanf( "%d", & num);
    for (i=1; i< num; i++)
    {
        if (num%i==0){
                sum+=i;
        }
    }
    if (num==sum){
        printf("%d is a perfect number", num);
    }
    else{
        printf(" %d is not a perfect number", num);
    }
}
