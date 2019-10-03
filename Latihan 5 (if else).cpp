#include <stdio.h>

int x;

int main(){

printf ("Masukkan Nilai X"); scanf ("%d", &x);

if (x>=80){
	printf ("Nilai Anda A");
}

if (x>=70 && x<80){
	printf ("Nilai Anda B");
}

if (x>=60 && x<70){
	printf ("Nilai Anda C");
}

else{
	printf ("NGULANG AJA COY TAHUN DEPAN");
}

return 0;
}
