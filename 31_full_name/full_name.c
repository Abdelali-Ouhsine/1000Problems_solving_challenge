
#include <stdio.h>

int main()
{
	char	first[20];
	char	 last[20];

	printf("enter your first name ");
	scanf("%s",first);
	printf("enter your last name ");
	scanf("%s",last);

	//print full name
	printf("%s %s",first,last);
}
