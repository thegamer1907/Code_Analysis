#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long LL;
const int MX=105;

int n;
string ori,bark[MX];
bool ok=false;

int main(){
	cin>>ori>>n;
	for (int i=1;i<=n;i++){
		cin>>bark[i];
		if (bark[i]==ori){
			ok=true;
			break;
		}
	}
	for (int i=1;i<=n;i++){
		if (bark[i][0]==ori[1]){
			for (int j=1;j<=n;j++){
				if (bark[j][1]==ori[0]){
					ok=true;
					break;
				}
			}
			if (ok) break;
		}
	}
	if (ok){
		printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}