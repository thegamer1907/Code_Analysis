#include <bits/stdc++.h>
#define clr(v, d)        memset(v, d, sizeof(v))
using namespace std;
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
int DX[8]= {-1,-1,-1,0,0,1,1,1};
int DY[8]= {-1,0,1,-1,1,-1,0,1};
typedef long long ll;
int n,mm;
int l[100000+9];
int suff[100000+9];
map<int,int>m;
int main() {
     cin>>n>>mm;
     for(int i=1;i<=n;i++){
        cin>>l[i];
     }
     suff[n]=0;
     m[l[n]]++;
     for(int i=n-1;i>0;i--){
         int f=0;
         suff[i]=suff[i+1];
         if(m[l[i]]==0){suff[i]++;}
          m[l[i]]++;
     }
     for(int i=0;i<mm;i++){
        int r;
        cin>>r;
        cout<<suff[r]+1<<endl;
     }
	return 0;
}
