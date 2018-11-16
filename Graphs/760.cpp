#include<iostream>
#include<algorithm>
#include<iomanip>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#define speedX ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define lli long long int
#define mod 1000000007
using namespace std;
int main(){
	speedX;
	int n;
	cin>>n;
	int t;
	cin>>t;
	string s;
	cin>>s;
	while(t--){
		for(int i = 1; i<n; i++){
			if(s[i] == 'G' && s[i-1] == 'B'){
				s[i-1] = 'G';
				s[i] = 'B';
				i++;
			}
		}
	}
	cout<<s<<"\n";
	return 0;
}