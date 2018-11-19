#include<bits/stdc++.h>
#define lli long long int
#define test()  int test;cin>>test;while(test--)
const lli MOD = 1000000007ll;
using namespace std;
vector<int> adj[100005];

int main()
{
    std::ios_base::sync_with_stdio(false);
    string st;
    cin >> st;
    int n;
    cin >> n;
    string str[n];
    for(int i=0;i<n;i++){
    	cin >> str[i];
    	if(st==str[i]){
    		cout << "YES";
    		return 0;
		}
	}
	int a1=0,a2=0;
	for(int i=0;i<n;i++){
		if(str[i][0]==st[1]){
			a1 = 1;
		}
		if(str[i][1]==st[0]){
			a2 = 1;
		}
	}
	if(a1==1 && a2==1){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
    return 0;
}
