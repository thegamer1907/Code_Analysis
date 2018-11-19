#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 205;

string A[MAXN + 5];
string s;

int N;
int main()
{
	cin>>s;
	cin>>N;
	for(int i = 1; i <= N; i++) cin>>A[i];
	bool check = false;
	for(int i = 1; i <= N; i++){
		if(A[i] == s) check = true;
	}
	for(int i = 1; i <= N; i++){
		for(int j = 1; j <= N; j++){
			string x = "";
			x += A[i][1], x += A[j][0];
			if(x == s) check = true;
		}
	}
	if(check) printf("YES\n");
	else printf("NO\n");
}