
char    *strcat(char *dest,char *src)
{
    int i;

    while (dest[i])
    {
        dest++;
    }

    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;   
}

#include <stdio.h>
int main()
{
    char dest[100];
    char src[] = "Shredder ego";
    strcat(dest,src);
    printf("%s",dest);
    return 0;
}