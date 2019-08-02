#include<stdio.h>
#include<math.h>
void findroot(float xl,float xu,int it,float tval)
  {
    float xr,fxl,fxr,fxu,TPRE,PRE,temp,tempxl,tempxu;
    int i;
    printf("\ni\t   Xl   \t    Xu   \t   Xr   \t    PRE   \t   TPRE");
    for(i=1;i<=it;i++)
      {
         tempxl=xl;
         tempxu=xu;
         xr=(xl+xu)/2;
         fxl=sinf(10*xl)+cosf(3*xl);
         fxu=sinf(10*xu)+cosf(3*xu);
         fxr=sinf(10*xr)+cosf(3*xr);
         if((fxl*fxr)<0)
           xu=xr;
             else
               if((fxl*fxr)>0)
                 xl=xr;
                  TPRE=((tval-xr)/tval)*100;
                   PRE=((xr-temp)/xr)*100;
                   if(i==1)
                     printf("\n%d\t%f\t%f\t%f\t\t\t%f  \n",i,tempxl,tempxu,xr,TPRE);
                   else
                 printf("\n%d\t%f\t%f\t%f\t%f\t%f  \n",i,tempxl,tempxu,xr,PRE,TPRE);
                  temp=xr;
      }
  }
  int main()
  {
    float lrange,urange,trueval;
    int iter;
    printf(" \n Enter Lower and Upper range : ");
    scanf("%f%f",&lrange,&urange);
    printf("\n How many iterations : ");
    scanf("%d",&iter);
    printf("\n Enter true value : ");
    scanf("%f",&trueval);
    findroot(lrange,urange,iter,trueval);
    return 0;
  }







