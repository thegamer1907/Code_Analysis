#define _CRT_SECURE_NO_WARNINGS

#include <bits/stdc++.h>

using namespace std;
#define PI 3.14159265359
#define eps 1e-8
#define mp make_pair
#define pb push_back
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define REP(i,n) FOR(i,0,n)
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
const int INF = 1<<29;
typedef long long ll;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double tick() { 
	static clock_t oldticks;
	clock_t newticks = clock();
	double diff = 1.0 * (newticks - oldticks) / CLOCKS_PER_SEC; 
	oldticks = newticks;
	return diff;
}

int n,m;

int main(){
	ios_base::sync_with_stdio(false); //Fast I/O
	cin.tie(NULL);
	//freopen("in.txt","r",stdin);
	//freopen("output.txt","w",stdout);	

    int c=0;
    
    cin >> n >> m;

    while(n<m){
        if(m%2)
            m++;
        else
            m/=2;
        c++;
    }

    cout << c+n-m;

    //cerr << tick();

	return 0;
}