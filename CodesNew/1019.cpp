#include <iostream>
#include <string>
#include <set>
using namespace std;
int n,m,x,mx,j,k,yes,no;
set <string>s;
string s1;
int main() {
cin>>n>>m;
for (int i=0; i<n+m; i++){
        cin>>s1; s.insert(s1);
}
x=n+m-s.size();
if (x%2==1) n++;
if (n>m) cout<<"YES";
    else cout<<"NO";

}
