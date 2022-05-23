#include <stdio.h>
#include <conio.h>
// Hill cipher
void main()
{
	int k[3][3], p1[3][1], c1[3][1], i, j, l;
	char p[5];

	printf("Enter 3 X 3 matrix ==> \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &k[i][j]);
		}
	}
	printf("Enter word of 3 letter ==> ");
	scanf("%s", p);

	for (i = 0; i < 3; i++)
	{
		p1[i][0] = p[i] - 97;
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 1; j++)
		{
			c1[i][j] = 0;
			for (l = 0; l < 3; l++)
			{
				c1[i][j] += k[i][l] * p1[l][j];
			}
		}
	}

	printf("\nCipher text is ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 1; j++)
		{
			printf("%c", (c1[i][j] % 26) + 97);
		}
	}
	getch();
}
