# include <iostream>
using namespace std;
int main (void){
    int n,m,s,sum,max,mink,maxk;
    cin>>n>>m;
    int *a=new int [n];
    sum=0;
    max=0;
    for (int i=0;i<n;i++){
        cin>>s;
        max=max>s?max:s;
        sum+=s;
    }
    mink=(sum+m)/n;
    if ((sum+m)%n!=0){
        mink++;
    }
    if (mink<max){
        mink=max;
    }
    maxk=max+m;
    cout<<mink<<" "<<maxk<<endl;
    return 0;
}
