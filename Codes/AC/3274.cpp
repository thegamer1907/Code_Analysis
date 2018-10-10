#include<bits/stdc++.h>
using namespace std;

int a[100005];

int main()
{

#ifdef local
    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
#endif

    int n, mn = INT_MAX;

    cin>>n;

    for(int i = 0; i<n; i++){
         cin>>a[i];
         mn = min(mn, a[i]);
    }

    for(int i = 0; i<n; i++) a[i] -= mn;

    int pos=mn%n;
    int p = 0;
    while(a[pos]>p)
    {
        pos = (pos+1)%n;
        p++;
    }

    cout<<pos+1<<endl;

#ifdef local
    cerr<<"\n\n__time elapsed = "<<(double)clock()*1000/CLOCKS_PER_SEC<<" ms__"<<endl;
#endif

}


