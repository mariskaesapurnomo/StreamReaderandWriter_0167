// ExceptionStandard.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <exception>
//untuk obyek exception yang akan digunakan 
#include <array>
//untuk onjek array yang akan kita gunakan 
using namespace std;

int main()
{
	cout << "Awal Program" << endl; //penanda 1:...
	try {
		array<int, 3> data = { 1, 2, 3 };
		//pesan array onteger 3 elemen 
		//cout << data.at(5) << endl;
		//memanggil array elemen ke 5 
	}

	catch (exception& e) {
		//penangkap menggunakan obyek exception
		cout << e.what() << endl;
		// akan di eksekusi  karena array data hanya memiliki 3 elemen /
	}
}
