#include <bits/stdc++.h>


      using namespace std;
    //  #include<iostream>
    //  #include<vector>
    //  #include<queue>
                    #define pb push_back
                    #define ll long long
                    #define ld long double
                    #define mp make_pair
                    #define pi 3.14159265358979323846

int c[6]={},kol=0,k;
char ca[6]={};
string z[50];

map < string , bool > dq;
void rec(int x)
{
    if (x==0)
    {
        string qw;
        for (int j=1; j<=k; j++)
            if (j==1) qw=ca[j]; else qw=qw+" "+ca[j];

        if (dq[qw]==0)
            {
                 z[kol]=qw;
                 kol++;
            }
        dq[qw]=1;

    } else
    {
        for (int i=1; i<=k; i++)
            if (c[i]==0)
            {
                c[i]=1;
                ca[i]='1';
                rec(x-1);
                c[i]=0;
                ca[i]='0';
                rec(x-1);
           map < string , bool > d; }
    }
}


    const int inf=(1e9)+5;
    using namespace std;
    int main() {

      //  ios::sync_with_stdio(false);
       // cin.tie(nullptr);
//        cout.tie(nullptr);

int n,m,l,p;

map < string , bool > d;





scanf("%d %d\n",&n,&k);
rec(k);


for (int i=0; i<n; i++)
{
    int b[5];
    string s,q;
    getline(cin,q);
int err=0;

    for (int j=0; j<q.length(); j++)
       if (q[j]=='1')
       {
           err=1;
           break;
       }
       if (err==0)
       {
           cout<<"YES";
           return 0;
       }

    if (d[q]==1)
    {
        cout<<"YES";
        return 0;
    }
    for (int j=0; j<kol; j++)
    {
        int er=0;

        for (int l=0; l<z[j].length(); l++)
            if (z[j][l]=='1' && q[l]=='1')
        {
            er=1;
            break;
        }
        if (er==0)
        {
            d[z[j]]=1;

        }
    }


}
cout<<"NO";
}
