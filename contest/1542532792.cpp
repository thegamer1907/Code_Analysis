#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s1 ;
    cin >> s1 ;
    int n ;
    cin >> n ;
    bool bool1(false) , bool2(false) ;
    string* arr = new string[n] ;
    for(int i(0) ; i<n ; ++i)
    {
        cin >> arr[i] ;
        if(arr[i]==s1)
        {
            cout << "YES" ;
            return 0 ;
        }
        if(arr[i][1]==s1[0])
            bool1=true ;
    }
    for(int i(0) ; i<n ; ++i)
    {
        if(arr[i][0]==s1[1])
        {
            bool2=true ;
            break ;
        }
    }
    if(bool1&&bool2)
        cout << "YES" ;
    else
        cout << "NO" ;
    return 0 ;
}
