#include <stdio.h>
#include <stdlib.h>

/* ��lemleri tan�mla. Maksimum 3 hak ver. 3 ten b�y�kse yeniden denettir. Kuaf�r se�. Saat se�. Randevu olu�tur.*/
/*
1-Ba�la
2-��lemleri tan�mla. 5=fon , 6=boya , 7=kesim , 8=masa
3-��lem se�.
4-��lem say�s� 3'ten b�y�k m� diye sor.
 1-b�y�kse git ad�m 5'e
 2-de�ilse git ad�m 6'ya.
5-Yeniden denemek ister misin diye sor.
 1-evetse git ad�m 3
 2-hay�rsa git ad�m 13
6-Kuaf�r se�iniz.
7-Kuaf�rleri tan�mla. x=ayla , y=nuray , z=g�lay , t=can
8-i�lemi gir.
9-Saat se�iniz.
10-Saatleri tan�mla. (10.00 , 13.00 , 15.00)
11-��lemi gir.
12-Ekrana yazd�r."Randevunuz ba�ar�yla olu�mu�tur."
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
