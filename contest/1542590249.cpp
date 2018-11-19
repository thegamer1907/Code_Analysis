#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fi first
#define se second
#define mp make_pair
#define in insert
#define pb push_back

ll t,n,cu[2][40];
char a,b,c,d;
set< pair<char,char> >temp;

int main() {
    scanf("%c%c",&a,&b);
    scanf("%lld",&n);
        for(ll x=0;x<n;x++){
        scanf("\n%c%c",&c,&d);
        temp.in(mp(c,d));
        cu[0][c-'a']++;
        cu[1][d-'a']++;
        }
        if((cu[1][a-'a']>0&&cu[0][b-'a']>0)||temp.find(mp(a,b))!=temp.end()){
            printf("YES");
        }else{
            printf("NO");
        }
	return 0;
}
