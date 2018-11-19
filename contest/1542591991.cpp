#include <bits/stdc++.h>
#define x first
#define y second
#define fr(i,n) for(int i = 0 ; i < (int) n ; i++)
#define Fr(i , j , n ) for(int i = j ; i < (int) n ; i++)
#define ll long long
#define ii pair <ll,ll>
#define MOD 1000000007
#define MAX 1<<18
#define all(c) c.begin() , c.end();
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    string S1; cin >> S1;
    int n ; cin >> n;
    string A[n];
    fr(i,n)
    {
        cin >> A[i];
        if(A[i]==S1 || (A[i][0]==S1[1] && A[i][1] == S1[0]))
        {
            cout << "YES\n";
            return 0;
        }
    }
    fr(i,n)
    {

        fr(j,n)
        {
            if(i==j)
                continue;
            if(A[i][1]==S1[0]&&A[j][0]==S1[1])
            {
                cout << "YES\n";
                return 0;
            }
            /*if(A[i][0]==S1[1]&&A[j][1]==S1[0])
            {
                cout << "YES\n";
                return 0;
            }*/

        }
    }
    cout << "NO\n";
    return 0;
}
