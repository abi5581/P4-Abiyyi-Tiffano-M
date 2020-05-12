#include <stdio.h>
#include <conio.h>
main ()
{
	int nim_mahasiswa1 [1] [3], nim_mahasiswa2 [1] [3], i, j;
	printf ("NIM_MAHASISWA 1\n");
	for (i=0; i<=1; i++){
	for (j=0; j<=1; j++){
	printf (" Elemen [%d] [$d] :",i,j);
	scanf ("%d",&nim_mahasiswa1[i] [j]);	
}
}
	printf ("\nNIM_MAHASISWA 2\n");
	for (i=0; i<=1; i++){
	for (j=0; j<=1; j++){
	printf (" Elemen [%d] [$d] :",i,j);
	scanf ("%d",&nim_mahasiswa2[i] [j]);
}
}
	printf("\nHASIL PENJUMLAHAN NIM TERAKHIR\n\n");
	for ( i=0; i<=1; i++){
	for ( j=0; j<=1; j++)
	printf ("%d\t", nim_mahasiswa1[i][j]+nim_mahasiswa2[i][j]);
	printf ("\n");}getch();
	}
	
