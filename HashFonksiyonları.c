#include<stdio.h>
#include<stdlib.h>

int dizi [100];

int Hash(int veri)

{
    
    int deger = veri;
    return veri%10; 
    
    //HashFonksiyonlar�nda her zaman mod alma i�lemi yap�l�r!.

    //HashFonksiyonlar覺nda mod alma i��lemi yap覺l覺r. Bu i��lem i癟in dizinin boyutu asal say覺 olmal覺d覺r.

}



int main()


{
    
    system("color B");
    
    int i;

    for (i = 0; i < 10; i++)

    {

        dizi[i] = -1; // Dizinin t羹m elemanlar覺 -1 olarak ayarlan覺r.
        
    }

    int veri;
    int yedek;

    veri = 0;
    yedek = 0;

    int index = 0;

    for (i = 0; i < 10; i++)

    {

        printf("\n Bir veri giriniz: ");
        scanf("%d", &veri);
        printf("\n");

        yedek = veri;

        do 

        {

            index = Hash(yedek);
            yedek = index*8;

        }

        while 

        (dizi[index] != -1);

        dizi[index] = veri;

        printf("%d nci sirada %d var ",index,veri);

        
    }

    return 0;

}
