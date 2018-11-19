#include <bits/stdc++.h>
using namespace std;
int main(){
string a;
cin >> a;

int n;
cin >> n;

string CAN[100];

for(int i=0;i<n;i++){
cin >> CAN[i];
    if(CAN[i]==a){
    cout << "YES";
    return 0;
    }
}

int taippat=0;
int atvirksciai=0;

for(int i=0;i<n;i++){

if(taippat==0){
if(CAN[i].at(1)==a[0])taippat++;
}
 if(taippat==1){
if(CAN[i].at(0)==a[1])taippat++;
}

if(atvirksciai==0){
if(CAN[i].at(0)==a[1])atvirksciai++;
}
if(atvirksciai==1){
if(CAN[i].at(1)==a[0])atvirksciai++;
}


}




if(taippat==2||atvirksciai==2)cout << "YES";
else cout << "NO";

return 0;
}
