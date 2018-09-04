#include<bits/stdc++.h>
using namespace std;
#define ft first
#define sd second
#define pb push_back
#define mp make_pair
#define sc(n) scanf("%lld", &n)
map<long long,long long> m;
long long sum=0;
vector<long long> v;
void search(string str, string pattern){
	long long l = str.size(),i,L,R,k;
	long long Z[l];
	long long n = str.size();
	L = R = 0;
	for (i = 1; i < n; ++i){
		if (i > R){
			L = R = i;
			while (R<n && str[R-L] == str[R])
				R++;
			Z[i] = R-L;
			R--;
		}
		else{
			k = i-L;
			if (Z[k] < R-i+1)
				Z[i] = Z[k];
			else{
				L = i;
				while (R<n && str[R-L] == str[R])
					R++;
				Z[i] = R-L;
				R--;
			}
		}
	}
	for ( i = l-1; i >= (pattern.size()+1); --i){
		//cout<<Z[i]<<" ";
		if(Z[i]==(l-i)){
			v.pb(l-i);
		}
	}
	for(i=pattern.size()+1;i<l;i++){
		m[Z[i]]++;
		//sum++;
	}
	//cout<<endl;
}
bool cmp(long long a,long long b){
	return a>b;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin>>s;
	string str=s+"$"+s;
	//cout<<str;
	search(str,s);
	long long i;
	//cout<<v.size()<<endl;
	map<long long,long long>::reverse_iterator rit=m.rbegin();
	sort(v.begin(),v.end(),cmp);
	for(i=0;rit!=m.rend() && i<v.size();rit++){
		sum+=(rit->sd);
		if(rit->ft==v[i]){
			//cout<<v[i]<<" "<<sum<<endl;
			if(sum>=3){
				cout<<s.substr(0,v[i]);
				return 0;
			}
			i++;
		}
		
	}
	cout<<"Just a legend";
	return 0;
}
