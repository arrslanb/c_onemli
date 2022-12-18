#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>
//seçilen sezona ve oda derecesine göre fiyat tarifesi
int kissezonu(int oda,int gun){
	
int sayi = 1000;
int fiyat = oda * sayi * gun ;
return fiyat;		
}
int ilkbaharsezonu(int oda,int gun){
	
int sayi = 1300;
int fiyat = oda * sayi * gun ;
return fiyat;		
}
int yazsezonu(int oda,int gun){
	
int sayi = 1500;
int fiyat = oda * sayi * gun ;
return fiyat;	
}
int sonbaharsezonu(int oda,int gun){
	
int sayi = 1200;
int fiyat = oda * sayi * gun ;
return fiyat;		
}

int main(){

char sezon = {'i','I','K','k','Y','y','S','s'};
int oda,gun;
char cevap = {'e','E','H','h'} ;
char cevap2 = {'e','E','H','h'};
printf("\t\t\t\t\t**OTEL REZERVASYONUMUZA HOSGELDINIZ**\n");
menu:;
printf("SEZONLARIMIZ:\n");
printf("1-ilkbahar:\n");
printf("2-yaz:\n");
printf("3-sonbahar:\n");
printf("4-kis:\n");
    printf("Konaklamak istediginiz sezonun bas harfini yaziniz!");
    scanf("%c",&sezon);
        printf("Odaniz kac kisilik olacak?(1-3)\n");
        scanf("%d",&oda);
           printf("Kac gun konaklamayi dusunuyorsunuz!");
           scanf("%d",&gun);
if(oda>3){
	printf("lutfen gecerli bir oda tipi giriniz giriniz!!\n");
	goto menu;
}
if(gun>7){
	printf("maalesef bosta odamiz kalmamistir!!\n");
	goto menu ;
}
switch(sezon){
	
	
	case 'I' :
    case 'i' :
	 
	printf("0-12 yas misafiriniz var mi?\nE VEYA H\n");
	scanf("%s",&cevap);
	 ilkbaharsezonu(oda,gun);
	if(cevap == 'e'|| cevap == 'E'){
		 
			printf("toplam konaklama masrafiniz %d TL'dir...\n",ilkbaharsezonu(oda,gun)/2);
	}
	else {
		
			printf("toplam konaklama masrafiniz %d TL'dir...\n",ilkbaharsezonu(oda,gun));
	}	
	break;
	case 'Y' :
	case 'y' :	
	yazsezonu(oda,gun);
		printf("0-12 yas misafiriniz var mi? E VEYA H");
	scanf("%s",&cevap);
	if(cevap == 'e'|| cevap == 'E'){
		
			printf("toplam konaklama masrafiniz %d TL'dir...\n",yazsezonu(oda,gun)/2);
	}
	else {
	
			printf("toplam konaklama masrafiniz %d TL'dir...\n",yazsezonu(oda,gun));
	}
	
	break;
	case 'S' :
	case 's' :		
	sonbaharsezonu(oda,gun);
		printf("0-12 yas misafiriniz var mi? E VEYA H");
	scanf("%s",&cevap);
	if(cevap == 'e'|| cevap == 'E'){
	
		printf("toplam konaklama masrafiniz %d TL'dir...\n",sonbaharsezonu(oda,gun)/2);	
		
	}
	else {
	
		printf("toplam konaklama masrafiniz %d TL'dir...\n",sonbaharsezonu(oda,gun));	
	}
		
		break;
		
	case 'K' :
	case 'k':
	kissezonu(oda,gun);
		printf("0-12 yas misafiriniz var mi? E VEYA H");
	scanf("%s",&cevap);
	if(cevap == 'e'|| cevap == 'E'){
		
		printf("toplam konaklama masrafiniz %d TL'dir...\n",kissezonu(oda,gun)/2);
	}
	else {
		 
		printf("toplam konaklama masrafiniz %d TL'dir...\n",kissezonu(oda,gun));
	}
		
		break;
   default :
   	printf("baska rezervasyon olusturmak ister misiniz?\n");
   	scanf("%c",&cevap2);
   	if(cevap2=='E'||cevap2=='e'){
   		goto menu;
	   }
	   else if (cevap2=='h'||cevap2=='H'){
	   		goto odeme;
	   }
	   break;
	   }
odeme:;
 Sleep(1000); 
printf("kart bilgilerinizi giriniz!!\n");
Sleep(1000); 
Sleep(1000); 
Sleep(1000); 
Sleep(1000); 
printf("odemeniz basariyla gerceklestirilmistir\nIYI TATILLER!!!");
	
	return 0; 
}


