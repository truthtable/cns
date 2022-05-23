#include <stdio.h>
#include <conio.h>
#include <string.h>
// Mono alphabetic
void main()
{
	char p[30], k[30], c[30];
	int i, index, len;

	printf("Enter PlainText ==> ");
	gets(p);
	len = strlen(p);
	printf("\nEnter Key ==>");

	for (i = 0; i < 26; i++)
	{
		printf("\t");
		printf("%c->", i + 97);
		k[i] = getch();
		printf("%c", k[i]);
	}
	for (i = 0; i < len; i++)
	{
		index = p[i] - 97;
		c[i] = k[index];
	}
	c[i] = '\0';
	printf("\n\nYour cipher text is ==> %s", c);
	getch();
}
