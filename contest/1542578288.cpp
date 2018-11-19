#include <bits/stdc++.h>
using namespace std;
set<vector<int> > sett;

int main(){
	int n,k,a;
	cin >> n >> k;
	vector<vector<int> > mv;
	for(int i=0;i<n;i++){
		vector<int> vect,v;
		for(int j=0;j<k;j++){
			cin >> a;
			v.push_back(a);
			if(!a) vect.push_back(j);
		}
		if(vect.size()==k){ 
			cout  << "YES\n";
			return 0;
		}
		sett.insert(vect);
		if(vect.size()==1){}
		else if(vect.size()==2){
			vector<int> temp;
			temp.push_back(vect[0]);
			sett.insert(temp);
			temp.clear();
			temp.push_back(vect[1]);
			sett.insert(temp);
		}
		else if(vect.size()==3){
			vector<int> temp;
			temp.push_back(vect[0]);
			sett.insert(temp);
			temp.clear();
			temp.push_back(vect[1]);
			sett.insert(temp);
			temp.clear();
			temp.push_back(vect[2]);
			sett.insert(temp);
			temp.clear();
			temp.push_back(vect[0]); temp.push_back(vect[1]); sett.insert(temp);
			temp.clear(); temp.push_back(vect[1]); temp.push_back(vect[2]); sett.insert(temp);
			temp.clear(); temp.push_back(vect[0]); temp.push_back(vect[2]); sett.insert(temp);
		}
		mv.push_back(v);
	}
	for(int i=0;i<n;i++){
		vector<int> vect;
		for(int j=0;j<k;j++){
			if(mv[i][j]) vect.push_back(j);
		}
		if(sett.find(vect)!=sett.end()){
			cout << "YES\n";
			return 0;
		}
	}

	cout << "NO\n";

	return 0;
}