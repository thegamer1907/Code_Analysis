#include<bits/stdc++.h>
using namespace std;
int H, M, S, X, Y;
bool A, B;
int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin>>H>>M>>S>>X>>Y;
	A=1;
	B=1;
	H=H%12;
	if (X>Y) {
		swap(X,Y);
	}
	if (S>5*X&&S<5*Y) {
		B=0;
	}
	else {
		A=0;
	}
	if (60*M+S>300*X&&60*M+S<300*Y) {
		B=0;
	}
	else {
		A=0;
	}
	if (120*H+M+S>120*X&&120*H+M+S<120*Y) {
		B=0;
	}
	else {
		A=0;
	}
	if (A||B) {
		cout<<"yes\n";
	}
	else {
		cout<<"no\n";
	}
}
