#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<time.h>
#include<numeric>
#include<assert.h>
#include<iostream>
using namespace std;
typedef long long LL;
typedef pair<int,int>pi;
#define ALL(A) A.begin(),A.end()
int main(){
	string des;
	cin>>des;
	int n;
	while(scanf("%d",&n)!=EOF){
	   vector<string>v(n,"");
	   bool flag=0;
	   for(int i=0;i<n;i++){cin>>v[i];if(v[i]==des)flag=1;}
	   for(int i=0;i<n;i++)
	   for(int j=0;j<n;j++){
		if(v[i][1]==des[0]&&v[j][0]==des[1])flag=1;
	   }
	   puts(flag?"YES":"NO");
	}
	return 0;
}
