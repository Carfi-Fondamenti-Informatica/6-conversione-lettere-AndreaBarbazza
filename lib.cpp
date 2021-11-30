#include "lib.h"
bool conversione_caratteri(char &a){
  
  bool t=true;
  
  if ((a>=65 && a<=90) || (a>=97 && a<=122)){
    t=true;
    if (a>=65 && a<=90){
      a=a+32;
      return a;
    }else{
      a=a-32;
      return a;
    }
  }else{
    t=false;
  }
  
  return t; 
}
