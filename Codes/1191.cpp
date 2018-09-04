#include <bits/stdc++.h>`

#define scanlld(longvalue) scanf("%lld", &longvalue)
#define printlld(longvalue) printf("%lld\n", longvalue)

#define scanc(letter) scanf("%c", &letter)
#define printc(letter) printf("%c", letter)

#define scans(name) scanf("%s", name)
#define prints(name) printf("%s", name)

#define printnewline printf("\n")

#define ll long long

#define printcase(indexing,ans) printf("Case %lld: %lld\n", indexing, ans)

#define pb(x) push_back(x)




using namespace std;


int main()
{
    set<string >ans;
    string a;

    int n,m;

    scanf("%d %d",&n,&m);

    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        ans.insert(a);
    }
    for(int i=0;i<m;i++)
    {
        cin>>a;
        if(ans.find(a)!=ans.end())
            cnt++;
    }
    n -= cnt/2,m -= (cnt+1)/2;
    if(n>m)
        puts("YES");
    else
        puts("NO");
    return 0;
}