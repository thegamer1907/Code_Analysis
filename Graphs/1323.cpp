#include<iostream>

using namespace std;

int main(){
    int a,b,vet[30000],flag = 0;
    cin >> a >> b;
    for(int x=1; x<a; x++){
        cin >> vet[x];
    }
    for(int x=1; x<a;){
        if((x+vet[x]==b)){flag = 1;x = (x+vet[x]);break;}
        else if(x+vet[x]>b)break;
        else {flag = 0;x = (x+vet[x]);}
    }
    if(flag)cout << "YES" << endl;
    else cout << "NO" <<endl;
    return 0;
}
/* 1537563165296 */
