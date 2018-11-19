#include <iostream>

using namespace std;

int main()
{
    string s , s1 , s2 = "" ;
    cin>>s;
    int n ;
    cin>>n ;
    bool t = false , t1 = false , t2 = false , t3 = false , t4 = false ;

    for(int i = 0 ; i < n ; ++i)
    {
        cin>>s1 ;
        if(s1 == s)
            t = true ;
        if(s1[1] == s[0])
            t1 = true ;
        if(s1[0] == s[1])
            t2 = true ;
    }
    if(t  || (t1 && t2 ))
        cout<<"YES";
else
    cout<<"NO";
    return 0 ;
}
