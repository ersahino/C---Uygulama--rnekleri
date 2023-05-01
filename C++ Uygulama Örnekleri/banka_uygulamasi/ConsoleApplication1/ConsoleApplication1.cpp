#include <iostream>
#include <locale.h>
#include <string>
#include <sstream>

using namespace std;


bool girisBilgileriCheck(string isim, int sifre) {
    if (isim == "Can" && sifre == 1234) {
        return true;
    }
    else {
        return false;
    }
}



int main() {
    setlocale(LC_ALL, "turkish");

    string isim;
    int sifre;


    cout << "Sisteme hoşgeldiniz." << endl;
    cout << "Lütfen isminizi giriniz:";
    cin >> isim;
    cout << "Lütfen şifrenizi giriniz:";
    cin >> sifre;

    bool kontrol = girisBilgileriCheck(isim, sifre);
    if (kontrol == true) {

        cout << "Giriş başarılı.";
    }
    else {

        cout << "Hatalı deneme.";
    }






    return 0;

}
