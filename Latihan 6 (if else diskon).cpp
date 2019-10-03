#include <stdio.h>

int x, diskon, hasil;

int main (){
	
printf ("Masukkan Harga "); scanf ("%d", &x);

if (x>=30000){
	
diskon = (x*50)/100;
	hasil = (x - (x*50)/100);
	
printf ("Jumlah diskon %d \n", diskon);
	printf ("Harga setelah diskon adalah %d ", hasil);
		
}else{
	
diskon = (x*30)/100;
	hasil = (x - (x*30)/100);
	
printf ("Jumlah diskon %d \n", diskon);
	printf ("Harga setelah diskon adalah %d ", hasil);
}

return 0;
}
