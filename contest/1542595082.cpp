#include <bits/stdc++.h>
#define MOD 1000000007LL
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

string str;
int n;
bool flag[2];
string st[100];

int main(void){
	cin >> str;
	scanf("%d",&n);
	flag[0]=false;

	for(int i=0;i<n;i++){
		cin >> st[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			string s2=st[i]+st[j];
			if(s2.find(str)!=string::npos)flag[0]=true;
		}
	}
	printf("%s\n",flag[0]?"YES":"NO");
	return 0;
}