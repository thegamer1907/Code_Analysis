#include<bits/stdc++.h>
using namespace std;
int H, M, S, X, Y;
int main () {
	cin>>H>>M>>S>>X>>Y;
	if (H==12) H=0;
	if (X>Y) swap(X,Y);
	if (((S>5*X&&S<5*Y)+(60*M+S>300*X&&60*M+S<300*Y)+(120*H+M+S>120*X&&120*H+M+S<120*Y))%3) cout<<"NO\n";
	else cout<<"YES\n";
}
