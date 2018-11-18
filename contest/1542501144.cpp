/**
 *    author:  Duong Tung
 *    created: 10.11.2018 10:43:23
**/

#include <bits/stdc++.h>
#define rfor(i,n) for(int i=1;i<=(n);++i)

using namespace std;
const int maxn=1001;
int c[21];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("task.inp","r",stdin);
    //freopen("task.out","w",stdout);
    //freopen(".inp","r",stdin);
    //freopen(".out","w",stdout);
    int n;
    int flag=0,flag1=0,flag2=0;
    string s;
    cin>>s>>n;
    rfor(i,n) {
        string a;
        cin>>a;
        if (a==s)
            flag++;
        if (a[0]==s[1])
            flag1++;
        if (a[1]==s[0])
            flag2++;
    }
    if (flag!=0) {
        cout<<"YES";
        return 0;
    }
    if (flag1!=0&&flag2!=0)
        cout<<"YES";
    else
        cout<<"NO";
}












