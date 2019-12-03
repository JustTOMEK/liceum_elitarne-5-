#ifndef MATMA_H_INCLUDED
#define MATMA_H_INCLUDED

#include <cmath>
double poletrojkatarownoboczego (int a)
{
    return (a*a*1.73205080757)/4;
}

float pole_trojkata_heron(float x, float d, float y)
{
float p=(x+d+y)/2;

return sqrt(p*(p-x)*(p-d)*(p-y));
}

int mnozenierosyjskichlopow(int a, int b)
{
int wynik = 0;
  while (b > 0) {
    if (b % 2 == 1)
      wynik += a;
    a *= 2;
    b /= 2;
  }
  return wynik;
}
int silnia (int a)
{   int silnia =1;
    for(int i=a;i>1;i--)
        silnia*=i;
    return silnia;
}

long int potega(long int a, int b)
{
int wynik = 1;
for (int i = 0; i<b; i++)
        wynik*=a;

    return wynik;
}
double wartoscbezwzgledna (int a)
{
    if (a>-0)
        return a;
    else
        return a*-1;
}
int czytrojkatprostokatny (int a, int b, int c)
{
    if (b>a&&b>c)
        if(b*b==a*a+c*c)
            return true;
        else
            return false;

    if (c>b&&c>a)
        if(c*c==b*b+a*a)
            return true;
        else
            return false;

    if (a>b&&a>c)
        if(a*a==b*b+c*c)
            return true;
        else
            return false;
}
int nwd(int a, int b)
{
    while(a!=b)
       if(a>b)
           a-=b;
       else
           b-=a;
    return a;
}

int nww (int a, int b)
{
    int x =a;
    int d =b;
    while(a!=b)
       if(a>b)
           a-=b;
       else
           b-=a;
    return (x*d)/b;
}

int czypierwsza(int a)
{
if(a<2)
return false;

for(int i=2;i*i<=a;i++)
if(a%i==0)
return false;
return true;
}

#endif // MATMA_H_INCLUDED
