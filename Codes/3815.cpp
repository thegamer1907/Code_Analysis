# pragma GCC optimize("O3")
# include <bits/stdc++.h>
# define maxn 100005
# define ll long long
# define clock (clock() * 1000.0 / CLOCKS_PER_SEC)
# define rc(s) return cout << s,0
# define _ ios_base::sync_with_stdio(false);cin.tie(0);cerr.tie(0);cout.tie(0);
# define db(x) cerr << #x << " = " << x << '\n'
# define pb push_back
# define mp make_pair
# define sz(x) (int)((x).size())
# define int ll
using namespace std;

int b,s,c;
int nb,ns,nc,pb,ps,pc,r;

bool check(int x)
{
	int needb = x * b;
	int needs = x * s;
	int needc = x * c;
	needb -= nb;
	needs -= ns;
	needc -= nc;
	needb = max(needb,0LL);
	needs = max(needs,0LL);
	needc = max(needc,0LL);
	//cout << needb << needs << needc;
	if(needb * pb + needc * pc + needs * ps <= r) return true;
	else return false;
}

int32_t main(){_
    //freopen("input","r",stdin);
	string S;
	cin >> S;
	for(auto it : S) 
	{
		if(it == 'B') b++;
		else if(it == 'S') s++;
		else c++;
	}
	//rc(check(2));
	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;
	cin >> r;
	int l = 0;
	int r = 1e15;
	while(l < r)
	{
		int mid = l + r + 1 >> 1;
		if(check(mid)) l = mid;
		else r = mid - 1;
	}
	//rc(check(2));
	rc(l);
}
