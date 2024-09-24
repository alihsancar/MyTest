#include <iostream>

using namespace std;

int main()
{
    int kenar,i,j;
    cout << "Lutfen ucgenin kenar uzunlugunu giriniz : " ;
    cin >> kenar;

    for (i=1; i<kenar+1; i++){
        for (j=0; j<i; j++){
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}
