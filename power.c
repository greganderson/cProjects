#include <stdio.h>

int power(int m, int n);


/* Prints raising i to the power j */
main(){
	int i, j;

	i = 4;

	j = 0;

	printf("%d ^ %d = %d\n", i, j, power(i, j));

	return 0;
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
