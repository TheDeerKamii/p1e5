#include <stdio.h>
int main(){

	int a,b;

	printf("Dwse duo akeraious arithmous gia vathmo: ");
	scanf("%d%d",&a,&b);
	
	if(a > 5 && b > 5)

		printf("Perases to mathima. \n");

	else
		printf("Den perases to mathima. \n");

	if(a > 10 || a <0)

		printf("Lathos vathmos a.\n");

	if(b >10 || b < 0)

		printf("Lathos vathmos b.\n");


	return 0;
}