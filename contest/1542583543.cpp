#include<bits/stdc++.h>
using namespace std;

int isbetweenclock(int a, int b, double v)
{
    if(b > a)
    {
        if(v >= a && v <= b)
        {
            return(1);
        }
    }
    else
    {
        if(v >= a)
        {
            return(1);
        }
    }
    return(0);
}

int isbetween(int a, int b, double v)
{
    if(b < a)
    {
        if(v >= b && v <= a)
        {
            return(1);
        }
    }
    else
    {
        if(v >= b)
        {
            return(1);
        }
    }
    return(0);
}

int main()
{
    int h,m,s,t1,t2;
    double hr, mi, sec;
    cin>>h>>m>>s>>t1>>t2;
    int temp1 = t1;
    h = h % 12;
    t1 = t1 % 12;
    t2 = t2 % 12;
    if(s % 5 == 0)
    {
        sec = s/5;
    }
    else
    {
        sec = s/5 + 0.5;
    }
    if(m % 5 == 0 && s == 0)
    {
        mi = m/5;
    }
    else
    {
        mi = m/5 + 0.5;
    }
    if(m == 0 && s == 0)
    {
        hr = h;
    }
    else
    {
        hr = h + 0.5;
    }
    int flag1 = 1, flag2 = 1;
    while(t1 != t2)
    {
        if(isbetweenclock(t1,(t1+1)%12,hr) || isbetweenclock(t1,(t1+1)%12,mi) || isbetweenclock(t1,(t1+1)%12,sec))
        {
            flag1 = 0;
            break;
        }
        t1 = (t1+1)%12;
    }
    t1 = temp1;
    while(t1 != t2)
    {
        if(isbetween(t1,(t1-1+12)%12,hr) || isbetween(t1,(t1-1+12)%12,mi) || isbetween(t1,(t1-1+12)%12,sec))
        {
            flag2 = 0;
            break;
        }
        t1 = (t1-1+12)%12;
    }
    if(flag1 || flag2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return(0);
}
