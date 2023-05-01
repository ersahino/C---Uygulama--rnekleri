#include <iostream>
#include <string>

using namespace std;

int main() {

	//sat:satır
	//sut:sutun
	// 4 satır ve 3 sutundan olusan bir dizi ornegi;

	int dizi[4][3] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

	for (int sat = 0; sat < 4; sat++)
	{
		for (int sut = 0; sut < 3; sut++)
		{
			cout << dizi[sat][sut] << "\t";
		}

		cout << endl;
	}








	return 0;
}


