#include <bits/stdc++.h>
using namespace std;
string a,b;
int n,ok=0;
vector<string> v;
char F[1000],L[1000];
int main()
{
    cin>>a;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>b;
        if(b[0]==a[0] && b[1]==a[1])
            ok=1;
        F[b[0]]++;
        L[b[1]]++;
    }
    if((L[a[0]] && F[a[1]]) ||ok){
        printf("YES");
        return 0;
    }
    printf("NO");
    return 0;
}
