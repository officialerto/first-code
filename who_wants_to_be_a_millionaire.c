#include <stdio.h>	//Kütüphanelerimizi ekledik.
#include <conio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>



int main (void){	//Ana fonksiyonumuzu oluşturduk.
char isim, soyisim;
char cevap;
int a,b,c,d,e,f,g,basla,devam;		//Değişkenlerimizi tanımladık.
{system("color 70");

printf("...Kim Milyoner Olmak Ister Yarismasina Hosgeldiniz...\n\n");	//Ekrana yazdırdık.
printf("Merhaba.Isminizi ve Soyisminizi Ogrenebilir Miyiz?:\n");
scanf("%s %s",&isim,&soyisim);

printf("Yarismamizin Kurallarini Biliyorsaniz Lutfen 5'e, Bilmiyorsaniz 6'ya Basiniz:");
scanf("%d",&cevap);
	
switch(cevap){
	
	case 5:
		printf("O Zaman Sorulara Gecelim..\n");
	break;
		
	case 6:
printf("Kurallari Tekrar Hatirlatalim..\n\n");
printf("\tKural 1:\n\n");
printf("1. Soru Odulu 500 TL\n2. Soru Odulu 2.500 TL\n3. Soru Odulu 5.000 TL\n4. Soru Odulu 10.000 TL\n5. Soru Odulu 50.000 TL\n\n");
printf("\tKural 2:\n\n");
printf("Cevaplamak Icin; \nA icin --> 1 \nB icin --> 2 \nC icin --> 3 \nD Icin --> 4'e Basiniz...\n\n");//Cevap a ise 1 e,b ise 2 ye,c ise 3 e,d ise de 4 e basmamız gerekiyor.		
printf("\tKural 3:\n\n");
printf("Sureniz Bitmeden Cevaplamak Zorundasiniz.\n\n");
printf("\tKural 4:\n\n");
printf("Baraj Sorusunu Gecerseniz, Elendiginiz Takdirde O Baraj Odulunu Alacaksiniz.\n");
printf("Baraj Sorulari:\n2.Soru\n4.Soru\n\n");
	break;
		
	default:
			printf("Yanlis Tusladiniz Lutfen Tekrar Deneyin..\n");
			printf("Yarismamizin Kurallarini Biliyorsaniz Lutfen 5'e, Bilmiyorsaniz 6'ya Basiniz:");
			scanf("%d",&cevap);
			
			switch(cevap){
	
	case 5:
			printf("O Zaman Sorulara Gecelim..");
	break;
		
	case 6:
printf("Kurallari Tekrar Hatirlatalim..\n\n");
printf("\tKural 1:\n\n");
printf("1. Soru Odulu 500 TL\n2. Soru Odulu 2.500 TL\n3. Soru Odulu 5.000 TL\n4. Soru Odulu 10.000 TL\n5. Soru Odulu 50.000 TL\n\n");
printf("\tKural 2:\n\n");
printf("Cevaplamak Icin; \nA icin --> 1 \nB icin --> 2 \nC icin --> 3 \nD Icin --> 4'e Basiniz...\n\n");//Cevap a ise 1 e,b ise 2 ye,c ise 3 e,d ise de 4 e basmamız gerekiyor.		
printf("\tKural 3:\n\n");
printf("Sureniz Bitmeden Cevaplamak Zorundasiniz.\n\n");
printf("\tKural 4:\n\n");
printf("Baraj Sorusunu Gecerseniz, Elendiginiz Takdirde O Baraj Odulunu Alacaksiniz.\n");
printf("Baraj Sorulari:\n2.Soru\n4.Soru\n\n");
	break;
		
	default:
			printf("Yanlis Tusladiniz Lutfen Tekrar Deneyin..\n");
			printf("Yarismamizin Kurallarini Biliyorsaniz Lutfen 5'e, Bilmiyorsaniz 6'ya Basiniz:");
			scanf("%d",&cevap);
	}
switch(cevap){
	
	case 5:
			printf("O Zaman Sorulara Gecelim..");
	break;
		
	case 6:
printf("Kurallari Tekrar Hatirlatalim..\n\n");
printf("Kural 1:\n\n");
printf("1. Soru Odulu 500 TL\n2. Soru Odulu 2.500 TL\n3. Soru Odulu 5.000 TL\n4. Soru Odulu 10.000 TL\n5. Soru Odulu 50.000 TL\n\n");
printf("Kural 2:\n\n");
printf("Cevaplamak Icin; \nA icin --> 1 \nB icin --> 2 \nC icin --> 3 \nD Icin --> 4'e Basiniz...\n\n");//Cevap a ise 1 e,b ise 2 ye,c ise 3 e,d ise de 4 e basmamız gerekiyor.		
printf("Kural 3:\n\n");
printf("Sureniz Bitmeden Cevaplamak Zorundasiniz.\n\n");
printf("Kural 4:\n\n");
printf("Baraj Sorusunu Gecerseniz, Elendiginiz Takdirde O Baraj Odulunu Alacaksiniz.\n");
printf("Baraj Sorulari:\n2.Soru\n4.Soru\n\n");
		break;
		
		default:
			printf("Yanlis Tusladiniz, OYUN BITTI\n");
	
		}		
}

	printf("Baslamak Icin Hazirsaniz 1'e Basin:");
	scanf("%d",&basla); 	//Dışarıdan sayımızı gireceğiz.
	printf("\n");	

if(basla==1)
{		//İf else kodlarını kullanmamız gerekiyor.
	
	
	printf("\t\tSoru 1\n");
	printf("\t-----------------------\n");
	printf("\tAtaturk Kac Yilinda Dogdu?\n\tA)1900\n\tB)1881\n\tC)1889\n\tD)1789\n");		//İlk sorumuz.
	printf("\tCevabiniz:");
	scanf("%d",&a);

if(a==2)
{
	printf("\n\n\t\t...Tebrikler Dogru Cevap...\n\t\t...500 TL kazandiniz...\n\n");
	printf("2.Soruya Gecmek Icin Lutfen 1'e ,Cekilmek Icin 2'ye Basin:");

	}
	else {
	
		printf("\t\t...Yanlis Cevap, Elendiniz...\n");		//Cevabınız yanlış ise eleniyorsunuz.
		printf("\t\t...Katildiginiz Icin Tesekkur Ederiz...");
		getch();
		return 0;
	}

	scanf("%d",&devam);
	printf("\n");		//Devam etmek için 1 e basmanız gerekiyor.
	
if(devam==1)
{
	printf("\t\tSoru 2\n");
	printf("\t-----------------------\n");
	printf("\tTurkiyenin Baskenti Neresidir?\n\tA)Istanbul\n\tB)Samsun\n\tC)Konya\n\tD)Ankara\n");
	printf("\tCevabiniz:");	//2. sorumuz.
	scanf("%d",&d);
		if(d==4)
	{
			printf("\n\n\t\t...Tebrikler Dogru Cevap...\n\t\t...Ilk Baraj Sorusunu Gectiniz...\n\t\t...2500 TL Kazandiniz...\n\n");
			printf("3.Soruya Gecmek Icin Lutfen 1'e ,Cekilmek Icin 2'ye Basin:");

	}
		else{

			printf("\t\t...Yanlis Cevap, Elendiniz...\n");		//Cevabınız yanlış ise eleniyorsunuz.
			printf("\t\t...Katildiginiz Icin Tesekkur Ederiz...\n");
			getch();
			return 0;
	}
}
else if(devam==2){
	printf("Cekildiniz\nIyi Gunlerde Kullanin");	
	getch();
	return 0;
}

else {
	
	printf("Cikis Yaptiniz\n");
	printf("Iyi Gunler");
	getch();
	return 0;
	
}

	scanf("%d",&devam);
	printf("\n");		//Devam etmek için 1 e basmanız gerekiyor.
	
if(devam==1)
{
	printf("\t\tSoru 3\n");
	printf("\t-----------------------\n");
	printf("\tHangi Yabanci Futbolcu Fenerbahce Formasi Giymistir?\n\tA)Atiba\n\tB)Prekazi\n\tC)Simovic\n\tD)Schumacher\n");
	printf("\tCevabiniz:");	//3. sorumuz.
	scanf("%d",&d);
if(d==4)
{
	printf("\n\n\t\t...Tebrikler Dogru Cevap...\n\t\t...5000 TL Kazandiniz...\n\n");
	printf("4.Soruya Gecmek Icin Lutfen 1'e ,Cekilmek Icin 2'ye Basin:");

	}
	else{
	
		printf("\t\t...Yanlis Cevap\n\t\t...Sizi 25000 TL Ile Ugurluyoruz...\n");		//Cevabınız yanlış ise eleniyorsunuz.	
		printf("\t\t...Katildiginiz Icin Tesekkur Ederiz...\n");
		getch();
		return 0;
	}
}

else if(devam==2){
	printf("Cekildiniz\nIyi Gunlerde Kullanin");	
	getch();
	return 0;
}

else {
	
	printf("Cikis Yaptiniz\n");
	printf("Iyi Gunler");
	getch();
	return 0;
	
}
	scanf("%d",&devam);
	printf("\n");		//Devam etmek için 1 e basmanız gerekiyor.
	
if(devam==1)
{
	printf("\t\tSoru 4\n");
	printf("\t-----------------------\n");
	printf("\tHangisi Periyodik Tabloda Bulunan Bir Element Degildir?\n\tA)Su\n\tB)Azot\n\tC)Karbon\n\tD)Gumus\n");
	printf("\tCevabiniz:");	//4.sorumuz.
	scanf("%d",&a);
if(a==1)
{
	printf("\n\n\t\t...Tebrikler Dogru Cevap...\n\t\t...Ikinci Baraj Sorusunu Gectiniz...\n\t\t...10.000 TL Kazandiniz...\n\n");
	printf("5.Soruya Gecmek Icin Lutfen 1'e ,Cekilmek Icin 2'ye Basin:");
	
	}
	else{
	
		printf("\t\t...Yanlis Cevap...\n\t\t...Sizi 2500 TL Ile Ugurluyoruz...\n");		//Cevabınız yanlış ise eleniyorsunuz.
		printf("\t\t...Katildiginiz Icin Tesekkur Ederiz...\n");
		getch();
		return 0;
	}
}

else if(devam==2){
	printf("Cekildiniz\nIyi Gunlerde Kullanin");	
	getch();
	return 0;
}

else {
	
	printf("Cikis Yaptiniz\n");
	printf("Iyi Gunler");
	getch();
	return 0;
	
}

	scanf("%d",&devam);
	printf("\n");		//Devam etmek için 1 e basmanız gerekiyor.
	
if(devam==1)
  {
	printf("\t\tSoru 5\n");
	printf("\t-----------------------\n");
	printf("\tHangisi Bir Bitki Hucresinde Bulunmayan Organeldir?\n\tA)Mitokondri\n\tB)DNA\n\tC)Lizozom\n\tD)Kloroplast\n");
	printf("\tCevabiniz:");	//5.sorumuz.
	scanf("%d",&c);

if(c==3)
{
	printf("\n\n\t\t...Tebrikler Dogru Cevap...\n\t\t...50.000 TL Kazandiniz...\n");
	printf("\t\t...Yarisma Bitti...\n");
	printf("\t\t...Katildiginiz Icin Tesekkur Ederiz...");
	
	}
	else{
	
		printf("\n\n\t\t...Yanlis Cevap....\n\t\t...Sizi 10.000 TL Ile Ugurluyoruz...\n");
		printf("\t\t...Katildiginiz Icin Tesekkur Ederiz...");
		getch();
		return(0);
	}
}

else if(devam==2){
	printf("Cekildiniz\nIyi Gunlerde Kullanin");	
	getch();
	return 0;
}

else{
	
	printf("...Elendiniz...");
	printf("...Katildiginiz Icin Tesekkur Ederiz...");
	}
}
else
	printf("Cikis Yaptiniz\n");
	printf("Iyi Gunler");
	getch();
	return(0);
    
	system("pause");}
}