// In the name of god
// All you need is love. << John Lennon >>
// A.H.Ghaznavi
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef const int ci;
typedef const ll cll;
int n;
string pass,s[110];
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>pass>>n;
    for (int i=0;i<n;i++)
        cin>>s[i];
    for (int i=0;i<n;i++)
    {
        for (int i2=0;i2<n;i2++)
        {
            if (s[i]==pass || (s[i][1]==pass[0] && s[i2][0]==pass[1]))
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
