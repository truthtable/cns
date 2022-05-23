#include <stdio.h>
#include <conio.h>
#include <string.h>
// Rail Fence Cipher
void main()
{
	char msg[20], ans[20][20];
	int row = 0, col = 0, k = -1, key, msglen, i, j;
	// clrscr();
	printf("Enter MSG ==> ");
	gets(msg);
	printf("Enter Key ==> ");
	scanf("%d", &key);
	msglen = strlen(msg);
	for (i = 0; i < key; i++)
	{
		for (j = 0; j < msglen; j++)
		{
			ans[i][j] = '\n';
		}
	}
	for (i = 0; i < msglen; i++)
	{
		ans[row][col++] = msg[i];
		if (row == 0 || row == key - 1)
		{
			k = k * (-1);
		}
		row = row + k;
	}
	printf("Cipher text ==> ");
	for (i = 0; i < key; i++)
	{
		for (j = 0; j < msglen; j++)
		{
			if (ans[i][j] != '\n')
			{
				printf("%c", ans[i][j]);
			}
		}
	}
	getch();
}
