#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);
    string s1;
    int n;
    cin >> s1>>n;
    vector<string> v(n);
    string s2;
    for(int i =0;i<n;i++)
    {
        cin >> v[i];
    }
    for(int i =0;i<n;i++)
    {
        for(int h=0;h<n;h++)
        {
            string temp=v[i]+v[h];
            for(int k=0;k<3;k++)
            {
                if(temp.substr(k,2)==s1)
                {
                    cout << "YES"<< endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO"<< endl;
    return 0;
}
