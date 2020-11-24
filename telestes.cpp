#include <stdio.h>
int main(void)
{
int a = 4, b = 3, c = 1;
a += b -= ++c * a--;
printf("%d %d %d\n", a, b, c);
return 0;
/* Prwta tha ektelestoun oi prakseis me mathimatiki seira parenthesewn diladi: [a+=(b-=(++c * a--);] ara a exoume tis ekseis prakseis kai apotelesmata: to c anevenei kata 1 kai ginetai c = 2 kai pollaplasiazetai me to a [4] kai exei ws apotelesma [8].
 Meta h metavliti a logw tou telesti -- tha meiwthei kata 1 kai tha ginei 3 ara a = 3. Epeita exoume thn metavliti b [3] h opoia tha aferaithei apo to apotelesma ths proigoumenis prakshs [++c * a-- = 8] kai tha exei ws apotelesma: 3 - 8 = -5  mias kai tha einai arnitiko. Ara to b ginetai [-5]. 
 Telos exoume ti metavliti a pou htan 4 alla logw ths prwths prakshs [++c * a--] meiothike kata 1 kai egine 3. Ara exoume 3 meion thn metavliti b pou einai -5 kai to apotelesma auths einai -2. Ara to printf tha mas vgalei sthn othoni ta ekshs: -2 -5 2 */
}

