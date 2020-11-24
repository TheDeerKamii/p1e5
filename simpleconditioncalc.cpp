#include <stdio.h>
#include <string.h>
int main(){

	double a,b;
	char x[1];

	printf("Dwse 2 dekadikous arithmous kai enan xaraktira: \n");
	scanf("%lf%lf",&a,&b);
	printf("Dialekse S gia athroisma h M gia ginomeno: \n");
	scanf("%c",&x);

	if(x == 'S' || x == 'M'){

		if (x == 'S')

			printf("To athroisma einai: %lf", a + b);
		else
			printf("To ginomeno einai: %lf", a * b);
	}

	else

		printf("Den edwses swsto xarakthra. \n");

	return 0;
}