
#include <stdio.h>
void    validate_age()
{
    int age;
        printf("enter your age");
        scanf("%d",&age);  
        
        if (age >= 18 && age <= 45)
        {
            printf("Valid Aeg");
        }
        else
        printf("Invalid Age");   
}

int main()
{
    validate_age();
    return 0;
}