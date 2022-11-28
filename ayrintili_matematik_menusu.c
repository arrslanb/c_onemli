#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.14
int karealan(int a){
	int sonuc = a*a;
	return sonuc;
}
int dikdortgenalan(int a,int b){
	int sonuc = a*b;
	return sonuc;
	
}
float cemberalan(int a){
	
	float sonuc = 2*PI*(a*a);
	return sonuc;
}

int faktoriyel(int n){
	
	int fact=1;
	int i;
	for(i=1;i<=n;i++){
		
		fact = fact * i;
		
	}
	
return fact;
	

}
double xsin(int a){
	
	double sonuc = sin(a);
	
return sonuc;
}
double xcos(int a){
	
	double sonuc = cos(a);
	return sonuc;
}
double xtan(int a){
	
	double sonuc = sin(a)/cos(a);
	return sonuc;
}
double xcot(int a){
	
double sonuc = cos(a)/sin(a);
return sonuc;
}
int main(){
	
int a,b,islem;
yeniden:;
printf("Matemetik Menusu\n");
printf("islemler:\n");
printf("1-Karede Alan Hesabi.\n");
printf("2-Dikdortgen Alan Hesabi.\n");
printf("3-Cember Alan Hesabi.\n");
printf("4-Faktoriyel Hesabi.\n");
printf("5-Sin Hesabi.\n");
printf("6-Cos Hesabi.\n");
printf("7-Tan Hesabi.\n");
printf("8-Cot Hesabi.\n");
printf("Lutfen yapmak Istediginiz Islemi Seciniz:");
scanf("%d",&islem);
	switch(islem){
		
	case 1 :
	printf("Karenin Kenar Degerini Giriniz:");
	scanf("%d",&a);
	karealan(a);
	printf("Sonuc=%d",karealan(a));
	break;
	
	case 2:
	printf("Dikdortgen Kenar Degerlerini Giriniz:");
	scanf("%d%d",&a,&b);
	dikdortgenalan(a,b);
	printf("Sonuc=%d",dikdortgenalan(a,b));
	break;
	
	case 3:
	printf("Cember Yaricapini Giriniz:");
	scanf("%d",&a);
	cemberalan(a);
    printf("Sonuc=%.2f",cemberalan(a));
	break;
	
	case 4:
	printf("Faktoriyelinin Hesaplanmasini Istediginiz Sayiyi Giriniz:");
	scanf("%d",&a);
	faktoriyel(a);
	printf("Sonuc=%d",faktoriyel(a));
	break;
	
	
	case 5:
	printf("Sin Degerinin Hesaplanmasini Istediginiz Degeri Giriniz:");
	scanf("%d",&a);
	xsin(a);
	printf("Sonuc=%f",xsin(a));
	break;
	
	case 6:
	printf("Cos Degerinin Hesaplanmasini Istediginiz Degeri Giriniz:");
	scanf("%d",&a);
	xcos(a);
	printf("Sonuc=%f",xcos(a));
	break;

	case 7:
	printf("Tan Degerinin Hesaplanmasini Istediginiz Degeri Giriniz:");
	scanf("%d",&a);
	xtan(a);
	printf("Sonuc=%f",xtan(a));
	break;
	
	case 8:	
	printf("Cot Degerinin Hesaplanmasini Istediginiz Degeri Giriniz:");
	scanf("%d",&a);
	xcot(a);
	printf("Sonuc=%f",xcot(a));	
	break;
	
	default:
	goto yeniden;
		
	}
	
	return 0;
}
