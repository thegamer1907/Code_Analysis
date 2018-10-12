#include <bits/stdc++.h>
#define lint long long int
using namespace std;
int visited[110];
int maze[1010][1010];
lint ct=0,n;
vector <vector<int>> al(110);
void dfs (int start){
    visited[start]=1;
    for (vector<int>::const_iterator it=al[start].begin(); it!=al[start].end(); it++){
        if (visited[*it]==0)
            dfs(*it);
    }
}
int main() {
	cin.sync_with_stdio(false);
	string a;
	cin>>a;
	int l=a.length();
	lint avail[3],rate[3],req[3]={},i;
	lint m,cost;
	cin>>avail[0];
	cin>>avail[1];
	cin>>avail[2];
	cin>>rate[0];
	cin>>rate[1];
	cin>>rate[2];
	cin>>m;
	for (i=0;i<l;i++){
	    if (a[i]=='B')
	        req[0]++;
	    if (a[i]=='S')
	        req[1]++;
	    if (a[i]=='C')
	        req[2]++;	        
	}
	n=0;
	cost=rate[0]*req[0]+rate[1]*req[1]+rate[2]*req[2];
//	cout<<req[0]<<req[1]<<req[2]<<endl;
	while (1){
	lint temp=INT_MAX;
    if (req[0]!=0)
        temp=min(temp,avail[0]/req[0]);
    if (req[1]!=0)
        temp=min(temp,avail[1]/req[1]);
    if (req[2]!=0)
        temp=min(temp,avail[2]/req[2]); 
    avail[0]-=temp*req[0];
    avail[1]-=temp*req[1];
    avail[2]-=temp*req[2];
    
    n+=temp;
    int flag=1;
    for (i=0;i<3;i++){
        if (req[i]!=0 && avail[i]!=0){
            flag=0;
            break;
        }
    }
    if (flag==0){
    lint mreq=0,breq=0,sreq=0,creq=0;
    if (avail[0]<req[0]){
        breq=req[0]-avail[0];
        mreq+=(rate[0]*breq);
    }
    if (avail[1]<req[1]){
        sreq=req[1]-avail[1];
        mreq+=(rate[1]*sreq);
    }
    if (avail[2]<req[2]){
        creq=req[2]-avail[2];
        mreq+=(rate[2]*creq);
    }   
    
    if (mreq>m)
        break;
    else{
        avail[0]+=breq;
        avail[1]+=sreq;
        avail[2]+=creq;
        m-=mreq;
    }}
    else{
        n+=(m/cost);
        break;
    }
    
	}
	cout<<n;
	return 0;
}