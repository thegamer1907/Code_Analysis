#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef pair<int,int> pp;

char s[33];
bool tag1[33];
bool tag2[33];

int main()
{
    scanf("%s",s);
    int a=s[0]-'a';
    int b=s[1]-'a';
    int n;
    scanf("%d",&n);
    bool win=false;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%s",s);
        tag1[s[0]-'a']=true;
        tag2[s[1]-'a']=true;
        if(s[0]-'a'==a&&s[1]-'a'==b)
        {
            win=true;
        }
    }
    if(win||(tag2[a]&&tag1[b]))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
