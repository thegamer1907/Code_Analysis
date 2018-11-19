#include <bits/stdc++.h>
#define ll long long
#define rep(i,num,j) for(int i=num;i<j;i++)
#define MOD 1000000007
using namespace std;
map <char , int> mp;
const long long N=1e5;
ll numOdd[N];
ll sumEven[N]={};
int main()
{
    string x;
    cin >> x;
    int y,sum1=0,sum2=0;
    cin >> y;
    for(int i =0;i<y;i++){
        string u;
        cin >> u;
        if ((u[0] == x[1] && u[1] == x[0]) || u == x){
            cout << "YES" << endl;
            return 0;
        }
        if (u[1] == x[0]){
            sum1++;
        }else if (u[0] == x[1]){
        sum2++;
        }
    }
    if (sum1>=1&&sum2>=1){
        cout << "YES" << endl;
    }else cout << "NO"<< endl;
return 0;
}
