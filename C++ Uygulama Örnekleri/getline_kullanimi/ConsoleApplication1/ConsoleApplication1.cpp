#include <iostream>
#include <string>
using namespace std;

int main()

{
	setlocale(LC_ALL, "Turkish");
	string fullName;
	cout << "Hoşgeldiniz. \nTam Adınızı Girin: ";
	getline(cin, fullName);
	cout << "Tam adınız: " << fullName << "\nSisteme Yönlendiriliyorsunuz...";
	//Turkce Karakter Cıktısı alırken sıkıntı yasadım. İlerisi icin not. Suan arastırsam da bulamadım.
	return 0;
}