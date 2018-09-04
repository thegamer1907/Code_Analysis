#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <deque>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <math.h>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <queue>

#define ll long long
#define hashmap unordered_map
#define hashset unordered_set
#define v vector
#define str string
#define mod 1000000007
#define e5 100000
#define e6 1000000
#define e9 1000000000
#define e18 1000000000000000000
#define loop(a,b) for(int i=a;i<b;i++)
using namespace std;
const str alphabetLower ="abcdefghijklmnopqrstuvwxyz";
const str alphabetHigher="ABCDEFGHIJKLMNOPQRSTUVXYZ";
const str digits="0123456789";
ifstream fin ("input.txt");
ofstream fout("output.txt");

// Write code below this line
/*struct m{
	int num,c;
};
struct d{
	v<int>his;
	int h;
};
d mem[e5];
int ref[1001];
void dp(int h,int cur){
	if (mem[cur].h>h){return;}

}
void run(){
	int n;cin>>n;
	for (int i=0;i<e5;i++){mem[i].h=-1;}
	set<int>keys;
	hashmap<int,set<m>>mov;
	loop(0,n){
		m b;b.num=i;
		int a,w,c;cin>>a>>w>>b.c;
		a+=w;
		keys.insert(a);
		if (!mov.count(a)){mov.insert(pair<int,set<m>>(a,set<m>()));}
		mov[a].insert(b);
	}
	v<set<m>> mc;
	for (int i:keys){
		mc.push_back(mov[i]);
	}
	delete keys;
	delete mov;
	dp(0,1);
}*/
void run(){
	str s;cin>>s;
	int z[s.length()];
	z[0]=s.length();
	int l=0,r=0;
	for (int i=1;i<s.length();i++){
		if (i>r){
			l=r=i;
			while (s[r]==s[r-i]&&r<s.length()){
				r++;
			}
			z[i]=r-l;r--;
		} else {
			if (z[i-l]<r-i+1){z[i]=z[i-l];}
			else{
				l=i;
				while (s[r]==s[r-i]&&r<s.length())r++;
				z[i]=r-l;r--;
			}
		}
	}
	//for (int i:z){cerr<<i<<" ";}cerr<<endl;
	int mi=0;
	for (int i=1;i<s.length();i++){
		//cerr<<mi<<endl;
		if (i+z[i]==s.length()&&mi>=s.length()-i){cout<<s.substr(0,s.length()-i)<<endl;return;}
		mi=max(mi,z[i]);
	}
	cout<<"Just a legend"<<endl;
}
// Write code above this line
int main() {run();return 0;}