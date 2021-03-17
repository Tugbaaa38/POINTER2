#include <stdio.h>
#include <stdlib.h>

//POINTER(GOSTERICILER)

int main() {

//Dizi isimlerinin adres bilgisine donusturulmesi
//Simdi dizi ve bu dizilerin adresini tutacak pointerlari tanimlayalim..

int a[100]={1,2,3,4,5};
long l[20];
char c[100];
double d[10];

int *ap;                //Goruldugu gibi pointerlar adresini tutacagi diziler ile ayni turdeler,eger ayni tur olmasaydi, atama islemi yapilamazdi..
long *lp;
char *cp;
double *dp;

ap=a;                 // = ap=&a[0] 
lp=l;                 // = lp=&l[0] 
cp=c;                 // = cp=&c[0]
dp=d;                 // = dp=&d[0]

//Burada dizilerin 0.indexteki elemanlarin adreslerini pointerlara atadik.Peki diger indexlere nasil ulasacagiz?

printf("%d \n",*ap);    //dizinin 0.indexteki elemanini verecektir.     ---> 1
printf("%d\n",*(ap+1));  //  ---> 2
printf("%d\n",ap[1]);    // *(ap+1) = ap[1]
printf("%d\n",*(ap+2));
//Bu sekilde diger elemanlara da ulasabiliyoruz..



	return 0;
}