#include <stdio.h>

void    until_valid()
{
        int age;
        printf("enter your age");
        scanf("%d",&age);

   
        while (age < 18 || age > 45)
        {
            printf("thats invalid age , enter it again");
            scanf("%d",&age);
        } 
        printf("Valid age");
    }

int main()
{
    until_valid();
    return 0;
}