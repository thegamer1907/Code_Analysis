#include <iostream>
using namespace std;

int main(){
    long long int n,t,books;
    cin >> n >> t;
    books = 0;
    long long int tB = 0, timeB = 0,index_p=0; 
    long long int *ai = new long long int[n];
    for(long long int i = 0; i < n; i++){
        cin >> ai[i];
        timeB += ai[i];
        tB++;
        if(timeB>t){
            for(long long int j = index_p; timeB>t && j<=i; j++){
                if(tB>0){tB--;}
                if(timeB>0){timeB-=ai[j];}
                index_p++;
            }
        }
        if(tB > books){
            books = tB;        
        }
    }
    cout << books << endl;
    return 0;
}