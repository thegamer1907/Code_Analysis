#include <bits/stdc++.h>

using namespace std;
string s[110];
string x;
int n;
int main()
{
    cin>>x;
    scanf("%d",&n);
    for (int i=0;i<n;++i)
        cin>>s[i];
    bool f = false;
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            string now = s[i]+s[j];
            for (int i=0;i<now.length()-1;++i){
                if (now[i]==x[0]&&now[i+1]==x[1]){
                    f = true;
                     break;
                }
            }
        }
    }
    if (f)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
