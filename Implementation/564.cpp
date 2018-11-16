#include <iostream>
using namespace std;
int main () {
int n,k,no=0;
cin>>n>>k;
int seka[101];
for (int i=0;i<n;i++){
    cin>>seka[i];
}
for (int i=0;i<n;i++){
    if (seka[i]>=seka[k-1]&&seka[i]>0){
      no++;
    }
}

cout<<no;
return 0;
}
