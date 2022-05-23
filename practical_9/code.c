#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
	char key[200], play[5][5], msg[20], ct[20];
	int i, size, j, k, c1, c2, p, q, r1, r2, l;
	// clrscr();
	printf("\nEnter any key ==> ");
	gets(key);
	strcat(key, "abcdefghiklmnopqrstuvwxyz");
	size = strlen(key);
	for (i = 0; i < size; i++)
	{
		if (key[i] == 'j')
		{
			key[i] = 'i';
		}
		for (j = i + 1; j < size;)
		{
			if (key[j] == key[i])
			{
				for (k = j; k < size; k++)
				{
					key[k] = key[k + 1];
				}
				size--;
			}
			else
			{
				j++;
			}
		}
	}
	for (i = 0, k = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			play[i][j] = key[k];
			k++;
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("\t%c", play[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter any Message ==> ");
	gets(msg);
	printf("\nCiphere text ==> ");
	j = 1;
	for (i = 0; i < strlen(msg);)
	{
		r1 = 0;
		r2 = 0;
		c1 = 0;
		c2 = 0;
		p = 0;
		q = 0;
		p = msg[i];
		q = msg[j];
		if (p == 'j')
		{
			msg[i] = 'i';
		}
		if (q == 'j')
		{
			msg[j] = 'i';
		}
		for (k = 0; k < 5; k++)
		{
			for (l = 0; l < 5; l++)
			{
				if (play[k][l] == p)
				{
					r1 = k;
					c1 = l;
				}
				if (play[k][l] == q)
				{
					r2 = k;
					c2 = l;
				}
			}
		}
		if (r1 == r2)
		{
			ct[i] = play[r1][(c1 + 1) % 5];
			ct[j] = play[r2][(c2 + 1) % 5];
			printf("%c%c", ct[i], ct[j]);
		}
		else if (c1 == c2)
		{
			ct[i] = play[(r1 + 1) % 5][c1];
			ct[j] = play[(r2 + 1) % 5][c2];
			printf("%c%c", ct[i], ct[j]);
		}
		else
		{
			ct[i] = play[r1][c2];
			ct[j] = play[r2][c1];
			printf("%c%c", ct[i], ct[j]);
		}
		i = i + 2;
		j = j + 2;
	}
	getch();
}
