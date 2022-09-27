#include <iostream>
using namespace std;
#define phi 3,14;
int main()
{
  double jari_jari, tinggi, luas, volume;
  cout << "masukan jari_jari = ";
  cin >> jari_jari;

  cout << "masukan tingginya = ";
  cin >> tinggi;

  luas = jari_jari*jari_jari*phi;
  volume = jari_jari*jari_jari*tinggi*phi;

  cout << "luas tabung adalah = " << luas << endl;
  cout << "volume tabung adalah = " << volume << endl;
  return 0;
  
}