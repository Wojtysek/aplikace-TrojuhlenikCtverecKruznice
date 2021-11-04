#include <stdio.h>

int main(void) {
	int vstup, a, b, c, r;

	printf("vloz operaci: \n");
	printf("1) trojuhelnik\n");
	printf("2) obdelnik\n");
	printf("3) kruznice\n");
	scanf("%d", &vstup);
	system("cls");

	if (vstup == 1) {
		//trojuhelnik 
		printf("zadej stranu a: ");
		scanf("%d", &a);
		printf("zadej stranu b: ");
		scanf("%d", &b);
		printf("zadej stranu c: ");
		scanf("%d", &c);
		system("cls");

		if (a + b > c && a + c > b && c + b > a) {
			printf("tento trojuhelnik existuje\n");
			int max = a;
			if (b > max) {
				max = b;
			}
			if (c > max) {
				max = c;
			}
			printf("obvod: %d\n", a + b + c);
		}
		else {
			printf("tento trojuhelnik neexistuje\n");
		}
	}
	else if (vstup == 2) {
		//obdelnik
		printf("zadej stranu a: ");
		scanf("%d", &a);
		printf("zadej stranu b: ");
		scanf("%d", &b);
		system("cls");

		if (a == b) {
			printf("je to ctverec\n");
		}
		else {
			printf("je to obdelnik\n");
		}
		printf("obvod: %d\n", 2 * a + 2 * b);
		printf("obsah: %d\n", a * b);
	}
	else {
			//kruznice
		printf("zadej polomer kruznice: ");
		scanf("%d", &r);
		system("cls");
		printf("obvod: %f\n", 3.14 * 2 * r);
		printf("obsah: %f\n", 3.14 * r * r);
	}
}