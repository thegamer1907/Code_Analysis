#include <bits/stdc++.h>
#define PI acos(-1.0)
#define mem(a,b) memset((a),b,sizeof(a))
#define TS printf("!!!\n")
#define pb push_back
//std::ios::sync_with_stdio(false);
using namespace std;
//priority_queue<int,vector<int>,greater<int>> que;
const double EPS = 1.0e-8;
typedef pair<int, int> pairint;
typedef long long ll;
typedef unsigned long long ull;
const int  maxn = 1e5 + 100;
const int  maxm = 300;
//next_permutation
//priority_queue<int, vector<int>, greater<int>> que;
int check[30][5];
map<char, int> mp;
int pop = 0;
int flag = 0;
int main()
{
        string a, b;
        while(cin >> a )
        {
        flag=0;
        mem(check,0);
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
                cin >> b;
                if (flag)
                {
                        continue;
                }
                if (b == a)
                {
                        flag = 1;
                }
                else
                {
                        check[b[0] - 'a'][1] = 1;
                        check[b[1] - 'a'][2] = 1;
                }
        }
        if (flag || (check[a[0] - 'a'][2] && check[a[1] - 'a'][1]))
        {
                cout << "YES" << endl;
        }
        else
        cout<<"NO"<<endl;
        }
}
