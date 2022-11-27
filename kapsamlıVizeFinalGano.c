#include<stdio.h>
int main(){
	
int vize1, vize2, final ;
float uniOrt ;
float dersOrt;
printf("Vize 1 notunuzu giriniz:");
scanf("%d",&vize1);

printf("Vize 2 notunuzu giriniz:");
scanf("%d",&vize2);
	

printf("Final notunuzu giriniz:");
scanf("%d",&final);

printf("Ganonuzu giriniz lutfen.");
scanf("%f",&uniOrt);

dersOrt = (vize1 + vize2 + final)/3.0;

if  (dersOrt>=50){
	printf("TEBRIKLER DERSI GECTINIZ.");
	
}
else if (dersOrt>40 && dersOrt<49){
	printf("BUTE KALDINIZ.\n");
	if(uniOrt<1.75){
		printf("BU DERSI ALTAN ALMAK ZORUNDASINIZ.");
	}
}		
	
else {
	printf("MAALESEF KALDINIZ.");
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
