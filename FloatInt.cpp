#include <stdio.h>
#include <conio.h>

int b,c;
float a;

int main (){
	printf ("A: ");
	scanf ("%f",& a);
	c=a;
	printf ("B: ");
	scanf ("%d",& b);
	printf ("a: %.2f\n", a);
	printf ("b: %d\n", b);
	printf ("c: %d\n", c);
	return 0;
}