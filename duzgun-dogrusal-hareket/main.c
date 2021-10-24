#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	double f, a;
	printf("Frekans degerini giriniz: ");
	scanf_s("%lf", &f);
	a = 1 / f;

	double x[9];

	for (int i = 0; i < 9; i++) {
		printf("%d. noktanin baslangictan uzakligi: ", i+1);
		scanf_s("%lf", &x[i]);
	}
	
	double t[9];

	for (int i = 0; i < 9; i++) {
		t[i] = i * a;
	}

	double egim;

	egim = (x[7] - x[0]) / (t[7] - t[0]);
	printf("egim= %lf\n", egim);

	printf("x-t grafiginin egimi = v = %lf ", egim);

}