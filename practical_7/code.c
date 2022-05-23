#include <stdio.h>
#include <conio.h>
// Simple Hash function
void main()
{
	char ip1[20], ip2[20], ans;
	int i, j;
	// clrscr();
	printf("Enter First block Input ==> ");
	gets(ip1);
	printf("Enter First block Input ==> ");
	gets(ip2);
	printf("Answer ==>");
	for (i = 0; i < 8; i++)
	{
		ans = ip1[i] ^ ip2[i];
		printf("%d", ans);
	}
	getch();
}
