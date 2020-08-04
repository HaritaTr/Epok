#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");

	double X1, X2, X3, X4, Y1, Y2, Y3, Y4, VX1to, VY1to, VZ1to, VX2to, VY2to, VZ2to, VX3to, VY3to, VZ3to;
	double Par1, Par2, Par3, VX4to, VY4to, VZ4to;
	double Xto, Yto, Zto, VXto, VYto, VZto, T1, To;
	double VXt1, VYt1, VZt1, Xt1, Yt1, Zt1;
	double St, Gn, Ay, Yl;
	double Epok;

		/// HIZ VEKTÖRÜ
	printf(" === HIZ VEKTÖRÜ ===\n");
		/// Bilinenleri isteyelim.
	/* To epoğunda TUTGA koordinatları;
	> X1, X2, X3, X4, Y1, Y2, Y3, Y4; */
	printf("To epoğunda TUTGA X1 değerini giriniz: ");
	scanf("%lf", &X1);
	printf("To epoğunda TUTGA X2 değerini giriniz: ");
	scanf("%lf", &X2);
	printf("To epoğunda TUTGA X3 değerini giriniz: ");
	scanf("%lf", &X3);
	printf("To epoğunda TUTGA X4 değerini giriniz: ");
	scanf("%lf", &X4);
	printf("To epoğunda TUTGA Y1 değerini giriniz: ");
	scanf("%lf", &Y1);
	printf("To epoğunda TUTGA Y2 değerini giriniz: ");
	scanf("%lf", &Y2);
	printf("To epoğunda TUTGA Y3 değerini giriniz: ");
	scanf("%lf", &Y3);
	printf("To epoğunda TUTGA Y4 değerini giriniz: ");
	scanf("%lf", &Y4);
	/* 1.2 To epoğunda TUTGA hız vektörleri;
	> VX1to, VY1to, VZ1to, VX2to, VY2to, VZ2to, VX3to, VY3to, VZ3to; */
	printf("To epoğunda TUTGA VX1to değerini giriniz: ");
	scanf("%lf", &VX1to);
	printf("To epoğunda TUTGA VY1to değerini giriniz: ");
	scanf("%lf", &VY1to);
	printf("To epoğunda TUTGA VZ1to değerini giriniz: ");
	scanf("%lf", &VZ1to);
	printf("To epoğunda TUTGA VX2to değerini giriniz: ");
	scanf("%lf", &VX2to);
	printf("To epoğunda TUTGA VY2to değerini giriniz: ");
	scanf("%lf", &VY2to);
	printf("To epoğunda TUTGA VZ2to değerini giriniz: ");
	scanf("%lf", &VZ2to);
	printf("To epoğunda TUTGA VX3to değerini giriniz: ");
	scanf("%lf", &VX3to);
	printf("To epoğunda TUTGA VY3to değerini giriniz: ");
	scanf("%lf", &VY3to);
	printf("To epoğunda TUTGA VZ3to değerini giriniz: ");
	scanf("%lf", &VZ3to);
		/// Bilinmeyenlerin hesaplanması;
	printf(" \t === Hesaplamalar!!! === \n");
	/* Üç noktadan lineer enterpolasyon ile 4. noktanın hız vektörleri; Par1, Par2, Par3, VX4to, VY4to, VZ4to;
	> Par1 = ((X2 - X4) * (Y3 - Y2) - (Y2 - Y4) * (X3 - X2)) / ((X2 - X1) * (Y3 - Y2) - (Y2 - Y1) * (X3 - X2));
	> Par2 = ((X3 - X4) * (Y1 - Y3) - (Y3 - Y4) * (X1 - X3)) / ((X3 - X2) * (Y1 - Y3) - (Y3 - Y2) * (X1 - X3));
	> Par3 = ((X1 - X4) * (Y2 - Y1) - (Y1 - Y4) * (X2 - X1)) / ((X1 - X3) * (Y2 - Y1) - (Y1 - Y3) * (X2 - X1));
	> VX4to = (Par1 * VX1to) + (Par2 * VX2to) + (Par3 * VX3to);
	> VY4to = (Par1 * VY1to) + (Par2 * VY2to) + (Par3 * VY3to);
	> VZ4to = (Par1 * VZ1to) + (Par2 * VZ2to) + (Par3 * VZ3to); */
	Par1 = ((X2 - X4) * (Y3 - Y2) - (Y2 - Y4) * (X3 - X2)) / ((X2 - X1) * (Y3 - Y2) - (Y2 - Y1) * (X3 - X2));
	Par2 = ((X3 - X4) * (Y1 - Y3) - (Y3 - Y4) * (X1 - X3)) / ((X3 - X2) * (Y1 - Y3) - (Y3 - Y2) * (X1 - X3));
	Par3 = ((X1 - X4) * (Y2 - Y1) - (Y1 - Y4) * (X2 - X1)) / ((X1 - X3) * (Y2 - Y1) - (Y1 - Y3) * (X2 - X1));
	VX4to = (Par1 * VX1to) + (Par2 * VX2to) + (Par3 * VX3to);
	VY4to = (Par1 * VY1to) + (Par2 * VY2to) + (Par3 * VY3to);
	VZ4to = (Par1 * VZ1to) + (Par2 * VZ2to) + (Par3 * VZ3to);
	printf("Par1 değeri: %f\n", Par1);
	printf("Par2 değeri: %f\n", Par2);
	printf("Par3 değeri: %f\n", Par3);
	printf("VX4to değeri: %f\n", VX4to);
	printf("VY4to değeri: %f\n", VY4to);
	printf("VZ4to değeri: %f\n", VZ4to);

		/// EPOK KAYDIRMA
	printf(" \n === EPOK KAYDIRMA ===\n");
		/// Bilinenleri isteyelim.
	/* To epoğundaki kartezyen koordinatları;
	> Xto, Yto, Zto; */
	printf("To epoğundaki kartezyen Xto değerini giriniz: ");
	scanf("%lf", &Xto);
	printf("To epoğundaki kartezyen Yto değerini giriniz: ");
	scanf("%lf", &Yto);
	printf("To epoğundaki kartezyen Zto değerini giriniz: ");
	scanf("%lf", &Zto);
	/* To epoğundaki kartezyen koordinatlarının hız vektörü;
	> VXto, VYto, VZto; */
	printf("To epoğundaki kartezyen hız vektörü VXto değerini giriniz: ");
	scanf("%lf", &VXto);
	printf("To epoğundaki kartezyen hız vektörü VYto değerini giriniz: ");
	scanf("%lf", &VYto);
	printf("To epoğundaki kartezyen hız vektörü VZto değerini giriniz: ");
	scanf("%lf", &VZto);
	/* Ölçü ve referans epoğu;
	>T1, To; */
	printf("Ölçü ve referans epoğu T1 değerini giriniz: ");
	scanf("%lf", &T1);
	printf("Ölçü ve referans epoğu To değerini giriniz: ");
	scanf("%lf", &To);
		/// Bilinmeyenlerin hesaplanması;
	printf(" \t === Hesaplamalar!!! === \n");
	/* T1 epoğunda kartezyen koordinatlar;
	> Xt1, Yt1, Zt1;
	> VXt1 = (T1 - To) * VXto;
	> Xt1 = Xto + VXt1;
	> VYt1 =…………….
	> Yt1 = ……………. */
	VXt1 = (T1 - To) * VXto;
	Xt1 = Xto + VXt1;
	VYt1 = (T1 - To) * VYto;
	Yt1 = Yto + VYt1;
	VZt1 = (T1 - To) * VZto;
	Zt1 = Zto + VZt1;
	printf("T1 epoğunda kartezyen hesaplanması Xt1 değeri: %f\n", Xt1);
	printf("T1 epoğunda kartezyen hesaplanması Xt1 değeri: %f\n", Yt1);
	printf("T1 epoğunda kartezyen hesaplanması Xt1 değeri: %f\n", Zt1);

		/// EPOK
	printf(" \n === EPOK ===\n");
		/// Bilinenleri isteyelim.
	/* Saat, Gün, Ay, Yıl Zamanları;
	> St, Gn, Ay, Yl; */
	printf("Saat değerini giriniz: ");
	scanf("%lf", &St);
	printf("Gün değerini giriniz: ");
	scanf("%lf", &Gn);
	printf("Ay değerini giriniz: ");
	scanf("%lf", &Ay);
	printf("Yıl değerini giriniz: ");
	scanf("%lf", &Yl);
		/// Bilinmeyenlerin hesaplanması;
	printf(" \t === Hesaplamalar!!! === \n");
	/* Epok;
	> Saat: 0, Gün: 01, Ay: Temmuz, Yıl: 1977
	> Ay = 31 + 28 + 31 + 30 + 31 + 30;
	> Epok = (((St / 24) + (Gn) + Ay) / 365.25) + Yl; */
	Epok = (((St / 24) + (Gn) + Ay) / 365.25) + Yl;
	printf("Epok: %f\n", Zt1);

	return 0;
}
