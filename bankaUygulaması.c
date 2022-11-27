#include<stdio.h>
int main(){
	
//ATM UYGULAMASI
float bakiye = 895.00;
float tutar;
int islem;

printf("BATUBANKA HOSGElDINIZ\n");
printf("1-Bakiye Sorgulama\n2-Para Cekme\n3-Para Yatirma\n4-Hesaba Havale\n5-Kart Iade\n");
printf("Lutfen Yapmak Istediginiz Islemi Seciniz...\n");
scanf("%d",&islem);
	
switch (islem) {

case 1 : 
printf("BAKIYENIZ %f'DIR",bakiye);
break;	

case 2 :
printf("LUTFEN CEKMEK ISTEDIGINIZ TUTARI GIRIN:");
scanf("%f",&tutar);
if (tutar > bakiye){
	printf("LUTFEN BAKIYENIZDEN KUCUK VEYA BAKIYENIZ KADAR BIR TUTAR GIRINIZ...");
	
	
	
} 
	
bakiye -= tutar;
printf("YENI BAKIYENIZ %f'DIR",bakiye);
break ;

case 3 :
	printf("LUTFEN YATIRMAK ISTEDINIZ PARA MIKTARINI GIRINIZ:");
	scanf("%f",tutar);
	
	bakiye = bakiye + tutar;
	printf("YENI BAKIYENIZ %f'DIR",bakiye);
	break ;

case 4 :
printf("LUTFEN HAVALE YAPILACAK TUTARI GIRINIZ");
scanf("%f",tutar);

bakiye-= tutar;
printf("YENI BAKIYENIZ %f'DIR",bakiye);
break ;

case 5: 
printf("KARTINIZ IADE EDILMISTIR");
break;

default :
printf("ATM'MIZ KISA SURELIGINE ARIZALIDIR");
break ;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0 ;
}
