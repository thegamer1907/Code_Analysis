#include <bits/stdc++.h>
using namespace std;

string a, b[200];
int n;

int main()
{
cin>>a;
cin>>n;
for(int i=1;i<=n;i++){cin>>b[i];}
for(int i=1;i<=n;i++){
    if (b[i]==a)
    {
        cout<<"YES";
        return 0;
    }
}
int ok1 = 0;
int ok2 = 0;
for (int i = 1;i <= n;i++) {
    if (b[i][1] == a[0]) {ok1++;}
    if (b[i][0] == a[1]) {ok2++;}
}
if (ok1 > 0 && ok2 > 0) {cout << "YES";}
else cout << "NO\n";
return 0;
}



