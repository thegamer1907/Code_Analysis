#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long

int main(){
	int a;cin >>a;
   	string s; cin >> s;
   	char flag = s[0];
   	int count = 0;
   	for (int i =1; i < a;i++)
   	{
   		if (s[i] == flag)
   			count++;
   		else
   			flag = s[i];
   	}
   	cout << count;
    return 0;
}