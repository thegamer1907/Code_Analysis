#include <algorithm>
#include<fstream>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef long long ll;

long long digsum (long long n){
    long long m=n;
    long long dsum=0;
    while (m>0){
        dsum+=m%10;
        m=m/10;
    }
    return dsum;
}

int main(){
    //ios_base::sync_with_stdio(false);
   long long n;
   cin>>n;
   long long i=1;
   while (n>0){
        if (digsum(i)==10){
            n--;
        }
        i++;
   }
   cout<<i-1;
    return 0;
}
