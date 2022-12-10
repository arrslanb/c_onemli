#include<stdio.h>
//GÝRÝLEN SAYI MÜKEMMEL SAYI MI?
int main(){
	int sayi,i,toplam=0;
printf("Mukemmel Sayi mi?");
scanf("%d",&sayi);

for(i=1;i<sayi;i++){
	if(sayi%i==0){
		toplam = toplam+i;
	}

}
	if (toplam == sayi){
		printf("MUKEMMEL SAYI!");
	}
	else {
		printf("MUKEMMEL SAYI DEGIL!");
	}
	
return 0;
}

