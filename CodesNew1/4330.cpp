#define rep(i,a,b) for(int i=a;i<b;++i)
#define repr(i,a,b) for(int i=a,i > b;--i)
#define mm(lamb, tttt) memset(lamb, tttt, sizeof lamb)

#define null NULL
#define eps 0.000000001
#define mod 1000000007
#define PI 3.14159265358979323846
#define pb push_back
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define ALL(V) V.begin(), V.end()
#define sz(V) (ll)V.size()
#define _ <<" "<<

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <iterator>
#include <bitset>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <cassert>
#include <limits.h>
#include <iomanip>
#include <cctype>
#include <numeric>
#include <complex>

using namespace std;

typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> ii;
typedef pair<int, pair<int,int> > iii;
typedef vector<pair<int, int> > vii;

int n;
vector<string> hashtags;

int main(){
	cin>>n;
	rep(i,0,n){
		string s;
		cin>>s;
		hashtags.pb(s);
	}
	for(int i=n-2;i>=0;i--){
		string s1 = hashtags[i],s2=hashtags[i+1];
		//cout<<s1<<" "<<s2<<endl;
		for(int l = 0;l<s1.length();l++){
			//if(s1[l] <s2[l])
			if(l >= s2.size()) {
				if(s1.substr(0,l) == s2){
					s1 = s1.substr(0,l);
					hashtags[i] = s1;
					break;
				}
				else break;
			}
			if(s1[l] < s2[l]) break;
			if(s1[l] > s2[l]) {
				s1=s1.substr(0,l);
				hashtags[i] = s1;
				break;
			}
		}
	}
	rep(i,0,n) {
		cout<<hashtags[i]<<endl;
	}



}

