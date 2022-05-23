#include <stdio.h>
#include <conio.h>
#include <math.h>
// t Diffie Hellman
void main()
{
	int q, Xa, Xb, Yb, Kb, alpha, Ya;
	long Ka;
	// clrscr();
	printf("Enter Prime number q ==> ");
	scanf("%d", &q);
	printf("Enter alpha which is primitive root of q ==> ");
	scanf("%d", &alpha);
	printf("Enter random private number of USER A which is less than q ==> ");
	scanf("%d", &Xa);
	Ya = pow(alpha, Xa);
	Ya = fmod(Ya, q);
	printf("\nPublic Key of USER A is %d ", Ya);
	printf("\n\nEnter random private number of USER B which is less than q ==> ");
	scanf("%d", &Xb);
	Yb = pow(alpha, Xb);
	Yb = fmod(Yb, q);
	printf("\nPublic Key of USER B is %d ", Yb);
	Ka = pow(Yb, Xa);
	Ka = fmod(Ka, q);
	printf("\n\nUSER A Secret key is %ld ", Ka);
	Kb = pow(Ya, Xb);
	Kb = fmod(Kb, q);
	printf("\nUSER B Secret key is %d ", Kb);
	getch();
}