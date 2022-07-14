#include <stdio.h>

int main ()
{
	int a, b, c;
	printf(" Inserice un numero\n");
	scanf("%d",&a);
//	scanf(a++,b);
	//b=a++;
	//c=a--;
	printf(" Il numero inserito e:%d\n",a);
	printf(" L'incerimento del numero e:%d\n", a+1, &b);
	printf(" Il decrimento del numero e: %d\n", a-1,&c);
	return 0;
}
