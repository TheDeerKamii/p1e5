#include <stdio.h>
int main(){

	int a,akd,ypda,ypd2,ypd3,sum;       /*akd = akeraia diairesh, ypda,ypda2 = ypoloipo diaireshs me a kai meta me o apotelesma autou, ypd3 apotelesma praksis me ypd2 */

	printf("Dwse ena tripsisfio akeraio arithmo: ");
	scanf("%d",&a);

	akd = a/100;
	ypda = a%100;
	ypd2 = ypda%10;
	ypd3 = ypda/10;

	sum = akd + ypd3 + ypd2;

	printf("%d + %d + %d = %d", akd, ypd3, ypd2, sum);


return 0;	



}
