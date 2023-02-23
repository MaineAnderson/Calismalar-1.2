#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int N; //istenilecek sayinin miktarý

	//0 veya pozitif ve 100 den küçük olduðunda devam edecek döngü 
	do
	{
		printf("kac sayi istiyosunuz? (max 100)\n"); 
		scanf("%d",&N);
	}
	while(N>100 || N<0);
	
	
	int sayilar[100];
	
	FILE *dosya;
	
	dosya=fopen("RastgeleSayi.txt","w");
	
	int i; //sayac
	srand(time(NULL));
	
	for(i=0;i<N;i++)
	{
		
		sayilar[i]=rand()%1000;
		
		fprintf(dosya,"%d.  %d\n",i+1,sayilar[i]); //txt dosyasýna tek tek sayýlarýn yazýlmasý
	}
	
	fclose(dosya);
	
	if(dosya!=NULL)
	{
		printf("\nIslem basarili!");
	}
	else
	{
		printf("\nSorun olustu.");
	}
	
	
	
	getch();
	return 0;
}
