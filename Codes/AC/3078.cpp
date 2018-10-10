#include <bits/stdc++.h>

using namespace std;

#define N 1000010
#define ALF 26

struct state{
	int len, link, cnt, nxt[ALF];
}stt[N<<1];

string s;
int last, sz, grau[N<<1], fim[N];

void init(){
	grau[0] = N;
	stt[0].len = 0;
	stt[0].cnt = 0;
	stt[0].link = -1;
	memset(stt[0].nxt, 0, sizeof stt[0].nxt);
	sz = last = 0;
}


void add(int c){
	int curr = ++sz, p, q, clone;
	
	for(p = last; p!=-1 && !stt[p].nxt[c]; p = stt[p].link) stt[p].nxt[c] = curr;
	
	if(p == -1){
		stt[curr].link = 0;
	}else{
		q = stt[p].nxt[c];
		
		if(stt[q].len == stt[p].len+1){
			stt[curr].link = q;
		}else{
			clone = ++sz;
			stt[clone] = stt[q];
			stt[clone].len = stt[p].len+1;
			stt[clone].cnt = 0;
			stt[q].link = stt[curr].link = clone;
			
			++grau[clone];
			
			for(; p!=-1 && stt[p].nxt[c] == q; p = stt[p].link) stt[p].nxt[c] = clone;
		}
	}
	
	stt[curr].len = stt[last].len+1;
	stt[curr].cnt = 1;
	++grau[stt[curr].link];
	
	last = curr;
}


void build(){
	init();
	for(int i=0; i<s.size(); i++) add(s[i]-'a');
	
	for(int p = last; p; p = stt[p].link) fim[p] = 1;
	
	queue<int> q;
	for(int i=1; i<=sz; i++){
		if(!grau[i]) q.push(i);
	}
	
	while(q.size()){
		int u = q.front(); q.pop();
		stt[stt[u].link].cnt += stt[u].cnt;
		
		if((--grau[stt[u].link]) == 0){
			q.push(stt[u].link);
		}
	}
}

int get_nxt(int u, int c){
	while(u && !stt[u].nxt[c]){
		u = stt[u].link;
	}
	if(stt[u].nxt[c]) return stt[u].nxt[c];
	return 0;
}

void solve(){
	int u=0;
	int ans = -1;
	for(int i=0; i<s.size(); i++){
		u = get_nxt(u, s[i]-'a');
		if(fim[u] && stt[u].cnt >= 3) {
			ans = i;
		}
	}
	if(ans == -1) cout << "Just a legend\n" ;
	else cout << s.substr(0, ans+1) << endl;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> s;
	build();
	solve();
}
