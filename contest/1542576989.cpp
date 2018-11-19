#include<iostream>
#include<cstring>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
inline int read(){
	register int res=0, c;
	while(c=getchar(), c<'0'||c>'9');
	do{ res=(res<<3)+(res<<1)+(c^48); } while(c=getchar(), '0'<=c&&c<='9');
	return res;
}
inline int log2(int t){
	register int res=0;
	while(t>>=1)res++;
	return res;
}
#define pow2(t) (1<<(t))
string qian[210], hou[210], pre[155555];
int nowk[210], len[210];
vector<int> cha[210];
int main(){
	for(int i=2; i<155555; i++){
		pre[i]=pre[i>>1]+(i&1?'1':'0');
	}
	int N=read();
	for(int i=1; i<=N; i++){
		cin>>qian[i];
		hou[i]=qian[i];
		len[i]=qian[i].length();
		int len;
		for(len=1;; len++){
			bool flag=true;
			vector<int>temp;
			for(int j=pow2(len); j<pow2(len+1); j++){
				if(qian[i].find(pre[j])==string::npos)temp.push_back(j), flag=false;
			}
			if(!flag){
				cha[i].swap(temp);
				break;
			}
		}
		nowk[i]=len-1;
	}
	int M=read();
	for(int i=1; i<=M; i++){
		int a=read(), b=read();
		if(len[a]+len[b]<400000){
			len[i+N]=len[a]+len[b];
			string NOW=hou[a]+qian[b];
			if(NOW.length()>200000){
				qian[i+N]=NOW.substr(0, 200000);
				hou[i+N]=NOW.substr(NOW.length()-200000, 200000);
			}
			else qian[i+N]=hou[i+N]=NOW;
			int len;
			for(len=1;; len++){
				bool flag=true;
				vector<int>temp;
				for(int j=pow2(len); j<pow2(len+1); j++){
					if(NOW.find(pre[j])==string::npos)temp.push_back(j), flag=false;
				}
				if(!flag){
					cha[i+N].swap(temp);
					break;
				}
			}
			nowk[i+N]=len-1;
			if(a==b && nowk[i+N]==nowk[a] && ::len[a]>22234){
				::len[i+N]=::len[a];
				qian[i+N]=qian[a];
				hou[i+N]=hou[a];
			}
		}
		else{
			len[i+N]=400001;
			nowk[i+N]=max(nowk[a], nowk[b]);
			if(nowk[a]==nowk[b]){
				for(int ii=0, j=0; ii<cha[a].size() && j<cha[b].size();){
					if(cha[a][ii]==cha[b][j])cha[i+N].push_back(cha[a][ii]), ii++, j++;
					else if(cha[a][ii]<cha[b][j])ii++;
					else j++;
				}
			}
			else{
				cha[i+N].assign(cha[nowk[a]>nowk[b]?a:b].begin(), cha[nowk[a]>nowk[b]?a:b].end());
			}
			bool flag=true;
			string temp=hou[a]+qian[b];
			for(auto i:cha[i+N]){
				if(temp.find(pre[i])==string::npos)flag=false;
			}
			if(flag)nowk[i+N]++;
			qian[i+N]=qian[a];
			hou[i+N]=hou[b];
		}
		printf("%d\n", nowk[i+N]);
	}
}
/*
5
0
0011
11111
111111
1111111
44
1 1
2 2
5 5
8 8
9 9
10 10
11 11
12 12
13 13
14 14
15 15
16 16
17 17
18 18
19 19
20 20
21 21
22 22
23 23
24 24
25 25
26 1
27 2
*/