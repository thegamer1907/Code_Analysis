#include<bits/stdc++.h>
using namespace std;

int main(){

int p,e;
cin >> p >> e;

set<string>s;

for(int i=0;i<p+e;i++){
    string k;
    cin >> k;
    s.insert(k);
}

if(p>e)
    cout << "YES" << endl;
else if(p<e)
    cout << "NO" << endl;
else{
    if(s.size()%2==0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}


}
