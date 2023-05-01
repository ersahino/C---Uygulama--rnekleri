#include <iostream>

using namespace std;

int main()

{


	for (int dondurbaba = 0; dondurbaba < 5; dondurbaba++)
	{
		for (int sayi = 0; sayi < 5; sayi++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout <<endl<<"------------------------------"<<endl;

	for (int dondurbaba = 0; dondurbaba <= 5; dondurbaba++)
	{
		for (int sayi = 0; sayi < dondurbaba; sayi++)
		{
			cout << "*";
		}
		cout << endl;
	}



	return 0;
}