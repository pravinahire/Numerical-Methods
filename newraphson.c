// newton raphson for f(x)=e^-x-x with true value 0.566893424 and base value
#include<stdio.h>
#include<math.h>

void print(float xi,int it,float t)
  {
    float fxi,f1xi,TPRE,xi1;
    int i;
    printf("\n i\t    Xi   \t   TPRE");
    for(i=0;i<it;i++)
     {
       f1xi=(-1)*(exp((-1)*xi))-1;
       fxi=exp((-1)*xi)-xi;
       if(i==0)
         xi1=xi;
         else
           xi1=xi-(fxi/f1xi);
             TPRE=((t-xi1)/t)*100;
               if(i==0)
                 printf("\n %d\t%f\t100",i,xi1);
                   else
                     printf("\n %d\t%f\t%f",i,xi1,TPRE);
                       xi=xi1;
     }
    printf("\n");
  }

int main()
   {
     float X0,tval;
     int iters;
     printf("\n Enter initial guess : ");
     scanf("%f",&X0);
     printf("\n Enter true value : ");
     scanf("%f",&tval); 
     printf("\n How many iterations : ");
     scanf("%d",&iters);
     print(X0,iters,tval);
     return 0;
   }
