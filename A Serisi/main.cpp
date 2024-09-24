#include <iostream>

using namespace std;

int a_serisi(int n);

int main()
{
    int number;
    cout << "Lutfen bir adet sayi giriniz : ";
    cin >> number;
    cout << "Sayinin a serisi : " << a_serisi(number);
    return 0;
}

int a_serisi(int n){

if(n==0)
    return 2;
if(n==1)
    return 3;

if(n<0)
    return -1;
else
    return a_serisi(n-1) * a_serisi(n-2);



}
