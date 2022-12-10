#include<stdio.h>
int main(){
float vergi1 = 0.15;
float vergi2 = 0.2;
float tvergi,gelir;
int i;
float maas=5000;

for(i=1;i<=12;i++){
	if(gelir<20000){
		tvergi+= maas*vergi1;
		gelir += maas-maas*vergi1;
		printf("%d. Ay sonundaki\n  Gelir: %g tl\n  Vergi: %g tl \n", i, gelir, tvergi);
	}
	else{
      tvergi += maas*vergi2;
      gelir += maas-maas*vergi2;
      printf("%d. Ay sonundaki\n Gelir: %g tl\n Vergi: %g tl \n", i, gelir, tvergi);
    }
}	
printf("\nYillik Gelir: %g tl\n", gelir);
printf("Yillik Vergi: %g tl", tvergi);	
	
	
	
	
	
	
	
	
	
	return 0;
}
