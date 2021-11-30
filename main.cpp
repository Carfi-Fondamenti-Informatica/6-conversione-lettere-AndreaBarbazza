#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  char a=a; 
  cin >> a; 
  
  if (conversione_caratteri(a)== false){
    cout << "errore" << endl;
  }else{
    cout << a << endl;
  }
  
  return 0;
}
