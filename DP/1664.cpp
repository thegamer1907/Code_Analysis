#include <bits/stdc++.h>
using namespace std;

int main(){
	int i;
	string str;
	cin >> str;

	int l=str.size();

	int map[3]={0,0,0};

	if(l<4){
		cout << "NO";
		return 0;
	}

	for(i=0;i<l-2;){
		if(str[i]=='B' && str[i+1]=='A' && str[i+2]=='B'){
			map[2]++;i+=3;
		}
		else if(str[i]=='A' && str[i+1]=='B' && str[i+2]=='A'){
			map[2]++;i+=3;
		}
		else if(str[i]=='A' && str[i+1]=='B'){
			map[0]++;i++;
		}
		else if(str[i]=='B' && str[i+1]=='A'){
			map[1]++;i++;
		}
		else i++;
	}

	if(i==l-2){
		if(str[i]=='A' && str[i+1]=='B'){
			map[0]++;
		}
		else if(str[i]=='B' && str[i+1]=='A'){
			map[1]++;
		}
	}

	if(map[0] && map[1]||map[0] && map[2]||map[1] && map[2]||map[2]>=2)cout << "YES";
	else cout << "NO";

	return 0;
}