#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<s.size()-1;)
        {
            if(s[j]=='B')
            {
                if(s[j+1]=='G')
                {
                    s[j+1]='B';
                    s[j]='G';
                    j+=2;
                }
                else
                {
                    j++;
                }
            }
            else
            j++;
        }
    }
    cout<<s;
}
