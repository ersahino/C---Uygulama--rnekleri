#include <iostream>
#include <locale.h>
#include <string>
#include <sstream>


using namespace std;

int main() {

	setlocale(LC_ALL, "turkish");

	while (true) {

		char a;
		double b, c;

		cout << "lütfen yapmak istediğiniz işlemi belirtin. + - * /" << endl;
		cin >> a;

		switch (a) {

		case '+':
			cout << "lütfen bir sayı giriniz." << endl;
			cin >> b;
			cout << "toplanacak sayıyı giriniz." << endl;
			cin >> c;
			cout << "girdiğiniz sayıların toplamı: " << b + c << endl;
			break;

		case '-':
			cout << "lütfen bir sayı giriniz." << endl;
			cin >> b;
			cout << "çıkarılacak sayıyı giriniz." << endl;
			cin >> c;
			cout << "girdiğiniz işlemin sonucu:" << b - c << endl;
			break;

		case '/':
			cout << "lütfen bir sayı giriniz." << endl;
			cin >> b;
			cout << "bölmek istediginiz sayıyı giriniz." << endl;
			cin >> c;
			cout << "girdiğiniz işlemin sonucu:" << b / c << endl;
			break;

		case '*':
			cout << "lütfen bir sayı giriniz." << endl;
			cin >> b;
			cout << "çarpmak istediğiniz sayıyı giriniz." << endl;
			cin >> c;
			cout << "girdiğiniz işlemin sonucu:" << b * c << endl;
			break;

		default:
			cout << "hacı ne dion ya";

		}









	}





	return 0;



}
