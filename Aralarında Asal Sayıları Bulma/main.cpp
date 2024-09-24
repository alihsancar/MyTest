#include <iostream>

using namespace std;

void asal(int sayi1, int sayi2, bool *cevap){

    int i;
    int kucuk_sayi = sayi1;
    if (sayi2 < kucuk_sayi)
        kucuk_sayi = sayi2;

    *cevap = true;

    for (i = 2; i <= kucuk_sayi; i++){
        if(sayi1 % i == 0 && sayi2 % i == 0 ){
            *cevap = false;
            break; // Ortak bölen bulunduğunda döngüden çık
        }
    }
}

int main()
{
    cout << "Lutfen aralarinda asalligini kontrol etmek istediginiz iki adet sayi giriniz : ";
    int sayi1, sayi2;
    bool cevap;
    cin >> sayi1 >> sayi2;
    asal(sayi1, sayi2, &cevap);

    cout << (cevap ? "Aralarinda asal" : "Aralarinda asal degil");

    return 0;
}
