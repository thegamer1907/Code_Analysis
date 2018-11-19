#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pairr pair<int,int>

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s ;
    int k ;
    cin >>s>>k;
    int c1=0,c2=0;

    for(int i = 0 ; i < k ;i++)
    {
        string b ;
        cin >>b ;

        if(b[1]==s[0])
            c1++;

        if(b[0]==s[1])
            c2++;

            if(b==s)
            {
                c1++;c2++;
            }
    }

    if(c1>0&&c2>0)
        cout << "YES"<<endl;
    else
        cout << "NO"<<endl;
    return 0;
}
