#include <stdio.h>
#include <stdlib.h>
#include <time.h> // srand(time(NULL)); için lazým ****

int degerler(int baslangic,int bitis){
	
	srand(time(NULL));
	//rand() % 6 + 1 ***** [0+1,5+1] = [1,6] aralýklý sayý üretir.
	
	int rastgele = rand()% bitis + baslangic; //burasý çok önemli***** bitis nereye kadar üretilecek baslangic nereden baslayacak demek
	if(rastgele==baslangic && rastgele==bitis){
		
	rastgele++;
	}
return rastgele;	
}
int main(){
	
int ilk,son,i;

printf("ilk sayiyi giriniz:");
 scanf("%d",&ilk);
printf("son sayiyi giriniz:");
 scanf("%d",&son);

i = degerler(ilk,son);

printf("\n%d ve %d arasindaki random sayi= %d'dir...",ilk,son,i);	
	

	return 0 ;
}
