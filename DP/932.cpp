#include <iostream>

using namespace std;

int main(){
int n;
int v[105];

cin>>n;

int as=0;
for(int i=0; i<n; i++){
int a;
    cin>>v[i];
    if(v[i])
        as++;
}

if(as==n){
    cout<<as-1;
    return 0;
}

int ans=0;
for(int i=0; i<n; i++){
int c=0;
    for(int j=i; j<n; j++){
        if(v[j])
            c--;
        else
            c++;
    ans=max(ans,c);
    }
}

cout<<as+ans;
return 0;
}
