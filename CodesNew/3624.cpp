#include <iostream>
using namespace std;

int main() {
int n,m;
cin >> n>> m;
int mass[n];
int i,j;
for(i=0;i<n;i++){
    cin >> mass[i];
}

int max = mass[0];
for(i=0;i<n;i++){
    if(mass[i]>max){
        max = mass[i];
    }
}
int k_max = max + m;
if(n==1){
    cout << k_max << " " << k_max;
}else{
int p=0;
for(i=0;i<n;i++){
    if(mass[i]<max){
        p=p+max-mass[i];
        mass[i] = max;
    }
}
int k_min = 0;
if(m-p<=0){
    k_min = max;
}else{
int x = (m - p);
int y = (m-p)%n;
int z = (x - y)/n;
if(y==0){
    k_min = max+z;
}else{
k_min = max + z +1;
}
}
cout << k_min << " " << k_max;
}
return 0;
}
