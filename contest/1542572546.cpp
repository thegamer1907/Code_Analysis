#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int h,m,s,t1,t2;

	scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);

	bool deu = true;

	m /= 5;
	s /= 5;

	if(h == 12) h = 0;

	int salvo = t1;

	if(t1 == 12) t1 = 0;
	if(t2 == 12) t2 = 0;

	while(t1 != t2){

		if(t1 == h) deu = false;
		if(t1 == m) deu = false;
		if(t1 == s) deu = false;
		
		t1++;

		if(t1 == 12) t1 = 0;
	}

	if(deu){
		printf("YES\n");
		return 0;
	}

	deu = true;

	t1 = salvo;

	if(t1 == 12) t1 = 0;
	if(t2 == 12) t2 = 0;

	while(t1 != t2){

		if(t2 == h) deu = false;
		if(t2 == m) deu = false;
		if(t2 == s) deu = false;
		
		t2++;

		if(t2 == 12) t2 = 0;
	}

	if(deu){
		printf("YES\n");
	}
	else printf("NO\n");	

	return 0;
}