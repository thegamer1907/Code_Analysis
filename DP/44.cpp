#include<bits/stdc++.h>

using namespace std ;

int main()
{

    map<int,int>mp ;
    int nob , nog , p = 0 ;

    cin >> nob ;
    int a[nob] ;
    for(int i=0 ; i<nob ; i++)cin >> a[i] ;

    cin >> nog ;
    for(int i=0 ; i<nog ; i++)
    {
        int u ;
        cin >> u ;
        mp[u]++ ;
    }

    sort(a,a+nob) ;

    for(int i=0 ; i<nob ; i++)
    {
        if(mp[a[i]-1]>0)
        {
            p++ ;
            mp[a[i]-1]-- ;
        }
        else if(mp[a[i]]>0)
        {
            p++ ;
            mp[a[i]]-- ;
        }
        else if(mp[a[i]+1]>0)
        {
            p++ ;
            mp[a[i]+1]-- ;
        }
    }

    cout << p << endl ;

}
