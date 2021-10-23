#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	double	t[10];
	for (int i = 0; i < 10; i++) {
		printf("%d. sureyi girin: ", i+1);
		scanf_s("%lf", &t[i]);
	}

	// tOrt = tToplam / 10

	double periyot[10];

	for (int k = 0; k < 10; k++) {
		periyot[k] = t[k] / 5;
	}

	double tToplam = 0;

	for (int l = 0; l < 10; l++) {
		tToplam = tToplam + periyot[l];
	}

	double tOrt = tToplam / 10;
	
	double length[10];

	for (int j = 0; j < 10; j++) {
		printf("%d. olcum sonucu ipin boyu: ", j+1);
		scanf_s("%lf", &length[j]);
	}

	// lengthOrt = lengthToplam / 10 
	double lengthToplam = 0;

	for (int g = 0; g < 10; g++) {
		lengthToplam = lengthToplam + length[g];
	}

	double lengthOrt = lengthToplam / 10;

	// Þimdi elimizdeki veriler => tOrt, tToplam, lengthOrt, lengthToplam
	// Bize gerekenler => tSapma, tSapma_Toplam, tSapma_Ort, lengthSapma, lengthSapma_Toplam, lengthSapma_Ort

	double tAbs[10];
	double tSapma[10];

	for (int h = 0; h < 10; h++) {
		tAbs[h] = periyot[h] - tOrt;
		tSapma[h] = fabs(tAbs[h]);
	}

	double tSapma_Toplam=0;

	for (int f = 0; f < 10; f++) {
		tSapma_Toplam = tSapma_Toplam + tSapma[f];
	}

	double tSapma_Ort = tSapma_Toplam / 10;

	// ----------------------

	double lengthAbs[10];
	double lengthSapma[10];

	for (int h = 0; h < 10; h++) {
		lengthAbs[h] = length[h] - lengthOrt;
		lengthSapma[h] = fabs(lengthAbs[h]);
	}

	double lengthSapma_Toplam = 0;

	for (int f = 0; f < 10; f++) {
		lengthSapma_Toplam = lengthSapma_Toplam + lengthSapma[f];
	}

	double lengthSapma_Ort = lengthSapma_Toplam / 10;

	// gOrt'yý hesaplama kýsmýna geçtik.

	double gOrt,pi;
	pi = 3.14;

	gOrt = 4 * pi * pi * (lengthOrt / (tOrt * tOrt));

	// gDelta'yý hesaplama kýsmýna geçtik.

	double gDelta;

	gDelta = gOrt * ((2 * (tSapma_Ort / tOrt)) - (lengthSapma_Ort / lengthOrt));

	printf("------------------------------------\n");
	printf("SONUCLAR\n\n");

	printf("Ortalama t= %lf\n", tOrt);
	printf("Ortalama l= %lf\n", lengthOrt);
	printf("Delta t= %lf\n", tSapma_Ort);
	printf("Delta l= %lf\n", lengthSapma_Ort);

	printf("------------------------------------\n");
	printf("YERCEKIMI IVMESI SONUCLARI\n\n");

	printf("Ortalama g= %lf\n", gOrt);
	printf("Delta g= %lf\n", gDelta);

	return 0;
}