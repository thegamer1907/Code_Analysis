# include <bits/stdc++.h>
# define fi(i, bd, kt) for(int i = bd; i <= kt; i++)
# define fd(i, bd, kt) for(int i = bd; i >= kt; i--)
using namespace std;
long long n;

long long _Calculate(long long gi){
	long long rt = 0, temp = n;
	while(temp > 0){
		if(temp >= gi)	rt += gi;
		else rt += temp;
		temp -= gi;
		temp -= temp/10;
	}
	return rt;
}

long long _Find(){
	long long gi, l = 1ll, r = n/2, h = (n+1)/2;
	while(l < r){
		gi = (l+r)/2;
		if(_Calculate(gi) >= h){
			r = gi;
		}else{
			l = gi;
		}
		if(l+1 == r){
			if(_Calculate(l) >= h) r = l;
			else l = r;
			break;
		}
	}
	return l;
}

int main(){
	cin >> n;
	cout << _Find();
	return 0;
}

