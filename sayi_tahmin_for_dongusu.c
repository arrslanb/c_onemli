#include <stdio.h>
#include <time.h> 
#include <stdlib.h>
int main(){

int i,puan,sayac,rastgele,sayi;

srand(time(NULL));
rastgele = rand()%101+1;
printf("Uretilen Sayi%d\n",rastgele);//gizli :D

for(i=0;i<5;i++){
	
printf("%d.tahmin?\n",i+1);
scanf("%d",&sayi);	
if(sayi<rastgele){
	sayac++;
	printf("daha buyuk gir\n");
}
	
	 if (sayi>rastgele){
	 		sayac++;
		printf("daha kucuk gir\n");
	 }
	
		if(sayi==rastgele) {
				printf("tebrikler dogru sonuc\n");
				break;
		}
		
		

	
}
puan = (6-sayac)*20;

printf("\npuaniniz %d dir.",puan);








return 0 ;
}
