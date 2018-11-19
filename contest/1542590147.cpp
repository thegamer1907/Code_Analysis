#include<bits/stdc++.h>
#define ll long long 

using namespace std;

vector<int>adj[(int)1e6 + 10];
int main()
{
    std::ios::sync_with_stdio(0);cin.tie(0);
    
    string s, t;
    cin >> s;
    t = s[1] + s[0];
    int n;
    cin >> n;
    vector<string>a(n);
    bool one = false, two = false;
    for(int i = 0;i < n;i ++)
    {
        string check;
        cin >> check; 
        
        if(check == s or t == check)
        {
            cout << "YES\n";return 0;
        }
        
        if(check[1] == s[0])
        {
            one = true;
        }
        if(check[0] == s[1])
        {
            two = true;
        }
        if(one and two)
        {
            cout << "YES\n";return 0;
        }
    }
    cout << "NO\n";
}