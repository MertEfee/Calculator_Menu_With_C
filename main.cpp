#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	
	int s1,s2,sayi,sonuc;
	
	back:
	system("cls");
			printf("\t\t\t------------------Hesap Makinasi------------------\n");
			printf("\t\t\t1-)Toplama\n");           printf("\t\t\t2-)Cikarma\n");
			printf("\t\t\t3-)Carpma\n");              printf("\t\t\t4-)Bolme\n");
			printf("\t\t\t5-)Github Link");          printf("\n\t\t\t0-)Exit\n");
			printf("\t\t\t---------------------------------------------------\n");
			printf("\n\t\t\tSeciminizi yapiniz = ");
			scanf("%d",&sayi);
		
		if(sayi==1)
		{
			system("Color 3");
			printf("\n\t\t\t1. Sayi: "); 
			scanf("%d",&s1);
			printf("\n\t\t\t2. Sayi: ");
			scanf("%d",&s2);
			printf("\n\t\t\tSonuc: %d ",s1+s2);
			Sleep(5000);
			goto back;
		}
		if(sayi==2)
		{
			system("Color 2");
			printf("\n\t\t\t1. Sayi: "); 
			scanf("%d",&s1);
			printf("\n\t\t\t2. Sayi: ");
			scanf("%d",&s2);
			printf("\n\t\t\tSonuc: %d ",s1-s2);
			Sleep(5000);
			goto back;
		}
		if(sayi==3)
		{
			system("Color 6");
			printf("\n\t\t\t1. Sayi: "); 
			scanf("%d",&s1);
			printf("\n\t\t\t2. Sayi: ");
			scanf("%d",&s2);
			printf("\n\t\t\tSonuc: %d ",s1*s2);
			Sleep(5000);
			goto back;
		}
		if(sayi==4)
		{
			system("Color 9");
			printf("\n\t\t\t1. Sayi: "); 
			scanf("%d",&s1);
			printf("\n\t\t\t2. Sayi: ");
			scanf("%d",&s2);
			printf("\n\t\t\tSonuc: %d ",s1/s2);
			Sleep(5000);
			goto back;
		}
		if(sayi==5)
		{
			system("Color A");
			printf("\n\t\t\thttps://github.com/MertEfee");
			Sleep(5000);
			goto back;
		}
			if(sayi==0)
		{
			system("color A4");
			Sleep(500);
			system("color B5");
			Sleep(500);
			system("color C2");
			Sleep(500);
			system("color A7");
			Sleep(500);
			system("Exit");
		}
		
	}
