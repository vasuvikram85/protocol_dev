
/*Calculate Simple Interest*/
#include<stdio.h>
int main()
{
	int p,n; float r,si;
	scanf("%d%d%f",&p,&n,&r);
	si=p*n*r/100;
	printf("%f\n",si);
	return 0;
}
