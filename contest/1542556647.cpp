#include <iostream>
#include <algorithm>
using namespace std;

int num[3];
int check(int x){
    if(x>num[0]&&x<=num[1]) return 1;
    else if(x>num[1]&&x<=num[2]) return 2;
    else return 3;
}

int main(){
    int h,m,s,t1,t2;
    cin>>num[0]>>num[1]>>num[2]>>t1>>t2;
    num[1]/=5;num[2]/=5;
    sort(num,num+3);
    if(check(t1)==check(t2)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
