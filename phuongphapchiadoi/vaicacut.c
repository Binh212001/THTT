#include <stdio.h>
#include <math.h>
int main() {
	double x;
	int n;
	scanf ("%d",&n);
	x=(exp(n)+log(n))*1.0/n-1;
	printf ("Ket qua la: %g",x);
return 0;
}
