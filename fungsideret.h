#include <iostream>
using namespace std;

int fungsi(char input,int n,int ke_n,int if_n){
  switch(input){
    case '+':
    for(int counter = 1;counter <= if_n;counter++){
        cout << (n += ke_n) << " | deret " << counter << endl;
      }
    break;

    case 'x':
    for(int counter = 1;counter <= if_n;counter++){
        cout << (n *= ke_n) << " | deret " << counter << endl;
      }
    break;

    case '-':
    for(int counter = 1;counter <= if_n;counter++){
        cout << (n -= ke_n) << " | deret " << counter << endl;
      }
    break;

    case '/':
    for(int counter = 1;counter <= if_n;counter++){
        cout << (n /= ke_n) << " | deret " << counter << endl;
      }
    break;
  }
  return if_n;
}
