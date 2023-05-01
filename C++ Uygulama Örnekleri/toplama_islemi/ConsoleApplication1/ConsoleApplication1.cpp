#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");


	int a, b, c, toplam;



	cout << "Birinci sayıyı girin: ";
	cin >> a;
	cout << "İkinci sayıyı girin: ";
	cin >> b;
	cout << "Üçüncü sayıyı girin: ";
	cin >> c;

	toplam = a + b + c;

	cout << "Girdiğiniz sayıların toplamı: " << toplam << "\nAferin lan hanzoo";

	return 0;


}