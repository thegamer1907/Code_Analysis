#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define S second
#define Need_for_speed ios_base::sync_with_stdio(0);
using namespace std;
//cout<<fixed<<setprecision()
string n , b;
int AB,BA;
bool used[1111111],us[11111111];
int for1(string m){
	AB = 0;
	BA = 0;
	for(int i = 0; i < m.size(); i++){
		if(m[i] == 'A' && m[i + 1] == 'B'&& used[i] == 0 && used[i + 1] == 0 && AB == 0 && BA == 1){
			AB = 1;
			used[i] = 1;
			used[i + 1] = 1;
		}
		if(m[i] == 'B' && m[i + 1] == 'A' && used[i] == 0 && used[i + 1] == 0 && BA == 0){
			BA = 1;
			used[i] = 1;
			used[i + 1] = 1;
		}
	}
	if(AB == 1 && BA == 1){
		return 1;
	}
	return 0;
}
int for2(string s){
	AB = 0;
	BA = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'A' && s[i + 1] == 'B'&& us[i] == 0 && us[i + 1] == 0 && AB == 0){
			AB = 1;
			us[i] = 1;
			us[i + 1] = 1;
		}
		if(s[i] == 'B' && s[i + 1] == 'A' && us[i] == 0 && us[i + 1] == 0 && BA == 0 && AB == 1){
			BA = 1;
			us[i] = 1;
			us[i + 1] = 1;
		}
	}
	if(AB == 1 && BA == 1){
		return 1;
	}
	return 0;
}
int main(){
	Need_for_speed;
	cin>>n;
	if(for1(n) || for2(n)){
		cout<<"YES";
		return 0;
	}cout<<"NO";
	exit(0);
}
