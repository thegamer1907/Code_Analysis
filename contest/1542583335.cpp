/*input
3 2
1 0
1 1
0 1
*/
#include <bits/stdc++.h>
using namespace std;
const long long md=1e9+7;
long long a[100005][5],n,ans=0;
long long p[100005];
// struct trie{
// 	int cnt=0;
// 	struct trie *next[2]={NULL};
// } *root;
// void push(int k){
// 	trie *cur=root;
// 	for(int i=21;i>=0;--i){
// 		int bit=!!( k&(1<<i) );
// 		if(!cur->next[bit])
// 			cur->next[bit]=new trie();
// 		cur=cur->next[bit];
// 		++cur->cnt;
// 	}
// }
// void get(int k, trie *cur=root, int pos=21){
// 	if(pos==0){
// 		//ans+=cur->cnt;
// 		//return;
// 		if(k&1 && cur->next[1]) ans+=cur->next[1]->cnt;
// 		if(cur->next[0]) ans+=cur->next[0]->cnt;
// 		return;	//ans+=cur->cnt;
// 	}
// 	int bit=!!(k&(1<<pos));
// 	if(cur->next[0]){
// 		get(k,cur->next[0],pos-1);
// 	}
// 	if( bit )
// 		if(cur->next[1])
// 			get(k,cur->next[1],pos-1);
// }
int main(){
	#ifdef ONLINE_JUDGE
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	#endif
	//root=new trie();
	long long q,m,k,h,sum=0,x,y,sm[4]={0};
	cin>>n>>k;
	set<int> s;
	for(int x=0;x<n;++x){
		sum=ans=0;
		for(int j=0;j<k;++j){
			cin>>a[x][j];
			p[x]=p[x]*2+a[x][j];
		}
		s.insert(p[x]);
		for(int i=0;i<(1<<k);++i){
			if((p[x]&i)==0){
				//cout<<p[x]<<' '<<i<<'\n';
				if(s.find(i)!=s.end())
					return cout<<"YES",0;
			}
		}
	}
	return cout<<"NO",0;
}