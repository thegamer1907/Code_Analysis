#include <iostream>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <queue>
#include <utility>
#include <string.h>
#include <map>
#include <stack>
#define ll long long
#define pb push_back 
#define mp make_pair
#define ff first
#define ss second
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) x.begin(),x.end()
#define PII pair <int,int>
#define N 100005
#define MOD 1000000007
#define INF 1000000000000000
using namespace std;


int main()
{
    int n;
    string s[5*N];
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }
    for (int i = n-2; i >= 0; --i)
    {
        for (int j = 0; j < s[i].size(); ++j)
        {
            if(j >= s[i+1].size())
                s[i].resize(j);
            if(s[i][j] > s[i+1][j])
            {
                s[i].resize(j);
                break;
            }
            if(s[i][j] < s[i+1][j])
            {
                break;
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        cout << s[i] << "\n";
    }
}