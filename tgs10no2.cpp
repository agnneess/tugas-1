#include <iostream>
using namespace std;
void tambah(int* c, int* d);
int main (){
  int a, b;
  a = 4;
  b = 6;
  cout << "Nilai sebelum pemanggilan fungsi : ";
  cout << "\na = " << a << " b = "<< b;
}
void tambah(int* c, int* d){
  *c += 7;
  *d += 5;
  cout << endl;
  cout << "\n\n Nilai di Akhir Fungsi Tambah()";
  cout << "\nc = "<< *c <<" d = "<<*d;
}
