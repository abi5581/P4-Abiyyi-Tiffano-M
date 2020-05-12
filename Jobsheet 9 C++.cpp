#include<stdio.h>
int main (){
	int i;
	char
	nama[4]={'A','B','I','\0'};
	char nama2 [4]="ABI";
	printf("Array per karakter = ");
	for(i=0;i<=3;i++)
	{
		printf("%c",nama2[i]);
	}
	printf("\n");
	printf("Array string  = %s\n\n",nama2);
	return 0;
}
