#include<bits/stdc++.h>
#define debug cout<<"aaa"<<endl
#define d(a) cout<<a<<endl
#define pb push_back
#define mem(a,b) memset(a,b,sizeof(a))
#define LL long long
#define lson l,mid,root<<1
#define rson mid+1,r,root<<1|1
#define MIN_INT (-2147483647-1)
#define MAX_INT 2147483647
#define MAX_LL 9223372036854775807i64
#define MIN_LL (-9223372036854775807i64-1)
using namespace std;

const int N = 100000 + 5;
const int mod = 1000000000 + 7;
const double eps = 1e-8;

int a[N][10];

int main(){
	int n,k,cnt;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			cin>>a[i][j];
		}
	}
	if(k==1){
		for(int i=1;i<=n;i++){
			if(a[i][1]==0){
				puts("YES");
				return 0;
			}
		}
		puts("NO");
	}
	else if(k==2){
		bool f01=0,f10=0;
		for(int i=1;i<=n;i++){
			if(a[i][1]==0&&a[i][2]==0){
				puts("YES");
				return 0;
			}
			else if(a[i][1]==0&&a[i][2]==1){
				f01=1;
			}
			else if(a[i][1]==1&&a[i][2]==0){
				f10=1;
			}
		}
		if(f01&&f10){
			puts("YES");
		}
		else{
			puts("NO");
		}
	}
	else if(k==3){
		bool f001=0,f010=0,f100=0,f110=0,f101=0,f011=0;
		for(int i=1;i<=n;i++){
			if(a[i][1]==0&&a[i][2]==0&&a[i][3]==0){
				puts("YES");
				return 0;
			}
			else if(a[i][1]==0&&a[i][2]==0&&a[i][3]==1){
				f001=1;
			}
			else if(a[i][1]==0&&a[i][2]==1&&a[i][3]==0){
				f010=1;
			}
			else if(a[i][1]==1&&a[i][2]==0&&a[i][3]==0){
				f100=1;
			}
			
			else if(a[i][1]==1&&a[i][2]==1&&a[i][3]==0){
				f110=1;
			}
			else if(a[i][1]==1&&a[i][2]==0&&a[i][3]==1){
				f101=1;
			}
			else if(a[i][1]==0&&a[i][2]==1&&a[i][3]==1){
				f011=1;
			}
		}
		if((f001&&f010)||(f001&&f100)||(f001&&f110)){
			puts("YES");
		}
		else if((f010&&f100)||(f010&&f001)||(f010&&f101)){
			puts("YES");
		}
		else if((f100&&f001)||(f100&&f010)||(f100&&f011)){
			puts("YES");
		}
		else{
			puts("NO");
		}
	}
	else if(k==4){
		bool f0001=0,f0010=0,f0100=0,f1000=0,
		f1100=0,f1010=0,f0110=0,f0011=0,f0101=0,f1001=0,
		f1110=0,f1101=0,f1011=0,f0111=0;
		for(int i=1;i<=n;i++){
			if(a[i][1]==0&&a[i][2]==0&&a[i][3]==0&&a[i][4]==0){
				puts("YES");
				return 0;
			}
			
			else if(a[i][1]==0&&a[i][2]==0&&a[i][3]==0&&a[i][4]==1){
				f0001=1;
			}
			else if(a[i][1]==0&&a[i][2]==0&&a[i][3]==1&&a[i][4]==0){
				f0010=1;
			}
			else if(a[i][1]==0&&a[i][2]==1&&a[i][3]==0&&a[i][4]==0){
				f0100=1;
			}
			else if(a[i][1]==1&&a[i][2]==0&&a[i][3]==0&&a[i][4]==0){
				f1000=1;
			}
			
			
			else if(a[i][1]==1&&a[i][2]==1&&a[i][3]==0&&a[i][4]==0){
				f1100=1;
			}
			else if(a[i][1]==1&&a[i][2]==0&&a[i][3]==1&&a[i][4]==0){
				f1010=1;
			}
			else if(a[i][1]==1&&a[i][2]==0&&a[i][3]==0&&a[i][4]==1){
				f1001=1;
			}
			else if(a[i][1]==0&&a[i][2]==1&&a[i][3]==0&&a[i][4]==1){
				f0101=1;
			}
			else if(a[i][1]==0&&a[i][2]==1&&a[i][3]==1&&a[i][4]==0){
				f0110=1;
			}
			else if(a[i][1]==0&&a[i][2]==0&&a[i][3]==1&&a[i][4]==1){
				f0011=1;
			}
			
			
			else if(a[i][1]==1&&a[i][2]==1&&a[i][3]==1&&a[i][4]==0){
				f1110=1;
			}
			else if(a[i][1]==1&&a[i][2]==1&&a[i][3]==0&&a[i][4]==1){
				f1101=1;
			}
			else if(a[i][1]==1&&a[i][2]==0&&a[i][3]==1&&a[i][4]==1){
				f1011=1;
			}
			else if(a[i][1]==0&&a[i][2]==1&&a[i][3]==1&&a[i][4]==1){
				f0111=1;
			}
		}
		if((f0001&&f0010)||(f0001&&f0100)||(f0001&&f1000)
		||(f0001&&f0110)||(f0001&&f1010)||(f0001&&f1100)
		||(f0001&&f1110)){
			puts("YES");
		}
		else if((f0010&&f0001)||(f0010&&f0100)||(f0010&&f1000)
		||(f0010&&f0101)||(f0010&&f1100)||(f0010&&f1001)
		||(f0010&&f1101)){
			puts("YES");
		}
		else if((f0100&&f0001)||(f0100&&f0010)||(f0100&&f1000)
		||(f0100&&f1010)||(f0100&&f1001)||(f0100&&f0011)
		||(f0100&&f1011)){
			puts("YES");
		}
		else if((f1000&&f0001)||(f1000&&f0010)||(f1000&&f0100)
		||(f1000&&f0110)||(f1000&&f0011)||(f1000&&f0101)
		||(f1000&&f0111)){
			puts("YES");
		}
		else if((f0011&&f1100)||(f0101&&f1010)||(f1001&&f0110)){
			puts("YES");
		}
		else{
			puts("NO");
		}
	}
	return 0;
}
