#include <cmath>
#include <ctime>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

#define N  2*2*2*2
#define ll long long int

int ceil_d(int a, int b){ //ceil(a/b)
    if(a%b == 0){
        return a/b;
    }
    else
        return a/b+1;
}

int a[N];

int main() {
    int n, k;
    cin>>n>>k;
    
    for(int i=0; i<N; i++) a[i] = 0;
    
    int num,temp;
    for(int i=0; i<n; i++){
        num = 0;
        for(int j=0; j<k; j++){
            cin>>temp;
            num += temp<<j;
        }
        a[num]++;
    }
    
    ///////////////////
    
    if(a[0]){
        cout<<"YES"<<endl;
        return 0;
    }
    
    
    ///////////////////
    
    if(k==1){
        cout<<"NO"<<endl;
        return 0;
    }
    
    
    else if(k==2){
        if(a[1] && a[2]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        return 0;
    }
    
    
    else if(k==3){
        if((a[1]>0)+(a[2]>0)+(a[4]>0)>=2){
            cout<<"YES"<<endl;
            return 0;
        }
        else{
            for(int j=0; j<k; j++){
                if(a[1<<j]){
                    if(a[(1<<k)-1 - (1<<j)]){
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
            }
        }
        cout<<"NO"<<endl;
        return 0;
    }
    else if(k==4){
        if((a[1]>0)+(a[2]>0)+(a[4]>0)+(a[8]>0)>=2){
            cout<<"YES"<<endl;
            return 0;
        }
        else if((a[1]>0)+(a[2]>0)+(a[4]>0)+(a[8]>0) == 1){
            int j=0;
            while(a[(1<<j)]==0)j++;
            if(a[(1<<k)-1 - (1<<j)]){
                cout<<"YES"<<endl;
                return 0;
            }
            for(int i=0; i<k; i++){
                if(i!=j){
                    if(a[(1<<k)-1 - (1<<j) - (1<<i)]){
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
            }
        }
        else{
            //Tester 1100 && 0011
            for(int i=0; i<k; i++){
                for(int j=i+1; j<k; j++){
                    if(a[(1<<i) + (1<<j)] && a[(1<<k)-1 - (1<<i) - (1<<j)]){
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
            }
        }
        cout<<"NO"<<endl;
        return 0;
    }
    
    return 0;
}
