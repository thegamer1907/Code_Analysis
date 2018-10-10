#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>


using namespace std;



const int MAXN = 1e6+10;


string BADSTRING = "Just a legend";
string str;
int N;
int kmp[MAXN];


void input(){

	getline(cin, str);

	str = " " + str;

	N = (int)str.size() - 1;
}


void KMPFunction(){


	kmp[0] = 0;
	kmp[1] = 0;
	int other = 0;

	for(int i = 2 ; i <= N ; i++){

		while(other > 0 && str[other+1] != str[i])
			other = kmp[other];

		if(str[other+1] == str[i])
			other++;

		kmp[i] = other;
	}

	//for(int i = 1 ; i <= N ; i++)
	//	cout << "i = " << i << ", kmp = " << kmp[i] << ", ch = " << str[i] << endl;
}


string solve(){

	if(kmp[N] == 0)
		return BADSTRING;

	int ans1 = 0;
	for(int i = 1 ; i < N ; i++)
		if(kmp[i] == kmp[N])
			ans1 = kmp[N];

	int ans2 = kmp[kmp[N]];

	if(ans1 > 0 && ans1 >= ans2)
		return str.substr(1, kmp[N]);
	else if(ans2 > 0 && ans2 >= ans1)
		return str.substr(1, kmp[kmp[N]]);
	else
		return BADSTRING;
}


int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);


	input();
	KMPFunction();
	cout << solve();


	return 0;
}


