/****************************************************************************
**					ÝSTANBUL TÝCARET ÜNÝVERSÝTESÝ
**				      SÝBER GÜVENLÝK BÖLÜMÜ
**				  	 PROGRAMLAMA 2 DERSÝ
**					2022-2023 GÜZ DÖNEMÝ
**	
**				ÖDEV NUMARASI..........: ODEV 1
**				ÖÐRENCÝ ADI............: MUSTAFA YAKIN
**				ÖÐRENCÝ NUMARASI.......: 200030593
**              
****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int nottopla(int dizi[],int boyut){
	int sum=0;
	for(int i=0;i<boyut;i++){
		sum += dizi[i];
	}
	return sum;	
}
void yazdir(int n, char metin[10]){
	float ortalama = n / 10.0;
	printf("%s sinif ortalamasi == %.2f\n",metin,ortalama);
}

int notata(int dizi[],int boyut){
	for(int i=0;i < boyut;i++){
	int sayi = rand() % 101; // 0-100 araliginda sayi uretecek 
	dizi[i] = sayi;	
	}	
}
int sonortalama(int dizi[],int dizi1[],int dizi2[],float dizi3[]){
	for(int i=0;i<10;i++){
	float ogr = (25*dizi[i] + 25*dizi1[i] + 50*dizi2[i]) / 100.0;
 	dizi3[i] = ogr;
	}
}
void harfnotuyazdir(float dizi[]){
	for(int i = 0; i<10;i++){
		if(dizi[i] > 90){
			printf("%d. Ogrenci Not Ortalamasi :: %.2f --> A ile Gecti\n",i+1,dizi[i]);
		}
		else if(dizi[i] > 75){
			printf("%d. Ogrenci Not Ortalamasi :: %.2f -->  B ile Gecti\n",i+1,dizi[i]);
		}
		else if(dizi[i] > 55){
			printf("%d. Ogrenci Not Ortalamasi :: %.2f -->  C ile Gecti\n",i+1,dizi[i]);
		}
		else{
			printf("%d. Ogrenci Not Ortalamasi :: %.2f -->  KALDI :'(\n",i+1,dizi[i]);
		}
	}
	printf("---------------------------------------------------------\n11. Ogrenci devamsizliktan kaldi :: Muhtemelen Ben :') \n\nProgram Bitti Tesekkurler");
}

int main(){
	
	int vize1[10],vize2[10],final[10];
	float sonnot[10];
	srand(time(NULL));
	//rand ile not atama 
	notata(vize1,10);
	notata(vize2,10);
	notata(final,10);
	//dizinin icindeki tum notlari toplayacak
	int vize1ort = nottopla(vize1,10);
	int vize2ort = nottopla(vize2,10);
	int finalort = nottopla(final,10);
	//ve ekrana sinifin not ortalamasini yazdiracak
	yazdir(vize1ort,"Vize1");
	yazdir(vize2ort,"Vize2");
	yazdir(finalort,"Final");
	//nihai son not hesaplanacak
	sonortalama(vize1,vize2,final,sonnot);
	//harf notu yazdýrýlacak
	harfnotuyazdir(sonnot);
	return 1;
}
