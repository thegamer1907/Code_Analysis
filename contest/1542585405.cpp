#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
#define LL long long
const int N = 1e5+10;
char S[N];
int main()
{
    char str[10],s[10];int n;
    scanf("%s",str);
    scanf("%d",&n);
    int cnt=0,flag=0,mark=0;
    for(int i = 0 ; i < n; i++)
    {
        scanf("%s",s);
        if(s[0]==str[1]) cnt++;
        if(s[1] == str[0]) flag++;
        if(strcmp(str,s)==0)mark=1;
    }

    if((flag && cnt) || mark) cout << "YES\n";
    else cout << "NO\n";
	return 0;
}
