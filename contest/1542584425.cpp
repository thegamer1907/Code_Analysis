// UVa 10567.cpp
/*
ID:ahmeds1
PROG:milk3
LANG:C++
*/
//It's all about what U BELIEVE
#include<bits/stdc++.h>
#define endl '\n'
#define fo(s , y , z) for(int y = s ; y < z ; y++)
#define lne if(liAne)puts("");else line = 1;
#define pb push_back
#define gcu getchar_unlocked

#define modulo 1000000007
#define wtm while(t--)
#define wnm while(n--)
#define non if(!n)break;
#define lsone(Z) (Z&-Z)
#define clr(arr,val) memset(arr,val,sizeof arr)
#define readf freopen("in" , "r" , stdin);
#define writef freopen("out" , "w" , stdout);
using namespace std;
typedef vector<int> vi;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int , int> pairii;
typedef pair<ull , ull> pairull;
typedef set<int> seti;
typedef set<ull> setull;
typedef queue<int> qint;
typedef deque<int> dqint;
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int , int> pairii;
typedef pair<ull , ull> pairull;
typedef set<int> seti;
typedef set<ull> setull;
typedef queue<int> qint;
typedef deque<int> dqint;
//FILE *fin, *fout;
using namespace std;
bool reaaaaaaaaaadf=0;
//////////////////////////////////////////////////
/*--------------MAIN FUNCTION--------------------*/
int main()
{
	//readf; reaaaaaaaaaadf=1;
	//writef;
	//fin = fopen("in", "r");last
	//fout = fopen("out", "w");
	//fin = fopen("in", "r");
	//fout = fopen("out", "w");
	//if(reaaaaaaaaaadf)puts("reaaaaaadf IS ONNNNNNNNN!!!");
	//------------------------------------------------------------------------vis
	int h,m,s,t1,t2,parts[4];
	cin>>h>>m>>s>>t1>>t2;
	parts[0]=(h*5)%60;
	parts[1]=m;
	parts[2]=s;
	t1=(t1*5)%60;
	t2=(t2*5)%60;
	for(int i=0 ; i < 61 ; i++,t1++){
		t1%=60;
		if(t1== parts[0]||t1== parts[1]||t1== parts[2])break;
	}
	for(int i=0 ; i < 61 ; i++,t2++){
		t2%=60;
		if(t2== parts[0]||t2== parts[1]||t2== parts[2])break;
	}
	if(t1!=t2){
		puts("NO");
		return 0;
	}
	for(int i=0 ; i < 61 ; i++,t1--){
		t1%=60;
		if(t1== parts[0]||t1== parts[1]||t1== parts[2])break;
	}
	for(int i=0 ; i < 61 ; i++,t2--){
		t2%=60;
		if(t2== parts[0]||t2== parts[1]||t2== parts[2])break;
	}
	if(t1!=t2)
		puts("NO");
	else puts("YES");
	//------------------------------------------------------------------------
	if(reaaaaaaaaaadf)puts("REEEEAAAAAAAAAADF IS ONNNNNNNNNN");
	return 0;
}
