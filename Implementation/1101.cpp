#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long l,n,i,j;
    string s;
    cin >> l >> n >> s;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<l;j++)
        {
            if(s[j]=='G' && s[j-1]=='B')
            {
                s[j] = 'B';
                s[j-1] = 'G';
                j++;
            }
        }
    }
    cout << s << endl;
    return 0;
}