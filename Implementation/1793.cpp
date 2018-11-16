#include <bits/stdc++.h>
#define st string
using namespace std;
int main(void)
{
    st s1,s2("0000000"),s3("1111111") ;
    bool dangerous=false ;
    cin >>s1 ;
    for (int i=0 ; i<s1.length() ; i++)
    {
        if (s1.substr(i,7)==s2 || s1.substr(i,7)==s3 )
            dangerous =true ;
    }
    dangerous==true ? cout << "YES" : cout << "NO" ;
}
