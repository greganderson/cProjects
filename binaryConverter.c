#include <stdio.h>

int power(int base, int power);
void binary(int num);

/* Converts input text to binary */
main(){
	int c, i, j;

	i = 0;
	
	while ((c = getchar()) != EOF){
		if (c != '\n')
			binary(c);
		else
			printf("\n");
	}
	printf("\n");

	return 0;
}

/* Converts the integer to binary and prints it */
void binary(int num){
	int i, pow;
	int bin[8];

	// Make the binary conversion
	for (i = 0; i < 8; i++){
		pow = power(2, i);
		bin[i] = (num/pow) % 2;
	}
	// Print the first 4 numbers
	for (i = 7; i >= 4; i--){
		printf("%d", bin[i]);
	}
	printf(" ");
	// Print the last 4 numbers
	for (i = 3; i >= 0; i--){
		printf("%d", bin[i]);
	}
	printf(" ");
}

/* Raises base to power (4^6, 2^8, etc) */
int power(int base, int power){
	int i, num;

	num = 1;

	for (i = 0; i < power; i++){
		num *= base;
	}

	return num;
}
