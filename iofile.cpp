#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main () {
    string baris;
    //membuka file dalam mode menulis.
     ofstream outfile;
    //menunjuk ke sebuah nama file.
     outfile.open ("contohfile.txt");

     cout << ">= Menulis file, \'q\' untuk keluar" << endl;
    //Unlimited loop untuk menulis
     while (true) {
        cout<< "-" ;
        //Mendapatkan setiap karakter dalam satu baris
        getline (cin, baris );
        //Loop akan berhenti jika anda memasukkan karakter q
        if (baris== "q") break;
        //Menulis dan memasukkan nila dari baris ke dalam file
        outfile << baris << endl; 
        //selesai dalam menulis sekarang tutup file nya 
     }
}