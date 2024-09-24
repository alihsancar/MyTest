#include <iostream>

using namespace std;

float daire_alan(int r){
    return (3.14)*r*r;
}

int kare_alan(int kenar){
    return kenar*kenar;
}

int dikdortgen_alan(int en, int boy){
    return en*boy;
}

void alan_yazdir(float alan){
    cout << "Seklin alani : " << alan;
}


int main()
{
    char secim;
    cout << "Hangi seklin alanini hesaplamak istiyorsunuz?";
    cout << "(Daire: d, Dikdortgen: i, Kare: k): ";
    cin >> secim;

    switch(secim){

        case 'd':{
            int yaricap;
            cout << "Dairenin yaricapini giriniz : ";
            cin >> yaricap;
            float alan_d = daire_alan(yaricap);
            alan_yazdir(alan_d);
            break;
        }
        case 'i':{
            int en,boy;
            cout << "Dikdortgenin kenar uzunluklarini giriniz : ";
            cin >> en >> boy;
            int alan_dik = dikdortgen_alan(en,boy);
            alan_yazdir(alan_dik);
            break;
        }
        case 'k':{
            int kenar_uzunlugu;
            cout << "Karenin kenar uzunlugunu giriniz : ";
            cin >> kenar_uzunlugu;
            int alan_k = kare_alan(kenar_uzunlugu);
            alan_yazdir(alan_k);
            break;
        }
        default:
            cout << "Hatalý bir deger girdiniz.";
            break;

        }


    return 0;
}
