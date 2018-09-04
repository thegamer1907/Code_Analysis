#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
	string st;
	cin >> st;
	int ar[2][3];
	for(int i=0;i<3;i++){
		cin >> ar[0][i];
	}
	for(int i=0;i<3;i++){
		cin >> ar[1][i];
	}
	lli r;
	cin >> r;
	lli ans = 0;
	int b=0,s=0,c=0;
	for(int i=0;i<st.length();i++){
		if(st[i]=='B'){
			b++;
		}
		else if(st[i]=='S'){
			s++;
		}
		else{
			c++;
		}
	}
	if(b==0){
		ar[0][0] = 0;
	}
	if(s==0){
		ar[0][1] = 0;
	}
	if(c==0){
		ar[0][2] = 0;
	}
	while(1){
		if(ar[0][1]==0 && ar[0][0]==0 && ar[0][2]==0){
			break;
		}
		if(ar[0][0]>0){
			if(ar[0][0]>=b){
				ar[0][0] -= b;
			}
			else{
				r -= (b - ar[0][0])*ar[1][0];
				ar[0][0] = 0;
			}
		}
		else{
			r -= b*ar[1][0];
		}
		if(ar[0][1]>0){
			if(ar[0][1]>=s){
				ar[0][1] -= s;
			}
			else{
				r -= (s - ar[0][1])*ar[1][1];
				ar[0][1] = 0;
			}
		}
		else{
			r -= s*ar[1][1];
		}
		if(ar[0][2]>0){
			if(ar[0][2]>=c){
				ar[0][2] -= c;
			}
			else{
				r -= (c - ar[0][2])*ar[1][2];
				ar[0][2] = 0;
			}
		}
		else{
			r -= c*ar[1][2];
		}
		if(r>=0){
			ans++;
		}
		else{
			break;
		}
	}
	ans += r/(b*ar[1][0] + s*ar[1][1] + c*ar[1][2]);
	cout << ans;
    return 0;
}
