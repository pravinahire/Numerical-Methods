// program of secant method for f(x)=e^-x-x with true value 0.56714329 and base value
#include<stdio.h>
#include<math.h>

void print(float xi,float xi_1,int it,float t)
  {
    float fxi,fxi_1,f1xi,TPRE,xi1;
    int i;
    printf("\n i\t    Xi   \t   TPRE");
    for(i=0;i<it;i++)
     {
       fxi=exp((-1)*xi)-xi;
       fxi_1=exp((-1)*xi_1)-xi_1;
       f1xi=(fxi-fxi_1)/(xi-xi_1);
       if(i==0)
         xi1=xi;
         else
           xi1=xi-(fxi/f1xi);
             TPRE=((t-xi1)/t)*100;
               if(i==0)
                 printf("\n %d\t%f\t100",i,xi1);
                   else
                     printf("\n %d\t%f\t%f",i,xi1,TPRE);
                        if(i>0)
                          xi_1=xi;
                          xi=xi1;

     }
    printf("\n");
  }

int main()
   {
     float X_1,tval,X0;
     int iters;
     printf("\n Enter first initial estimate : ");
     scanf("%f",&X_1);
     printf("\n Enter second  initial estimate : ");
     scanf("%f",&X0);
     printf("\n Enter true value : ");
     scanf("%f",&tval); 
     printf("\n How many iterations : ");
     scanf("%d",&iters);
     print(X0,X_1,iters,tval);
     return 0;
   }
