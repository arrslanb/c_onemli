#include <stdio.h>
 
void asalmi(int sayi) 
{
	int i;
    int sayac = 0;
    for( i = 2; i < sayi; i++)
    {
        if(sayi % i == 0){
            sayac++;
        }
    }
    if(sayac == 0){
        printf("%d sayisi asal bir sayidir.",sayi);
    }
    else{
        printf("%d sayisi asal bir sayi degildir.",sayi);
    }
}
 
main()
{
    int sayi;
    
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    asalmi(sayi);
}
