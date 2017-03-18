#include <iostream>
#include "ode.h"

float deriv(int i, int n, float y[]){
   return y[i];
}

int main(){
   int i,n;
   float y[10];
   n = 10;
   for(i=0;i<n;i++){
      y[i] = i;
   }    
   ode::euler(y,n,0.1,deriv);
   for(i=0;i<n;i++){
   std::cout << i << " y " << y[i] << std::endl; 
   }
}

