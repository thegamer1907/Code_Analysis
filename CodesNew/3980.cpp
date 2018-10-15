//Valhalla Siege

#include <bits/stdc++.h>
using namespace std;
/*
int main(){
    int q,n,i,j,muertos=0,atq,total=0;
    vector<int> Q(200000);
    vector<int> N(200000);
    scanf("%d %d",&n,&q);
    for(i=0;i<n;i++){
        scanf("%d",&N[i]);
        total+=N[i];
    }
    Q=N;
    for(i=0;i<q;i++){
        scanf("%d",&atq);
        for(j=muertos;j<n;j++){
            if(atq<=0)break;
            if(atq>=total){N=Q;muertos=0;break;}
            if(atq>=N[j]){
                atq-=N[j];
                N[j]=0;
                muertos++;
            }
            else{
                N[j]-=atq;
                atq=0;
            }
            if(muertos==n){N=Q;muertos=0;}

        }
        printf("%d\n",n-muertos);

    }
}
*/
long long L[200100];
long long a=0,n,d=0;


void BinaryS(long long v){
    long long b=n-1,k;
    while(a<=b){
        k=(a+b)/2;
        if(L[k]-d==v){
            a=k+1;
        }
        if(L[k]-d>v)b=k-1;
        else a=k+1;
    }
    if(a>n-1){
        d=0;
        a=0;
    }
    else{
        d+=v;
    }
}
void mostrar(){
    for(int i=0;i<n;i++){
        cout<<L[i]<<" ";
    }
    cout<<endl;
}
int main(){
    long long q,an,num,cas;
    cin>>n>>q;
    cin>>L[0];
    an=L[0];
    for(int i=1;i<n;i++){
        cin>>num;
        L[i]=an+num;
        an+=num;
    }
    while(q--){
        cin>>cas;
        BinaryS(cas);
        cout<<n-a<<endl;
    }
}
