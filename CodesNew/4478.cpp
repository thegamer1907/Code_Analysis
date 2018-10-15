#include <bits/stdc++.h>
using namespace std;

#define PI acos(-1.0)
#define INF 0x3f3f3f3f
#define FAST_IO ios::sync_with_stdio(false)
#define CLR(arr,val) memset(arr,val,sizeof(arr))

typedef long long LL;
const int N=500000+100;
string s[N];

int main(){
    FAST_IO;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>s[i];
    for(int i=n-1;i>=1;i--){
        int len=min(s[i].size(),s[i+1].size());
        for(int j=1;j<=len;j++){
            if(s[i+1][j]>s[i][j]) break;
            else if(s[i+1][j]<s[i][j]) {s[i]=s[i].substr(0,j);break;}
        }
    }
    for(int i=1;i<=n;i++) cout<<s[i]<<endl;
    return 0;
}

	 	 	   	 		    	  	   		 			 	