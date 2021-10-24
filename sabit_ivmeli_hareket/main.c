#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	// vSon = vIlk + a*t = v = a*t 

	const double PI = 3.1415926;
	double b1Yukseklik, a1Yukseklik, masaUzunlugu, frekans, a;

	printf("A yuksekligini giriniz: ");
	scanf_s("%lf", &a1Yukseklik);
	printf("B yuksekligini giriniz: ");
	scanf_s("%lf", &b1Yukseklik);
	printf("Masa uzunlugunu giriniz: ");
	scanf_s("%lf", &masaUzunlugu);
	printf("Frekans degerini giriniz: ");
	scanf_s("%lf", &frekans);

	double result;
	result = (b1Yukseklik - a1Yukseklik) / masaUzunlugu;
	result = asin(result) * 180 / PI;

	double egimAcisi1 = result;

	a = 1 / frekans;

	double x1[5], t1[5], t12[5];

	for (int i = 0; i < 5; i++) {
		printf("%lf derece icin %d. noktanin merkezden uzakligi: ",egimAcisi1, i + 1);
		scanf_s("%lf", &x1[i]);
	}

	for (int i = 0; i < 5; i++) {
		t1[i] = (i+1.00) * a;
		t12[i] = t1[i] * t1[i];
	}

	//-------------------

	double b2Yukseklik, a2Yukseklik;

	printf("A yuksekligini giriniz: ");
	scanf_s("%lf", &a2Yukseklik);
	printf("B yuksekligini giriniz: ");
	scanf_s("%lf", &b2Yukseklik);
	printf("Masa uzunlugunu giriniz: ");
	scanf_s("%lf", &masaUzunlugu);
	printf("Frekans degerini giriniz: ");
	scanf_s("%lf", &frekans);

	result = (b2Yukseklik - a2Yukseklik) / masaUzunlugu;
	result = asin(result) * 180 / PI;

	double egimAcisi2 = result;

	a = 1 / frekans;

	double x2[5], t2[5], t22[5];

	for (int i = 0; i < 5; i++) {
		printf("%lf derece icin %d. noktanin merkezden uzakligi: ", egimAcisi2, i + 1);
		scanf_s("%lf", &x2[i]);
	}

	for (int i = 0; i < 5; i++) {
		t2[i] = (i+1.00) * a;
		t22[i] = t2[i] * t2[i];
	}

	//-----------------------

	double b3Yukseklik, a3Yukseklik;

	printf("A yuksekligini giriniz: ");
	scanf_s("%lf", &a3Yukseklik);
	printf("B yuksekligini giriniz: ");
	scanf_s("%lf", &b3Yukseklik);
	printf("Masa uzunlugunu giriniz: ");
	scanf_s("%lf", &masaUzunlugu);
	printf("Frekans degerini giriniz: ");
	scanf_s("%lf", &frekans);

	result = (b3Yukseklik - a3Yukseklik) / masaUzunlugu;
	result = asin(result) * 180 / PI;

	double egimAcisi3 = result;

	a = 1 / frekans;

	double x3[5], t3[5], t32[5];

	for (int i = 0; i < 5; i++) {
		printf("%lf derece icin %d. noktanin merkezden uzakligi: ", egimAcisi3, i + 1);
		scanf_s("%lf", &x3[i]);
	}

	for (int i = 0; i < 5; i++) {
		t3[i] = (i+1.00) * a;
		t32[i] = t3[i] * t3[i];
	}

	double ivme[3], ivme_deneysel[3];

	ivme[0] = (x1[4] - x1[0]) / (t12[4] - t12[0]);
	printf("%lf\n", ivme[0]);
	ivme_deneysel[0] = 2 * ivme[0];

	ivme[1] = (x2[4] - x2[0]) / (t22[4] - t22[0]);
	ivme_deneysel[1] = 2 * ivme[1];

	ivme[2] = (x3[4] - x3[0]) / (t32[4] - t32[0]);
	ivme_deneysel[2] = 2 * ivme[2];

	double ivme_teorik[3];

	double radyan[3], sonuc[3];
	radyan[0] = egimAcisi1 * PI/180;
	sonuc[0] = sin(radyan[0]);

	radyan[1] = egimAcisi2 * PI / 180;
	sonuc[1] = sin(radyan[1]);

	radyan[2] = egimAcisi3 * PI / 180;
	sonuc[2] = sin(radyan[2]);


	ivme_teorik[0] = 980 * sonuc[0];
	ivme_teorik[1] = 980 * sonuc[1];
	ivme_teorik[2] = 980 * sonuc[2];

	printf("1. egim acisi: %lf\t 1. deneysel ivme: %lf\t 1.teorik ivme: %lf\n", egimAcisi1, ivme_deneysel[0], ivme_teorik[0]);
	printf("2. egim acisi: %lf\t 2. deneysel ivme: %lf\t 2.teorik ivme: %lf\n", egimAcisi2, ivme_deneysel[1], ivme_teorik[1]);
	printf("3. egim acisi: %lf\t 3. deneysel ivme: %lf\t 3.teorik ivme: %lf\n", egimAcisi3, ivme_deneysel[2], ivme_teorik[2]);

}