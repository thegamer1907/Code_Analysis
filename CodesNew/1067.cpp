#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll int n,s;
	cin >> n >> s;
	ll int a[n];
	for(ll int i=0;i<n;i++){
		cin >> a[i];
	}
	ll int k=1;
	vector<ll int> v(a,a+n);
	for(ll int i=0;i<n;i++){
		v[i] += (i+1)*k;
	}
	sort(v.begin(),v.end());
	if(v[0] > s){
		cout <<"0 0";
		return 0;
	}
	ll int x=0,y=n,z=0;
	z = (x+y+1)/2;
	ll int pre = 0;
	ll int prei = 0;
	while(x<y){
		//cout << x << " " << z << " " << y << endl;
		ll int temp = 0;
		ll int tempi = 0;
		vector<ll int> v(a,a+n);
		for(ll int i=0;i<n;i++){
			v[i] += (i+1)*z;
		}
		sort(v.begin(),v.end());
		int flag = 0;
		for(ll int i=0;i<z;i++){
			if(temp+v[i] <= s){
				temp += v[i];
				tempi++;
			}
			else{
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			//cout << "flag = 1" << endl;
			y = z-1;
			z = (x+y+1)/2;
			continue;
		}
		else{
			if(tempi > prei){
				pre = temp;
				prei = tempi;	
			}
			//cout <<"prei = " <<  prei << endl;
			x = z;
			z = (x+y+1)/2;
		}
	}
	cout << prei << " " << pre;
}
