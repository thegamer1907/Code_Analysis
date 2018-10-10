#include <iostream>
#include <set>
using namespace std;
set <string> s;
int main() {
	
	int x,y;
	cin>>x>>y;
	string a[x],b[y];
	int u=y;int si=x;
//	cout<<u;
	for (int i=0;i<x;i++){
		cin>>a[i];
		s.insert(a[i]);
	}
	for (int i=0;i<y;i++){
		cin>>b[i];
		s.insert(b[i]);
		if (si!=s.size()){
			si++;
			u--;
		}
	}

    if (x>y)cout<<"YES";
    else if (y>x)cout<<"NO";
    else {
        if (u%2==0)cout<<"NO";
        else cout<<"YES";
    }
	//cout<<u<<endl<<x<<endl<<y<<endl<<si;
	return 0;
}