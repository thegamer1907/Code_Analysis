#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	int boys[102],girls[102];

	cin >> n;
	for(int i=0;i<n;i++){
		cin >> boys[i];
	}

	cin >> m;
	for(int j=0;j<m;j++){
		cin >> girls[j];
	}

	sort(boys,boys+n);
	sort(girls,girls+m);

	int pairs=0,i=0,j=0;

	while(i<n && j<m){
		if(boys[i]-girls[j]<-1){
			i++;
		}
		else if(boys[i]-girls[j]>1){
			j++;
		}
		else{
			i++;j++;
			pairs++;
		}
	}

	cout << pairs;
	return 0;

}