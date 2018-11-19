#include<bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<int,int>ii;
typedef pair<int,ii> iii;
typedef pair<ii,ii>iiii;

set<vector<int> >vis;

bool cari(vector<int>&ls){
	vector<int>search(4);
	
	bool ret=false;
	
	for(int i = 0;i<2;i++){
		if(ls[0]==1&&i==1)continue;
		search[0]=i;
		for(int j = 0;j<2;j++){
			if(ls[1]==1&&j==1)continue;
			search[1]=j;
			
			for(int k = 0;k<2;k++){
				if(ls[2]==1&&k==1)continue;
				search[2]=k;
				
				for(int l = 0;l<2;l++){
					if(ls[3]==1&&l==1)continue;
					search[3]=l;
					if(vis.count(search)){
						ret=true;
					}
				}
			}
		}
	}
	return ret;
}

int main(){
	int n,k;cin>>n>>k;
	
	for(int i = 0;i<n;i++){
		vector<int> tmp(4);
		for(int j=0;j<4;j++)tmp[j]=0;
		for(int j =0;j<k;j++){
			int a;cin>>a;
			tmp[j]=a;
		}
		
		vis.insert(tmp);
	}
	
	vector<int>search(4);
	for(int j = 0;j<4;j++)search[j]=0;
	bool can=vis.count(search);
	
	//SEARCH
	for(int i = 0;i<2;i++){
		
		search[0]=i;
		for(int j = 0;j<2;j++){
			search[1]=j;
			
			for(int k = 0;k<2;k++){
				search[2]=k;
				
				for(int l = 0;l<2;l++){
					search[3]=l;
					int cnt=0;
					for(int z=0;z<4;z++){
						if(search[z]==1)cnt++;
					}
					
					if(cnt<=2&&vis.count(search)){
						if(cari(search)){
							can=true;
						}
					}
				}
			}
		}
	}
	
	if(can)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}