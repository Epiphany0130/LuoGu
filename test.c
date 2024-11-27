#include <stdio.h>
main(){
	int a[10][10] = {{1}, {1, 1}}, i, j, k;
	for(i = 2; i < 10; i++)
		a[i][j] = a[i][0] = 1;
	for(i = 2; i < 10; i++)
		for(j = 0; j < 10; j++)
			a[i][j] = a[i-1][j-1] + a[i-1][j];
	for(i = 0; i < 10; i++){
		for(k = 0; k <= 9-i; k++)
			printf("  ");
		for(j = 0; j <= i; j++)
			printf("%4d", a[i][j]);
		printf("\n"); 
	} 
}