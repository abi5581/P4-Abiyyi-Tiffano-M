#include<stdio.h>
int main (){
	int x[4],i;
	for(i=0;i<=3;i++)
	{
		printf("masukkan nilai %i : ",i+1);
		scanf("%i",&x[i]);
	}
	printf("\n");
	for(i=0;i<=3;i++)
	{
		printf("nilai ke-%i=  %i\n",i+1,x[i]);
	}
	printf("\n");
	return 0;
}
