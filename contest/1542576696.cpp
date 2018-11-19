#include<bits/stdc++.h>
#define pii pair<int, int>
#define endl '\n'
#define pb push_back
#define lli long long int

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    unordered_map<char, bool> l, r;
    char a, b, c, d;
    cin >> a >> b;
    int n;cin >> n;
    while(n--)
    {
        cin >> c >> d;
        l[c]=1;
        r[d]=1;
        if(a==c && b==d) cout<<"YeS"<<endl, exit(0);
    }
    cout << ( (r[a] && l[b]) ?  "yEs" :  "nO" )<<endl;
    return 0;
}
