#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fp(i,x,n) for(ll i=x;i<n;i++)
#define fn(i,x,n) for(ll i=x;i>=n;i--)
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    int n,k;
    cin >> n >> k;
    
    string s;
    
    cin >> s;
    
    while(k--)
    {
        fp(i,0,s.size()-1)
            {
                if(s[i] == 'B' && s[i+1] == 'G')
                {
                    swap(s[i],s[i+1]);
                    i++;
                }
            }
    }
    cout << s<< endl;
    
    return 0;
}