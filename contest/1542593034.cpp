#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <math.h>
#include <queue>
#include <list>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <ctime>
#include <unordered_map>
using namespace std;

#define ALL(c) (c).begin(),(c).end()
#define IN(x,c) (find(c.begin(),c.end(),x) != (c).end())
#define REP(i,n) for (int i=0;i<(int)(n);i++)
#define FOR(i,a,b) for (int i=(a);i<=(b);i++)
#define INIT(a,v) memset(a,v,sizeof(a))
#define SORT_UNIQUE(c) (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
typedef pair<int,int> PII;
typedef long long int64;
typedef unsigned int uint;
using namespace std;
int main(){
	string s;
	cin>>s;
	int n;
	cin>>n;
	vector<string> input;
	while(n --> 0){
		string t;
		cin>>t;
		input.push_back(t);
	}	
	for(string ss:input){
		if(ss==s){
			cout<<"YES"<<endl;return 0;
		}
	}
	bool l=false;
	bool r=false;
	char a=s[0];
	char b=s[1];
	for(string ss:input){
		if(ss[1]==a){
			l=true;
		}
		if(ss[0]==b){
			r=true;
		}
	}
	if(l&&r){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}
