#include<bits/stdc++.h>

using namespace std;
#define endl "\n";
int main(){
	int h,s,m;
	cin>>h>>s>>m;
	int t1,t2;
	cin>>t1>>t2;
	h = h*5;
	if(h == 60)
		h = 0;
	t1 *= 5;
	t1 %= 60;
	t2 *= 5;
	t2 %= 60;

	//forward
	bool forward = true;
	int i = t1;// + 1;
	
	while(i != t2){
		if(i == h || i == s || i == m){
			forward = false;
			break;
		}
		i++;
		if(i == 60)
			i = 0;

	}

	bool backward = true;
	i = t1;

	while(i != t2){

		i--;
		if(i == -1)
			i = 59;
			if(i == h || i == s || i == m){
				backward = false;
				break;
			}

	}

	if(backward || forward)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
