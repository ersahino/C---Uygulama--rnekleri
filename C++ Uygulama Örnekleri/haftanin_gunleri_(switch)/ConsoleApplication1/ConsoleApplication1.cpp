#include <iostream>

using namespace std;

int main()


{
	setlocale(LC_ALL, "Turkish");

	int day;

	cout << "Hoşgeldiniz. Aklınızdan tuttuğunuz günü tahmin edeceğim.\n";
	cout << "Haftanın kaçıncı günü? ";
	cin >> day;

	


		switch (day)
		{
		case 1:
			cout << "Tuttuğunuz Gün: Pazartesi";
			break;
		case 2:
			cout << "Tuttuğunuz Gün: Salı";
			break;
		case 3:
			cout << "Tuttuğunuz Gün: Çarşamba";
			break;
		case 4:
			cout << "Tuttuğunuz Gün: Perşembe";
			break;
		case 5:
			cout << "Tuttuğunuz Gün: Cuma";
			break;
		case 6:
			cout << "Tuttuğunuz Gün: Cumartesi";
			break;
		case 7:
			cout << "Tuttuğunuz Gün: Pazar";
			break;

		default:
			cout << "Lütfen Geçerli Bir Sayı Giriniz...";
		}

	




	return 0;


}