// iofilewithpath.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;
    string NamaFile;

    cout << "Masukkan Nama File : ";
    cin >> NamaFile;

    // membuka file dalam mode menulis
    ofstream outfile;
    // menunjuk ke sebuah nama file
    outfile.open(NamaFile + ",txt", ios::out);

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis
    while (true) {
        cout << "-";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop aka berhenti jika anda memasukkan karakter
        if (baris == "q") break;
        //menulis dan memasukkan nilai dari baris  kedalam file
        outfile << baris << endl;
    }

    //selesai dalam menulis sekarang tutup filenya
    outfile.close();

    //membuka file dalam mode membaca
    ifstream infile;

    //menunjuk ke sebuah file
    infile.open(NamaFile + ",txt , ios::in");
    //jika file ada maka
    if (infile.is_open())
    {
        //melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            //dan tampilkan di sini
            cout << baris << '\n';
        }
        //tutup file tersebut setelah selesai
        infile.close();
    }
    // jika tidak ditemukan file maka akan menampilkan ini
    else cout << "Unable to open file";
    return 0;
}


