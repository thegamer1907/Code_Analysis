#include <bits/stdc++.h>

using namespace std;

int main(){

	int n,m;

	scanf("%d %d", &n, &m);

	set <string> repetidas;

	set <string> primeiro;

	int total1;
	int total2;

	total1 = total2 = 0;

	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		primeiro.insert(s);
		total1++;
	}

	for(int i = 0; i < m; i++){
		string s;
		cin >> s;
		if(primeiro.find(s) != primeiro.end()) repetidas.insert(s);
		total2++;
	}

	total1 -= repetidas.size();
	total2 -= repetidas.size();

	if(repetidas.size()&1){
		if(total2 >= total1+1) printf("NO\n");
		else printf("YES\n");
	}
	else{
		if(total1 >= total2+1) printf("YES\n");
		else printf("NO\n");
	}


	return 0;
}
