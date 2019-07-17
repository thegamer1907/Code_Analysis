#include<iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <cmath>
#include <climits>
#include <string>
#include <stack>
#include <unordered_set>
#define llg long long int
#define bn 1000000007	
#define pb push_back
#define sad ":("

using namespace std;

int main(){
    llg n,m,k;
    cin>>n>>m>>k;
    vector<llg> p(m);
    for(llg i=0;i<m;i++){
        cin>>p[i];
    }
    llg count=0;
    llg low=1,high=k;
    llg i=0;
    llg j;
    while(i<m){
        if(p[i]>high){
            low = ((p[i]/k) )*k + i +1;
            while(low>p[i]){
                low-=k;
            }
            high = low+k-1;
            // cout<<low<<" "<<high<<endl;
        }
        j=i;
        while(i<m && p[i]>=low && p[i]<=high){
            i++;
        }
        llg diff= i-j;
        if(diff>(llg)0){
            count++;
            high=high+diff;
        }
        else{
            low=high+(llg)1;
            high=high+k;
            // i++;
        }
    }
    cout<<count<<endl;
}