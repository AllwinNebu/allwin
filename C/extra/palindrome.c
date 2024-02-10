#include <stdio.h>
#include <string.h>

void reverseString(char *str)
{
	int l, i;
	char ch;
	l = strlen(str);
	for (i = 0; i <l/2; i++) {
		ch = *(str +i);
		*(str+i) = *(str+l-1-i);
		*(str+l-1-i) = ch;
	}
}

int main()
{
	char str[100];char str2[100];
	printf("Enter a string: ");
    gets(str);
	strcpy(str2,str);
	reverseString(&str);
	printf("reverse : %s \n",str);
	if(strcmp(str,str2) == 0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("not palindrome");
	}

	return 0;
}