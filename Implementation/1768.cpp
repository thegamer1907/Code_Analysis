#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
	string s;
	cin >> s;
	int dem = 0;
	for(int i = 0; i < s.length()-1; i++){
		if(s[i] == s[i+1])
			dem++;
		else{
			dem++;
			if(dem == 7){
				cout<<"YES";
				break;
			}
			dem = 0;

		}
			
			if((dem+1) == 7){
				cout<<"YES";
				break;
			}

	}
	if(dem+1 < 7)
		cout<<"NO";
	
}

