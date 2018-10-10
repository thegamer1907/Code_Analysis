#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,l;
    double q;
    double numero;
    int correcto;
    int flag=-1;
    cin>>n>>l;
    vector <long long> v;
    vector <long long> p;
    vector <long long> aux;
    while(n--){
        cin>>numero;
        v.push_back(numero);
    }
    sort(v.begin(),v.end());
    p.push_back(v[0]);
    p.push_back(l-v.back());
    for(int i=0;i<v.size();i++){
        if(i!=v.size()-1){
            q=(v[i+1]-v[i])/2;
            p.push_back(q);
            aux.push_back(q);
        }
    }
    sort(p.begin(),p.end());
    for(int i=0;i<aux.size();i++){
        if(p.back()==aux[i]){
            correcto=i;
            flag=0;
            break;
        }
    }
//    for(int i=0;i<v.size();i++){
//        cout<<v[i]<<" ";
//    }
    long long result=p[p.size()-1];
    if(flag==0){
        if((v[correcto+1]-v[correcto])%2!=0)cout<<result<<".5";
        else cout<<result;
    }
    else{
        if(result==v[0]){
            //if(v[0]%2==0) cout<<result;
            //else cout<<result<<".5";
            cout<<result;
            return 0;
        }
        if(result==(l-v.back())){
            //if((l-v.back())%2==0) cout<<result;
            //else cout<<result<<".5";
            cout<<result;
            return 0;
        }
    }
}