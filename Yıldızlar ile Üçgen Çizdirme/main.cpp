#include <iostream>

using namespace std;

int main()
{
    int kenar,i,j;
    cout << "Lutfen ucgenin kenar uzunlugunu giriniz : " ;
    cin >> kenar;

    for (i=0; i<kenar; i++){
        for (j=0; j<kenar-i; j++){
            cout << "* ";
        }
        cout << "\n";
    }


    return 0;
}
