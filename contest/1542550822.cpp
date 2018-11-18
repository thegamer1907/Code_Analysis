#include <bits/stdc++.h>

using namespace std;
char a1,a2,b1,b2;
int flag,M1[27],M2[27],n;
int main()
{
    cin >> a1>> a2;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> b1 >> b2;
        if((a1==b1&&a2==b2)||(a1==b2&&a2==b1)) flag = 1;
        M1[b1-'a'] = M2[b2-'a'] = 1;
        if(M2[a1-'a']&&M1[a2-'a'])flag = 1;
    }
    if(flag) printf("YES\n");
    else printf("NO\n");
    return 0;
}
