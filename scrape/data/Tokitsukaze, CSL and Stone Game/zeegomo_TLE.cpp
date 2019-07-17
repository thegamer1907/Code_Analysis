#include <bits/stdc++.h>
        using namespace std; 
        using ll = long long;
        signed main() { 
        	cin.tie(0);
        	cin.sync_with_stdio();
        	int n; 
        	cin>>n;
        	vector<int> v(n);
        	unordered_map<int, int> m;
        	for(int &i : v){
        		cin>>i;
        		m[i]++;
        	}
        	int nm = 0;
        	int pe;
        	for(auto &p : m){
        		if(p.second > 2){
        			cout<<"cslnb"<<endl;
        			return 0;
        		}
        		if(p.second > 1){
        			nm++;
        			pe = p.first;
        		}
        	}
        	if(nm >= 2 || nm && m[pe-1] || nm && pe == 0){
        		cout<<"cslnb"<<endl;
        		return 0;
        	}
        	sort(v.begin(), v.end());
        	ll t = 0;
        	t += v[0];
        	v[0] = 0;
        	for(int i = 1; i < n; i++){
        		t += v[i]-v[i-1]-1;
        		v[i] = v[i-1]+1;
        	}
        	if(t%2){
        		cout<<"sjfnb"<<endl;
        	}else{
        		cout<<"cslnb"<<endl;
        	}
        }