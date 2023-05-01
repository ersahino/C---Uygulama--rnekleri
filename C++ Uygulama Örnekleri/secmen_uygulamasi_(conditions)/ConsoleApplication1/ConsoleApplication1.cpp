#include <iostream>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Turkish");
	int yasim;
	string isim;

	cout << "Adınızı Giriniz: ";
	cin >> isim;
	cout << "Hoşgeldin " << isim;
	cout << "\nYaşınızı Giriniz: ";
	cin >> yasim;
	cout << "Yaşınız: " << yasim << "\n";


	int oyVermeYasi = 18;


	if (oyVermeYasi < yasim)
	{

		cout << "Oy vermek için uygunsunuz!";

	}

	else if (oyVermeYasi > yasim)

	{
		cout << "Oy vermek için uygun değilsiniz...";

	}

	else {
		cout << "Bu sene ilk defa oy kullanabileceksiniz!";

	}
	return 0;
}

