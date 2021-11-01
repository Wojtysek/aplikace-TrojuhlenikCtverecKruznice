#include <stdio.h>

int main(void) {
	int vstup, a, b, c, r;

	printf("vloz operaci: \n");
	printf("1) trojuhelnik\n");
	printf("2) ctvrerec\n");
	printf("3) kruznice\n");
	scanf("%d", &vstup);

	if (vstup == 1) {
		//trojuhelnik 
		printf("zadej stranu a: ");
		scanf("%d", &a);
		printf("zadej stranu b: ");
		scanf("%d", &b);
		printf("zadej stranu c: ");
		scanf("%d", &c);
		if (a + b > c && a + c > b && c + b > a) {
			printf("tento trojuhelnik existuje");
		}
		else {
			printf("tento trojuhelnik neexituje");
		}
		if 
	}
	else if (vstup == 2) {
		//ctverec
		printf("zadej stranu a: ");
		scanf("%d", &a);
		printf("zadej stranu b: ");
		scanf("%d", &b);
		if (a == b) {
			printf("je to ctverec\n");
		}
		else {
			printf("je to obdelnik\n");
		}
		printf("obvod: %d\n", 2 * a + 2 * b);
		printf("obvod: %d\n", a * b);
	}
	else {
			//kruznice
		printf("zadej polomer kruznice: ");
		scanf("%d", &r);
		printf("obvod: %f\n", 3.14 * 2 * r);
		printf("obsah: %f\n", 3.14 * r * r);
	}
}