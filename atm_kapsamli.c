#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<Windows.h>
#define bakiye 1312
#define isim "BATUHAN"
// ana islemlerimiz i�in de�er d�nd�ren  fonksiyonlar olu�turdum.
int paracekme(int sayi){

	int sonuc = bakiye - sayi;
	return sonuc;
	
}
int parayatirma(int sayi){
	
	int sonuc = bakiye + sayi;
	return sonuc;

}
int bakiyesorgulama(int sayi){

	int sonuc = bakiye;
	return sonuc;
	
}
int havaleeft(int sayi){
	
	int sonuc = bakiye - sayi;
	return sonuc;
	
	
}
int main(){
int hesapno = 123;         //havale eft yap�lacak hesap numaras�
int gechesapno;	          //hesapno k�yas
int islemler,sayi;
int kontrol = 0;
int sifre = 13;
int gecsifre;           //k�yas yapmak i�in
char cevap={'e','h','H','E'} ;      // e veya h
yeniden:;
printf("\n\t\t\t\t\t\t**BATUBANKA HOSGELDINIZ**\n");
for(;;){        //islemler do�ru girilene kadar sonsuz d�ng� islemler do�ru girilene kadar
	printf("\n\nLUTFEN SIFRENIZI GIRINIZ!");
	scanf("%d",&gecsifre);
	fflush(stdin);
	if(gecsifre!=sifre){
		printf("YANLIS SIFRE!!");
		goto yeniden;
		
	}
	else{
		printf("SIFRENIZ DOGRULANMAKTADIR!\n");
		printf("HOSGELDINIZ %s BEY\n\n",isim);
	}
	break;
}	
ikincidefaislem:;
printf("ISLEMLER:\n");
printf("1-PARA CEKME.\n");
printf("2-PARA YATIRMA.\n");
printf("3-HAVELE/EFT.\n");
printf("4-BAKIYE SORGULAMA.\n");

printf("LUTFEN YAPMAK ISTEDIGINIZ ISLEMI TUSLAYINIZ!");
scanf("%d",&islemler);

gir:;
switch(islemler){
	case 1 :
		
		printf("CEKMEK ISTEDIGINIZ TUTARI GIRINIZ:");
		scanf("%d",&sayi);
		if(sayi<=bakiye){
		int a = paracekme(sayi);
		printf("Yeni Bakiyeniz %d TL'dir.\n",a);
		}
		else{
			printf("Yetersiz Bakiye\n");
			goto gir;
		}
	
		break;
		
		case 2:
	    printf("YATIRMAK ISTEDIGINIZ TUTARI GIRINIZ:");
	    scanf("%d",&sayi);
	    int b = parayatirma(sayi);
	    printf("Yeni Bakiyeniz %d TL 'dir.\n",b);
	    break;
	    
	    case 3:
	    	
	    	printf("HAVALE/EFT YAPMAK ISTEDIGINIZ HESAP NUMARASINI TUSLAYINIZ:");
	    	scanf("%d",&gechesapno);
	        if(gechesapno!=hesapno){
	        	printf("YANLIS HESAP NUMARASI\n");
	        	goto gir;
			}
	        else{
	        	printf("Gondermek Istediginiz Hesap #%d#\n",hesapno);	
			}
			printf("Gondermek Istediginiz Tutari Giriniz:\n");
			scanf("%d",&sayi);
			if(sayi<=bakiye){
			int c = havaleeft(sayi);
	        printf("Havale/Eft Sonucu Yeni Bakiyeniz %d TL'dir\n",c);
			}
			else{
				printf("Yetersiz Bakiye!!\n");
				goto gir;
			}
	        break;
	        
	        case 4: 
	        printf("Bakiyeniz Goruntulenmektedir:\n");
	        Sleep(1000); //ger�ek�ilik i�in
		    system("CLS"); //ger�ek�ilik i�in
		    int d = bakiyesorgulama(sayi);
		    printf("BAKIYENIZ %d TL'dir.\n",d);
	        break;
	       
	       default :
	       	 Sleep(1000); //ger�ek�ilik i�in
		    system("CLS"); //ger�ek�ilik i�in
	       printf("ATM'MIZ KISA SURELIGINE ARIZALIDIR!\n");
	      break;
	
}

printf("Baska Bir Islem Yapmak Ister misiniz?\n");
printf("EVET VEYA HAYIR ICIN H VEYA E TUSLAYINIZ!!");
scanf("%s",&cevap);
if(cevap=='e'||cevap=='E'){
	goto ikincidefaislem;
}	
else if(cevap=='h'||cevap=='H'){
	printf("\nTEKRAR GORUSMEK UZERE %s BEY BIZI TERCIH ETTIGINIZ ICIN TESEKKURLER...\n",isim);
	
}	
	
system("pause");
	return 0 ;
}
