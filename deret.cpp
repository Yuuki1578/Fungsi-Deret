#include <iostream>
#include "fungsideret.h"
using namespace std;

int main(){
  //deklarasi untuk input ke fungsi
  int n,ke_n,if_n;
  char input;

  cout << "Input operator(+,-,*,/): ";
  cin >> input;
  //masukkan operator(tambah,kurang,kali,bagi)
  cout << "Input n: ";
  cin >> n;
  //masukkan sebuah nilai awal/suku dari deret
  cout << "Input ke-n: ";
  cin >> ke_n;
  //masukkan penjumlah untuk nilai awal,ini akan diproses di fungsi
  cout << "Input maks-n: ";
  cin >> if_n;
  //masukkan jumlah maksimal berapa deret yang diinginkan (n-ke...)

  fungsi(input,n,ke_n,if_n);
  //eksekusi input oleh fungsi

  return 0;
}
