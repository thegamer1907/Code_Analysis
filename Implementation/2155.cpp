#include <bits/stdc++.h>
#define taskname "I"
#define FOR(i,a,b) for(int i=a;i<=b;++i)

using namespace std;
int n,x,y,z;
void input()
{
    int tx,ty,tz;
    cin >> n;
    FOR(i,1,n)
    {
        cin >> tx >> ty >> tz;
        x+=tx;y+=ty;z+=tz;
    }
    if(x==0 && y==0 && z==0) {cout << "YES";return;}
    cout << "NO";
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen(taskname".INP","r",stdin);
	freopen(taskname".OUT","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	input();

	return 0;
}