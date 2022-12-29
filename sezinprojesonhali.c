#include <stdio.h>
#include <stdlib.h>

/* Ýþlemleri tanýmla. Maksimum 3 hak ver. 3 ten büyükse yeniden denettir. Kuaför seç. Saat seç. Randevu oluþtur.*/
/*
1-Baþla
2-Ýþlemleri tanýmla. 5=fon , 6=boya , 7=kesim , 8=masa
3-Ýþlem seç.
4-Ýþlem sayýsý 3'ten büyük mü diye sor.
 1-büyükse git adým 5'e
 2-deðilse git adým 6'ya.
5-Yeniden denemek ister misin diye sor.
 1-evetse git adým 3
 2-hayýrsa git adým 13
6-Kuaför seçiniz.
7-Kuaförleri tanýmla. x=ayla , y=nuray , z=gülay , t=can
8-iþlemi gir.
9-Saat seçiniz.
10-Saatleri tanýmla. (10.00 , 13.00 , 15.00)
11-Ýþlemi gir.
12-Ekrana yazdýr."Randevunuz baþarýyla oluþmuþtur."
13-bitir.
*/
void GirisEkran();

int main() 
{


GirisEkran();
	
	
	char kuafor[30];
		printf("Kuafor sec ayla nuray gulay can");
scanf("%s",&kuafor);
printf("%s kisisini sectiniz.",kuafor);

int saat;

printf("saat sec 10 13 15");
scanf("%d",&saat);
printf("%d sectiniz Randevu olusturulsun mu? EVET ISE 1 HAYIR ISE 0",saat);



int tercih;


while(1)
{

scanf("%d",&tercih);

if(tercih==1)
{

printf("randevu olustu");
break;
}


else if(tercih==0)

{

printf("randevu iptal.");
break;

}
else
{

printf("hatali tuslama. yeniden dene.");
	
}
}
	
	
	
	
	
	
	return 0;
}


void GirisEkran()
{
	
	
	
	
	

printf("Kuafore hosgeldiniz.");
char islem1[30];
char islem2[30];
char islem3[30];
char islem4[30];
int islemsayi;



printf("Kac tane islem , en fazla 3?");



while(1)
{



scanf("%d",&islemsayi); 

	if(islemsayi==1)
{

		printf("Verilen islemlerden seciniz.\n 1 2 3 4");
		scanf("%s",islem1);
		printf("%s islemi sectin",islem1);
		
		break;
}
	 
	else if(islemsayi==2)
	{
	
		printf("Verilen islemleri giriniz.\n 1 2 3 4");
	scanf("%s",islem1);
	printf("%s islemi sectin",islem1);
	scanf("%s",islem2);
	printf("%s islemi sectin",islem2);
		break;
	
}
	else if(islemsayi==3)
	{
		
		printf("Verilen islemleri giriniz.\n 1 2 3 4");
	scanf("%s",islem1);
	printf("%s islemi sectin",islem1);
	scanf("%s",islem2);
	printf("%s islemi sectin",islem2);
	scanf("%s",islem3);
	printf("%s islemi sectin",islem3);
	break;
	
	}
	
	else 
	
	{
		printf("Hatali giris yaptiniz. Tekrar deneyin.");

	}




}

}
