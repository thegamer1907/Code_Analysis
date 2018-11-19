#include<bits/algorithmfwd.h>
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ii pair<int, int>
#define mp make_pair
#define nl '\n'

bool arr[100001][4];
int n, teams;
set<int>s;
vector<int>v;
int main()
{
    while(cin >> n >> teams)
    {
        int x;
        int mask;
        s.clear();
        for(int i = 0; i < n; i++)
        {
            mask = 0;
            for(int j = 0; j < teams; j++)
            {
                cin >> x;
                mask = mask | (x << j);
            }
            s.insert(mask);
        }

        v.clear();
        for(auto it = s.begin(); it != s.end(); it++)
            v.push_back(*it);
        bool valid = 0;
        for(int i = 0;!valid && i < v.size(); i++)
        {
            for(int j = 0;!valid && j < v.size(); j++)
            {
                if((v[i] & v[j]) == 0)
                {
                    valid = 1;
                }
            }
        }

        if(valid)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}
