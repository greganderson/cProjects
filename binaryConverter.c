#include <stdio.h>

int power(int base, int power);
void binary(int num);

main(){
	int c, i, j;

	i = 0;
	
	while ((c = getchar()) != EOF){
		if (c != '\n')
			binary(c);
		else
			printf("\n");
	}
	binary(EOF);
	printf("\n");

	return 0;
}

void binary(int num){
	int i, pow;
	int bin[8];

	for (i = 0; i < 8; i++){
		pow = power(2, i);
		bin[i] = (num/pow) % 2;
	}
	// printf("Binary for %d: ", num);
	for (i = 7; i >= 4; i--){
		printf("%d", bin[i]);
	}
	printf(" ");
	for (i = 3; i >= 0; i--){
		printf("%d", bin[i]);
	}
	printf(" ");
}

int power(int base, int power){
	int i, num;

	num = 1;

	for (i = 0; i < power; i++){
		num *= base;
	}

	return num;
}
