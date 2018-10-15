#include <bits/stdc++.h> 
using namespace std; 
int main() { 
long long n,l=0,r=100000000000000000,s,max=0; 
cin >> n; 
vector <int> v(n); 
for (int i=0;i<n;i++){ 
cin >> v[i]; 
if(v[i]>max) 
max=v[i]; 
} 
l=max;
while (r-l>1){ 
s=0;
int d=(r+l)/2;
for (int i=0;i<n;i++) 
	s+=d-v[i];
if(s>=max && s>=d) 
r=d; 
else 
l=d;  
}  
s=0;
for (int i=0;i<n;i++){  
s+=l-v[i]; 
} 

if(s>=max && s>=l){ 
cout << l; 
return 0; 
}  
cout << r; 
return 0; 
}