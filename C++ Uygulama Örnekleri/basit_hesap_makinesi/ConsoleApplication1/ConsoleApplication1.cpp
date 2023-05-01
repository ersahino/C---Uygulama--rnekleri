#include <iostream>
using namespace std;
int main()

{

	setlocale(LC_ALL, "Turkish");
	int x, y, toplam;

	cout << "Bir sayı giriniz: ";
	cin >> x;
	cout << "Bir sayı daha giriniz: ";
	cin >> y;

	toplam = x + y;

	cout << "Girdiğiniz sayıların toplamı: " << toplam;

	return 0;
}