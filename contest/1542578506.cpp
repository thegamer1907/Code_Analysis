#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <math.h>
using namespace std;


int n,k;

int A[100100];
long long dp[100100];
long long old[100100];

long long rep[100100];
int ver[100100];
int vern=1;

int gett(int ind){
	if(ver[ind] != vern){
		rep[ind]=0;
		ver[ind]=vern;
	}
	return rep[ind];
}
void addd(int ind){
	if(ver[ind] != vern){
		rep[ind]=0;
		ver[ind]=vern;
	}
	rep[ind]++;
}

void subt(int ind){
	if(ver[ind] != vern){
		rep[ind]=0;
		ver[ind]=vern;
	}
	rep[ind]--;
}


long long cur_cost=0;

int ll,rr;

void get_cost(int l,int r){
	for(int i=ll-1;i>=l;i--){
		cur_cost += gett(A[i]);
		addd(A[i]);
	}
	for(int i=rr;i>r;i--){
		subt(A[i]);
		cur_cost -= gett(A[i]);
	}
	ll=l;
	rr=r;
}

vector<int> lvls[30];


int middle(int l,int r){
	return (r+l)/2;
}
int L[100100];
int R[100100];
int from[100100];
int to[100100];

void divide(int l,int r,int lvl){
	if(r<l)return;
	int mid=(r+l)/2;
	lvls[lvl].push_back(mid);
	L[mid]=l;
	R[mid]=r;
	if(l!=r){
		divide(l,mid-1,lvl+1);
		divide(mid+1,r,lvl+1);
	}
}

int main(){
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",A+i);
		old[i]=1ll<<60;
	}
	if(n==1){
		cout<<0<<endl;
		return 0;
	}
	divide(1,n,0);
	for(int kk=1;kk<=k;kk++){
		from[middle(1,n)]=1;
		to[middle(1,n)]=n;
		for(int l=0;l<20;l++){
			if(lvls[l].size()==0)continue;
			int s=lvls[l].size();
			vern++;
			ll=n+1;
			rr=n;
			cur_cost=0;
			for(int i=s-1;i>=0;i--){
				int mid=lvls[l][i];
				dp[mid]=1ll<<60;
				int best_ind=-1;
				for(int j=min(to[mid],mid);j>=from[mid];j--){
					get_cost(j,mid);
					if(old[j-1] + cur_cost <= dp[mid]){
						dp[mid]= old[j-1] + cur_cost;
						best_ind=j;
					}
				}
				if(L[mid] != R[mid]){
					from[middle(L[mid],mid-1)]=from[mid];
					to[middle(L[mid],mid-1)]=best_ind;
					from[middle(mid+1,R[mid])]=best_ind;
					to[middle(mid+1,R[mid])]=to[mid];
				}
			}

		}
		for(int i=0;i<=n;i++){
			old[i]=dp[i];
		}
	}
	cout<<old[n]<<endl;
}