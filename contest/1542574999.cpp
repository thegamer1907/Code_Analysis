#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<queue>
#include<cmath>
#include <string>
using namespace std;
int n,k;
bool finl[4]={0},renmmp=0;
bool all1[4]={1,1,1,1},map[100005][4];
int main()
{
//	ios::sync_with_stdio(false);
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		for(int tp,j=0;j<k;j++){
		cin>>tp;
		if(!(map[i][j]=tp))
		all1[j]=0;
		}
		for(int j=0;j<k;j++)
		{
			if(map[i][j])break;
			if(j==k-1) renmmp=1;
		}
	}
//	cout<<"?????? "; 
	if(renmmp) {
		cout<<"YES"<<endl;
		return 0;
	}
	for(int i=0;i<k;i++) if(all1[i]){
		cout<<"NO"<<endl;
		return 0;//?1???? 
	}
//	cout<<"switch? ";
	switch(k)
	{
		case 1:
		case 2:
		cout<<"YES"<<endl;
			break;
		case 3:
			for(int i=0;i<n;i++)
			{
				if((int)map[i][0]+map[i][1]+map[i][2]<2){
				cout<<"YES"<<endl;return 0;
				}
			}cout<<"NO"<<endl;
			break;
		case 4:
			for(int i=0;i<n;i++)
			{
				if((int)map[i][0]+map[i][1]+map[i][2]+map[i][3]<2){
				cout<<"YES"<<endl;return 0;
			}	}//????0 
			for(int i=0;i<n;i++)
			{
				if((int)map[i][0]+map[i][1]+map[i][2]+map[i][3]==2)
				{
					for(int j=0;j<4;j++)finl[j]|=map[i][j];
					if(finl[0]&&finl[1]&&finl[2]&&finl[3]) {cout<<"YES"<<endl;return 0;
					}
				}
			}cout<<"NO"<<endl;
			break;
	}
	return 0;
}

