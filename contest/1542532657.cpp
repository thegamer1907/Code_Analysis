#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<cstring>
using namespace std;

vector <string> strvec;
int a[20][4];
map<int,int> vis;
int cnt;



bool isinterest(int A,int b,int c,int d) {
	set <int> s;s.clear();
	s.insert(A);
	s.insert(b);
	s.insert(c);
	s.insert(d);
	int cnter[4];
	cnter[0]=cnter[1]=cnter[2]=cnter[3]=s.size();
	set <int> ::iterator it=s.begin();
	while (it!=s.end()){
		for (int i=0;i<4;i++) {
			int x=*it;
			cnter[i]-=a[*it][i];
		}
		it++;
	}
	double mid=s.size()/2.;
	for (int i=0;i<4;i++) {
		if (cnter[i]<mid) return false;
	}
	return true;
}

bool judge(int n) {
	for (int i=0;i<cnt;i++) {
		for (int j=i;j<cnt;j++){
			for (int k=j;k<cnt;k++) {
				for (int l=k;l<cnt;l++) {
					if (isinterest(i,j,k,l)) {
						printf("YES\n");
						return 0;
					}		
					
				}
			}
		}
	
	}
	printf("NO\n");


}


int main(void) {
	memset(a,0,sizeof(a));
	int n,k;
	scanf("%d%d\n",&n,&k);
	cnt=0;
	for (int i=0;i<n;i++) {
		int recv[4];
		int mark=0;
		for (int j=0;j<k;j++) {
			scanf("%d",&recv[j]);
			mark*=10;mark+=recv[j];
		}
		if (!vis.count(mark)) {
			vis[mark]=1;
			for (int j=0;j<k;j++) a[cnt][j]=recv[j];
			cnt++;
		}
	}

	judge(k);

	




}
