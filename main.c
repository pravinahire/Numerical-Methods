//Muller's method with 3 initial guesses for function f(x)=x^3-13x-12
#include<stdio.h>
#include<math.h>
void print(float x0,float x1,float x2,int it)
 {
     float fx0,fx1,fx2,d0,d1,h0,h1,a,b,c,x3,PRE;
      int i;
     printf("\ni\t    Xr\t     \t PRE");
     for(i=0;i<it;i++)
      {
        h0=x1-x0;
        h1=x2-x1;
        fx0=(x0*x0*x0)-(13*x0)-12;
        fx1=(x1*x1*x1)-(13*x1)-12;
        fx2=(x2*x2*x2)-(13*x2)-12;
        d0=(fx1-fx0)/(x1-x0);
        d1=(fx2-fx1)/(x2-x1);
        a=(d1-d0)/(h0+h1);
        b=(a*h1)+d1;
        c=fx2;
        if(fabs((b+sqrt((b*b)-(4*a*c))))>fabs((b-sqrt((b*b)-(4*a*c)))))
            x3=x2+(((-2)*c)/(b+(sqrt((b*b)-(4*a*c)))));
              else
                x3=x2+(((-2)*c)/(b-(sqrt((b*b)-(4*a*c)))));
                PRE=((x3-x2)/x3)*100;
                if(PRE<0)
                  PRE=(-1)*PRE;
                 if(i==0)
                    printf("\n%d\t%f",i,x2);
                      else
                        {
                          printf("\n%d\t%f\t%f",i,x3,PRE);
                          x0=x1;
                          x1=x2;
                          x2=x3;

                        }

                 }


 }


int main()
{
    float X0,X1,X2;
    int iters;
    printf("\n Enter initial guess X0 : ");
    scanf("%f",&X0);
    printf("\n Enter initial guess X1 : ");
    scanf("%f",&X1);
    printf("\n Enter initial guess X2 : ");
    scanf("%f",&X2);
    printf("\n How many iterations : ");
    scanf("%d",&iters);
    print(X0,X1,X2,iters);
    return 0;
}
