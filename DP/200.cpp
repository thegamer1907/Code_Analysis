#include<bits/stdc++.h>

using namespace std ;

typedef long long ll ;

int main()
{
    int n,m,ans = 0 ;


    cin>>n ;

    int boys[n] ;
    for(int i=0 ; i<n ; i++)
        cin>>boys[i] ;

    cin>>m ;

    int girls[m] ;
    for(int i=0 ; i<m ; i++)
        cin>>girls[i] ;

    sort(boys,boys+n) ;
    sort(girls,girls+m) ;

    for( int i=0,j=0 ; i<n && j<m ; )
    {
        if( abs(boys[i]-girls[j])<=1)
        {
            ans++ ;
            i++ ;
            j++ ;
        }
        else if ( boys[i]>girls[j] )
        {
            j++ ;
        }
        else
            i++ ;
    }
    cout<<ans<<endl ;


    return 0 ;
}













