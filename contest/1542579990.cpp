//@author Khaled Alam(Ninjo) ~ KhaledAlam.net
#include <bits/stdc++.h>
using namespace std;
// Template(v0.0.1)  |  Github.com/khaledalam/templates/tree/master/cpp
typedef long long ll;
typedef vector<int> vi;
typedef stringstream ss;
typedef pair<int, int> pii;
//#########################
#define endl         '\n'
#define fi           first
#define se           second
#define pb           push_back
#define mp           make_pair
#define out(x)       return cout<<x,0
#define all(x)       x.begin(),x.end()
#define sz(x)        ((int)(x.size()))
#define clr(x)       memset(x,0,sizeof x)
#define rep(i,n)     for(int i=0;i<n;i++)
#define ifile(x)     freopen(#x,"r",stdin)
#define ofile(x)     freopen(#x,"w",stdout)
#define pin0(x)      size_t x = time(NULL)
#define pin1(x)      fprintf(stderr,"time: %.2fs\n",(float)time(NULL)-x)
#define foreach(i,t) for(__typeof(t.begin()) i=t.begin();i!=t.end();i++)
#define ios          ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define val(x)       cerr<<"[l#: "<<__LINE__<<"] "<< " "<<#x<<" = "<<x<<'\n'
//##########################################################################

#define maxn 100100

int main() {
//	ios;
//	ifile(input.txt); //ofile(output.txt);

	char t[2];
	cin >> t[0] >> t[1];
	int n;
	cin >> n;
	char a[n][2];
	rep(i,n)
		cin >> a[i][0] >> a[i][1];
	bool  ok3 = false, ok4 = false;
	rep(i,n)
	{
		if(a[i][0] == t[0] && a[i][1] == t[1])out("YES");
		if (a[i][0] == t[1])
			ok3 = true;
		if (a[i][1] == t[0])
			ok4 = true;

	}
	puts( (ok3&&ok4) ? "YES" : "NO");
}
