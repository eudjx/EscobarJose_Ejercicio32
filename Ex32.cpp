//Código ayuda tomado de  https://www.codewithc.com/c-program-for-solution-of-wave-equation/

#include<iostream>
#include "stdio.h"
#include<cmath>

const int X= 30;
const int T= 30;
float fun(int x)
{
    return 10E-4*sin(x*(2*M_PI));
    
}
int main()
{
    float u[X+1][T+1],square_of_c, ut, ue;
    int i,j;
    square_of_c=4.0;
    ut=0.1;
    ue=0.2;
    for(j=0;j<=T;j++)
    {
        u[0][j]=ut;
        u[X][j]=ue;
    }
    for(i=1;i<=X-1;i++)
    u[i][1]=u[i][0]=fun(i);
    for(j=1;j<=T-1;j++)
    for(i=1;i<=X-1;i++)
    u[i][j+1]=u[i-1][j]+u[i+1][j]-u[i][j-1];
    
    for(j=0;j<=T;j++)
    {
        for(i=0;i<=X;i++)
        printf("%6.1f",u[i][j]);
        printf("\n");
 
    }
    return 0;
 
}