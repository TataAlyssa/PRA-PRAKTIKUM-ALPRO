#include <iostream>
using namespace std;
// Tata Alyssa 
int tambah (int a, int b){
    int hasil = a+b;
    return hasil ;
} 

int kurang (int a, int b){
	int hasil = a-b;
	return hasil;
}

int bagi (int a, int b){
	int hasil = a/b;
	return hasil;
}

int kali (int a, int b){
	int hasil = a*b;
	return hasil;
}
// khulfani
int main(){
    int a,b,pilihan;
    x:
    cout << " Program Kalkulator Sederhana \n";
    cout << endl;
    cout << " Silahkan Masukkan angka pertama : ";
    cin >> a ;
    cout << " Silahkan Masukkan angka kedua : ";
    cin >> b ;
    cout << endl ;
    cout << " Menu Operasi: " << endl;
    cout << "1. Tambah \n2. Kurang \n3. Bagi \n4. Kali \n";
    cout << endl ;
    cout << " Masukkan pilihan anda : ";
    cin >> pilihan;
   
    return 0;
}