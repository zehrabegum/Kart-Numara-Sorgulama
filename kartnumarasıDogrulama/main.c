#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE *dosya=fopen("numara.txt","r");
	
	int sayi,sayi1,sayi2,sayi3;
	int basamak[4],basamak1[4],basamak2[4],basamak3[4];
	int deger[2];
	int toplam;
	
	if(dosya!=NULL)
	{
		while(!feof(dosya))
		{
			{
			    fscanf(dosya,"%d %d %d %d",&sayi,&sayi1,&sayi2,&sayi3);
				printf("\n");
				basamak[0]=(sayi/1000)*2;
				basamak[1]=(sayi%1000)/100;
				basamak[2]=((sayi%100)/10)*2;
				basamak[3]=sayi%10;
				
				if(basamak[0]>=10||basamak[2]>=10)
				{
					deger[0]=basamak[0]%10;
					deger[1]=basamak[0]/10;
					basamak[0]=deger[0]+deger[1];
					
					deger[0]=basamak[2]%10;
					deger[1]=basamak[2]/10;
					basamak[2]=deger[0]+deger[1];
				}
				
				basamak1[0]=(sayi1/1000)*2;
				basamak1[1]=(sayi1%1000)/100;
				basamak1[2]=((sayi1%100)/10)*2;
				basamak1[3]=sayi1%10;
				
				if(basamak1[0]>=10||basamak1[2]>=10)
				{
					deger[0]=basamak1[0]%10;
					deger[1]=basamak1[0]/10;
					basamak1[0]=deger[0]+deger[1];
					
					deger[0]=basamak1[2]%10;
					deger[1]=basamak1[2]/10;
					basamak1[2]=deger[0]+deger[1];
				}
				
				basamak2[0]=(sayi2/1000)*2;
				basamak2[1]=(sayi2%1000)/100;
				basamak2[2]=((sayi2%100)/10)*2;
				basamak2[3]=sayi2%10;
				
				if(basamak2[0]>=10||basamak2[2]>=10)
				{
					deger[0]=basamak2[0]%10;
					deger[1]=basamak2[0]/10;
					basamak2[0]=deger[0]+deger[1];
					
					deger[0]=basamak2[2]%10;
					deger[1]=basamak2[2]/10;
					basamak2[2]=deger[0]+deger[1];
				}
				
				basamak3[0]=(sayi3/1000)*2;
				basamak3[1]=(sayi3%1000)/100;
				basamak3[2]=((sayi3%100)/10)*2;
				basamak3[3]=sayi3%10;
				
				if(basamak3[0]>=10||basamak3[2]>=10)
				{
					deger[0]=basamak3[0]%10;
					deger[1]=basamak3[0]/10;
					basamak3[0]=deger[0]+deger[1];
					
					deger[0]=basamak3[2]%10;
					deger[1]=basamak3[2]/10;
					basamak3[2]=deger[0]+deger[1];
				}
				
				toplam=basamak[0]+basamak[1]+basamak[2]+basamak[3]+basamak1[0]+basamak1[1]+basamak1[2]+basamak1[3]
				+basamak2[0]+basamak2[1]+basamak2[2]+basamak2[3]+basamak3[0]+basamak3[1]+basamak3[2]+basamak3[3];
				
				if(toplam%10==0)
				{
					printf("%d %d %d %d-gecerli",sayi,sayi1,sayi2,sayi3);
					printf("\n");
				}
				else
				{
					printf("%d %d %d %d-gecersiz",sayi,sayi1,sayi2,sayi3);
					printf("\n");
				}
			}
		}
	}
	else
	{
		printf("dosya yok");
	}
	fclose(dosya);
}