#include<bits/stdc++.h>
using namespace std;
long long i,j,n1,n2,n3,p1,p2,p3,m1,m2,m3,r,rez,k,z,x;
string s;
int main()
{
    cin >> s;
    i=0;
    while (i<s.length())
    {
        if (s[i]==66)
        {
            m1++;
        }
        if (s[i]==83)
        {
            m2++;
        }
        if (s[i]==67)
        {
            m3++;
        }
        i=i+1;
    }
    cin >> n1 >> n2 >> n3;
    cin >> p1 >> p2 >> p3;
    cin >> r;
    if (m1>0&&m2>0&&m3>0)
    {
        k=min(n1/m1,min(n2/m2,n3/m3));
    }
    else
    {
        k=0;
    }
    //cout << k << "\n";
    rez+=k;
    n1=n1-k*m1;
    n2=n2-k*m2;
    n3=n3-k*m3;
    i=0;
    while (((n1>0&&m1!=0)or(n2>0&&m2!=0)or(n3>0&&m3!=0))and(r>=0))
    {
        //cout << n1 << " " << n2 << " " << n3 << "\n";
        if (n1<m1)
        {
            if (r>=(m1-n1)*p1)
            {
                r=r-(m1-n1)*p1;
                n1=0;
            }
            else
            {
                r=-1;
            }
        }
        else
        {
            n1=n1-m1;
        }
        if (n2<m2)
        {
            if (r>=(m2-n2)*p2)
            {
                r=r-(m2-n2)*p2;
                n2=0;
            }
            else
            {
                r=-1;
            }
        }
        else
        {
            n2=n2-m2;
        }
        if (n3<m3)
        {
            if (r>=(m3-n3)*p3)
            {
                r=r-(m3-n3)*p3;
                n3=0;
            }
            else
            {
                r=-1;
            }
        }
        else
        {
            n3=n3-m3;
        }
        i=i+1;
    }
    //cout << m1 << " " << m2 << " " << m3 << "\n";
    //cout << r << " " << i << "\n";
    rez=rez+i;
    if (r<0)
    {
        rez=rez-1;
    }
    if (r>0)
    {
        x=m1*p1+m2*p2+m3*p3;
        rez=rez+r/x;
        cout << rez;
    }
    else
    {
        cout << rez;
    }
    return(0);
}
