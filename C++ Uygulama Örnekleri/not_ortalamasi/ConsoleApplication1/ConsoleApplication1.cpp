#include <iostream>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Turkish");

	double a, b, c, ortalama;


	cout << "Hoşgeldiniz, notlarınızı giriniz..." << endl;

	cout << "İlk sınav notunuzu giriniz. ";
	cin >> a;
	cout << "İkinci sınav notunuzu giriniz. ";
	cin >> b;
	cout << "Üçüncü sınav notunuzu giriniz. ";
	cin >> c;

    ortalama=(a + b + c) / 3;

	if (ortalama >= 50)
	{
		cout << "Ortalamanız "<< ortalama << " bu dönem başarılısınız.";
	}
	else
	{
		cout << "Ortalamanız " << ortalama << " bu dönem başarılı değilsiniz.";

	}
	return 0;

}