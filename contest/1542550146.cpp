 #include <bits/stdc++.h>
 using namespace std;
int main(){
	int n;
	char a, b, c, d, ad=0, bc=0;
	cin>> a>> b;
	cin>> n;
	for(int i=0; i<n; i++){
		cin>> c>> d;
		if(a==c and b==d) ad=1, bc=1;
		ad |= (a==d);
		bc |= (c==b);
	}
	if(ad and bc) cout<< "yes";
	else cout<< "no";
}