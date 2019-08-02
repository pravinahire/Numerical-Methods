// newton raphson for f(x)=x^10-1 with base value

#include<stdio.h>
#include<math.h>
float power(float x,int y)
 {
   if(y==0)
     return 1;
   else
     return x*power(x,y-1);
 }
void print(float xi,int it)
  {
    float fxi,f1xi,xi1;
    int i;
    printf("\n i\t    Xi   \t   TPRE");
    for(i=0;i<it;i++)
     {
       fxi=(power(xi,10)-1);
       f1xi=10*(power(xi,9));
       if(i==0)
         xi1=xi;
       else
         xi1=xi-(fxi/f1xi);
        if(i==0)
          printf("\n %d\t%f\t100",i,xi1);
            else
             printf("\n %d\t%f\t",i,xi1);
              xi=xi1;
     }
    printf("\n");
  }

int main()
   {
     float X0;
     int iters;
     printf("\n Enter initial guess : ");
     scanf("%f",&X0);
     printf("\n How many iterations : ");
     scanf("%d",&iters);
     print(X0,iters);
     return 0;
   }
