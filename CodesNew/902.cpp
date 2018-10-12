#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e,e1;
set <string> s,h,k;
set <string>::iterator t,it,wq;
string q,nb;
int main(){
	cin>>a>>b;
	for(c=0; c<a; c++){
		cin>>q;
		s.insert(q);
	}
	for(c=0; c<b; c++){
		cin>>q;
		h.insert(q);
	}
	for(t=s.begin(); t!=s.end(); t++){
		it=h.lower_bound((*t));
		if(it!=h.end()){
			if((*it)==(*t)) k.insert((*t));
		}
	}
	for(t=k.begin(); t!=k.end(); t++){
		if(d==0){
			if(s.size()==0){
				cout<<"NO";
				return 0;
			}
			if(h.size()==0){
				cout<<"YES";
				return 0;
			}
			nb=*t;
			it=t;
			it++;
			h.erase(h.lower_bound((*t)));
			s.erase(s.lower_bound((nb)));
			t=it;
			t--;
		}else{
			if(h.size()==0){
				cout<<"YES";
				return 0;
			}
			if(s.size()==0){
				cout<<"NO";
				return 0;
			}
			nb=*t;
			it=t;
			it++;
			s.erase(s.lower_bound((*t)));
			h.erase(h.lower_bound((nb)));
			t=it;
			t--;
		}
		if(d==0) d=1; else d=0;
	}
	e=s.size();
	e1=h.size();
	if(d==1) e1--;
	if(e1<e){
		cout<<"YES";
	}
	if(e1>e){
		cout<<"NO";
	}
	if(e1==e){
		cout<<"NO";
	}
	return 0;
}