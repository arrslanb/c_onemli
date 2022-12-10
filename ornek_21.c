#include<stdio.h>
int main(){
char harfnotu;
printf("\n\t\t\t\t\tGECTIN MI KALDIN MI?\n");
menu:;
printf("HARF NOTUNUZ NEDIR?\n");
printf("LUTFEN BUYUK HARF ILE GIRIN\n");
scanf("%c",&harfnotu);
switch(harfnotu){
	
	case 'A': 
	case 'B':
    case 'C': printf("GECER NOT!");
    	break;	
    case 'D': printf("KOSULLU GECER!");
    	break;
    case 'F': printf("KALDINIZ!");
    	break;
    	default: printf("GECERLI BIR HARF GIRILMEDI!!\n");
    	goto menu;
    	break;
}
	return 0;
}
