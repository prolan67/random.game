#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	srand (time(NULL));
	int i,dizi[10],tahmin1,pressed,sayi1,tahmin2;
	printf("\t\tOYUNUN KURALLARİ\n");
	printf("1. Oyuna baslamak icin 1 TL makineye atiniz.\n");
	printf("2. Bilgisayar 1-10 arasinda 10 adet rastgele sayi uretecektir. Bu 10 sayidan biri oldugunu dusundugunuz sayiyi giriniz.\n");
	printf("3. Eger bu 10 sayinin icinde girdiginiz sayidan en az 1 tane var ise 1 TL kazanirsiniz.\n");
	printf("4. Eger bu 1 TL'yi almaz ve oyuna devam ederseniz bu sayidan 10 sayi icinde kac tane oldugu tahmininizi girmelisiniz.\n");
	printf("5. Eger bilirseniz 2 TL kazanirsiniz.\n\n\n\n\n\n\n");
	printf("Oyuna baslamak icin (1)'e basiniz.");
	scanf("%d",&pressed);
	while (pressed ==1)
	{
		for (i=0 ; i<10 ; i++)
		{
			dizi[i] = rand()%10 + 1;
		}
		printf("10 sayi icinde olacagini dusundugunuz sayiyi giriniz : ");
		scanf("%d",&tahmin1);
		sayi1 = 0;
		for (i=0 ; i<10 ; i++)
		{
			if (dizi[i]==tahmin1)
			{
				sayi1++;
			}
		}
		if (sayi1 == 0)
		{
			printf("Girdiginiz sayidan hic bulunmamaktadir. \n Kazanc = 0 TL \n Sirasiyla sayilar :\n");
			for (i=0 ; i<10 ; i++)
			{
				printf("%d\t",dizi[i]);
			}
			printf("\n\n");
		}else{
			printf(" Tebrikler dogru bildiniz! Girdiginiz sayidan 10 sayi icinde bulunmakta. \n Oyuna devam etmek icin (1)'e etmek istemiyorsaniz (2)'ye basiniz.");
			scanf("%d",&pressed);
			if (pressed == 1)
			{
				printf("Daha once girdiginiz sayidan 10 adet sayi icinde kac tane oldugu tahmininizi giriniz : ");
				scanf("%d",&tahmin2);
				if (tahmin2 == sayi1)
				{
					printf("Tebrikler dogru bildiniz! \n\n Kazanciniz = 2 TL \n\n Paranizi asagidaki bosluktan alabilirsiniz!\n");
				}else{
					printf("Maalesef dogru bilemediniz! \n\n Kazanciniz = 0 TL \n\n Dogru deger : %d   olacakti. \n",sayi1);
				}
				printf("\n\n\n\n Sirasiyla degerler : \n");
				for (i=0 ; i<10 ; i++)
				{
					printf("%d\t",dizi[i]);
				}
				printf("\n\n");
			}else{
				printf("Kazanc = 1 TL. \n\n Paranizi asagidaki bosluktan alabilirsiniz! \n\n Sirasiyla sayilar :\n");
			}
			for (i=0 ; i<10 ; i++)
			{
				printf("%d\t",dizi[i]);
			}
			printf("\n\n");
		}
		printf("Oyuna devam etmek icin (1)'e , yoksa (2)'ye tiklayiniz.");
		scanf("%d",&pressed);
	}
	return 0;
}
