#include <iostream>
using namespace std;
int main()
{
int r, c, a[100][100], b[100][100], sum[100][100], i, j;
  cout << "Masukan Jumlah Baris: ";
  cin >> r;
  cout << "Masukan Jumlah Kolom: ";
  cin >> c;
  cout << endl << "Masukan matriks pertama: " << endl;
  for(i = 0; i < r; ++i)
    for(j = 0; j < c; ++j)
    {
      cout << "Matriks a" << i + 1 << j + 1 << " : ";
      cin >> a[i][j];
      }
  cout << endl << "Masukan matriks kedua: " << endl;
  for(i = 0; i < r; ++i)
    for(j = 0; j < c; ++j)
    {
      cout << "Matriks b" << i + 1 << j + 1 << " : ";
      cin >> b[i][j];
      }
  
  for(i = 0; i < r; ++i)
    for(j = 0; j < c; ++j)
      sum[i][j] = a[i][j] + b[i][j];
  cout << endl << "Penjumlahan kedua matriks: " << endl;
  for(i = 0; i < r; ++i)
    for(j = 0; j < c; ++j)
    {
      cout << sum[i][j] << " ";
      if(j == c - 1)
        cout << endl;
      }

  
   for(i = 0; i < r; ++i)
    for(j = 0; j < c; ++j)
      sum[i][j] = a[i][j] - b[i][j];
  cout << endl << "Pengurangan kedua matriks: " << endl;
  for(i = 0; i < r; ++i)
    for(j = 0; j < c; ++j)
    {
      cout << sum[i][j] << " ";
      if(j == c - 1)
        cout << endl;
      }
  
  for(i = 0; i < r; ++i)
    for(j = 0; j < c; ++j)
      sum[i][j] = a[i][j] * b[i][j];
  cout << endl << "Perkalan kedua matriks: " << endl;
  for(i = 0; i < r; ++i)
    for(j = 0; j < c; ++j)
    {
      cout << sum[i][j] << " ";
      if(j == c - 1)
        cout << endl;
      }
  
  return 0;
  }