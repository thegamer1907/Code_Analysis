#include <bits/stdc++.h>

using namespace std;

#define fo(i,j,n) for(i=j;i<n;++i)
#define Fo(i,j,n) for(i=n-1;i>=j;--i)
#define foo(i,j,v) fo(i,j,sz(v))
#define Foo(i,j,v) Fo(i,j,sz(v))
#define li(v) v.begin(),v.end()
#define sz(v) ((int)v.size())
#define CLR(a,v) memset((a),(v),sizeof(a))

#define pi (2*acos(0.0))
#define eps (1e-6)

typedef long long Long;

const int imax = 1e9+7;
const Long lmax = 1e18;

vector <string> v;
string s,s1;


int calc()
{
    int i,n,f=0,c1=0,c2=0;

    v.clear();
    cin >> s;
    cin >> n;

    for(i=0;i<n;++i)
    {
        cin >> s1;
        if(s == s1){f = 1;}
        v.push_back(s1);
    }
    if(f == 1)
    {
        cout << "YES";
    }
    else
    {
        for(i=0;i<n;++i)
        {
            if(v[i][0] == s[1]){c1 = 1;}
            if(v[i][1] == s[0]){c2 = 1;}
        }
        if((c1 == 1)&&(c2 == 1)){cout << "YES";}
        else{cout << "No";}
    }
    return 0;
}

int main()
{
	ios_base::sync_with_stdio(0);
	#ifdef localhost
	//freopen("E://input.txt","r",stdin);
	//freopen("E://output.txt","w",stdout);
	#endif

	calc();

	printf("\n");
	return 0;
}
