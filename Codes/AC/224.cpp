#include<bits/stdc++.h>
 using namespace std;

 #define ll long long
 #define pb push_back
 #define fi first
 #define se second
 #define FILE "rooms"
 #define ull unsigned long long
 #define ld long double
 #define rev reverse
 #define pob pop_back()
 #define sz size()
 #define bb begin()
 #define ee end()



 int main()
 {
     ios_base::sync_with_stdio(false);cin.tie(0), cout.tie(0);
     /*freopen(FILE ".in", "r", stdin);
     freopen( "out.txt", "w", stdout);*/
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        if(i==0)
        {
            a[i]=k;
        }
        else
        {
            a[i]=k+a[i-1];
        }
    }
    cin>>m;
    int c[m];
    for(int i=0;i<m;i++)
    {
        cin>>c[i];
    }
    for(int i=0;i<m;i++)
    {
       int l=0,r=n-1;
       int mid=1;
       while(l<=r)
       {
           mid=(l+r)/2;
           if(a[mid]<c[i])
           {
               l=mid+1;
           }
           else
           {
               r=mid-1;
           }
       }
       cout << l+1 << endl;

    }
    return 0;

 }

