#include <bits/stdc++.h>
using namespace std;

int c,c1;
int main(){

	char pass[2];

	scanf("%s", pass);

	int n;

	cin >> n;
	char bark[n][3];

	for(int i = 0; i < n; i++)
		scanf("%s", bark[i]);
	
	//char ans[3],ans2[3];
	
	for(int i = 0; i < n; i++){
		if(bark[i][0] == pass[1]){
			//strcpy(ans, bark[i][0]);
			c++;
		}

		if(bark[i][1] == pass[0]){
			//strcpy(ans2, bark[i][1]);
			c1++;
		}
		if(bark[i][0] == pass[0] && bark[i][1] == pass[1]){
			c++;
			c1++;
		}
	}

	if(c > 0 && c1 > 0){
		cout << "YES\n";
	}

	else
		cout << "NO\n";
}


