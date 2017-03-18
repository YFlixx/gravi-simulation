#include "ode.h"

void ode::euler(float y[],int n,float dt, float derivative(int,int,float*)){
   int i;
   for (i=0;i<n;i++){
        y[i] += dt*derivative(i,n,y);
   }		
}
