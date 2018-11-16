//  HPouya :)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    string s;
    cin>>n>>m>>s;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(s[j]=='B'&&s[j+1]=='G')//             :)   VVE
            {swap(s[j],s[j+1]);j++;}
        }
    }
    cout<<s;

    return 0;
}
/*
    '0' ==> 48
    '9' ==> 57
    'A' ==> 65
    'Z' ==> 90
    'a' ==> 97
    'z' ==> 122
*/
