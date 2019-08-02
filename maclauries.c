

#include<stdio.h>

float power(float x,int y)
  {
    if(y==0)
      return 1;
    else
      return x*power(x,y-1);
  }

float fact(float x)
  {
    if(x==0)
      return 1;
    else
      return x*fact(x-1);
  }

float sum(float x, int terms )
  {
    float s=0;
    int i;
    for(i=0;i<terms;i++)
      s=s+(power(x,i)/fact(i));
     return s;
  }

void printerror(float x,float tval,int iter)
  {
    int i;
    float PRE,TPE;
    printf("\niteration result TPE  PRE\n");
    for(i=0;i<iter;i++)
      {
        TPE=((tval-sum(x,i+1))/tval)*100;
        PRE=((sum(x,i+1)-sum(x,i))/(sum(x,i+1)))*100;
        if(i==0)
          printf("%d  %f  %f   \n",i+1,sum(x,i+1),TPE);
        else
        printf("%d  %f  %f  %f \n",i+1,sum(x,i+1),TPE,PRE);

      }
  }


int main()
  {
    float x,trueval;
    int iterations;
    printf("\n Enter value of x : ");
    scanf("%f",&x);
    printf("\n Enter true value : ");
    scanf("%f",&trueval);
    printf("\n How many iterations : ");
    scanf("%d",&iterations);
    printerror(x,trueval,iterations);
    return 0;
  }
