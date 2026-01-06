#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0' && str[i] != '\n')
    {
        i++;
    }
    return i;
}

int main(void)
{
    char str[100];
    int len;

    printf("Enter your text: ");
    fgets(str, sizeof(str), stdin);

    len = ft_strlen(str);
    printf("Number of letters: %d\n", len);

    return 0;
}

