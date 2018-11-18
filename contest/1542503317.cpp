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



    const int inf=(1e9)+5;
    using namespace std;
    int main() {

      //  ios::sync_with_stdio(false);
       // cin.tie(nullptr);
//        cout.tie(nullptr);

int h,m,k,l,p;
cin>>h>>m>>k>>l>>p;
if (m==0) m=60;
if (k==0) k=60;
h*=5;

p*=5;
l*=5;
int err=0;

for (int i=l; i<=60; i++)
{

     if (i==h  && i!=p) err=1;
    if ( i==m || i==k)
    if (i!=p) err=1;
    if (err==1) break;
    if (i==p)
    {

        cout<<"YES";
        return 0;
    }
}

for (int i=1; i<=p; i++)
{

    if (i==h  && i!=p) err=1;
    if ( i==m || i==k)
    if (i!=p) err=1;
    if (err==1) break;
    if (i==p)
    {

        cout<<"YES";
        return 0;
    }
}


err=0;

for (int i=l-1; i>=1; i--)
{

    if (i==h  ) err=1;
    if (i==m || i==k) err=1;
    if (err==1) break;
    if (i==p)
    {

        cout<<"YES";
        return 0;
    }

}

for (int i=60; i>=p; i--)
{
   if (i==h) err=1;
    if ( i==m || i==k) err=1;
    if (err==1) break;
    if (i==p)
    {

        cout<<"YES";
        return 0;
    }
}


err=0;
if (l>p)
for (int i=l-1; i>=p; i--)
{

   if (i==h) err=1;
    if ( i==m || i==k) err=1;

    if (err==1) break;
    if (i==p)
    {

        cout<<"YES";
        return 0;
    }
}
err=0;
if (l<p)

for (int i=p-1; i>=l; i--)
{

   if (i==h && i!=l ) err=1;
    if ( i==m || i==k) err=1;
    if (i==m || i==h || i==k) err=1;
    if (err==1) break;

    if (i==l)
    {

        cout<<"YES";
        return 0;
    }
}
cout<<"NO";
}
