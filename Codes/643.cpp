#include <bits/stdc++.h>
#define all(a) (a).begin(),(a).end()
#define mp make_pair
#define pb push_back

using namespace std;
int get(int num){
	int re= 0 ;
	while(num!=0){
		re += num%10;
		num/=10;
	}
	return re;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // ONLINE_JUDGE
	int a ;
	cin >> a;
	int count = 0 ;
	for(int i = 0 ; i < 11000000 ; i++){
		if(get(i) == 10){
			a--;
			if(a==0){
				cout << i << endl;
				return 0;
			}
		}
	}

	return 0;
}