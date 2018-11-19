#include<bits/stdc++.h>
using namespace std;
#define EPS 0
int main(){
int ht, mt, st, t1t, t2t; 
double h, m, s, t1, t2;
cin>>ht>>mt>>st>>t1t>>t2t;
ht%=12;
mt%=60;
st%=60;
t1t%=12;
t2t%=12;
h=ht; 
m=mt; 
s=st; 
t1=t1t;
t2=t2t;
m+=(s/60);
h+=(m/60);
s*=(360/60);
m*=(360/60);
h*=(360/12);
t1*=(360/12);
t2*=(360/12);
vector<double> v;
v.push_back(m);
v.push_back(s);
v.push_back(h);
sort(v.begin(),v.end());
if(t2 > t1)swap(t1, t2);
//for(auto x: v)cout<<x<<" ";
//cout<<endl<<t1<<" "<<t2<<endl;
bool left, right;
left = right = true;
for(int i=0;i<3;i++){
    if(v[i] > t2 && v[i] < t1)
    left = false;
    if(v[i] > t1 || v[i] < t2)
    right = false;
}
if(left || right)
cout<<"YES";
else
cout<<"NO";
}