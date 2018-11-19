#include <cmath>
#include <ctime>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <set>

using namespace std;

#define N 105
#define ll long long int

float dire_temps(clock_t t0)
{
    return (float)(clock()-t0)/CLOCKS_PER_SEC;
}

int GCD(int a, int b) {return (b==0?a:GCD(b, a%b));}


int main() {
   
    string pass;
    int n;
    cin>>pass;
    cin>>n;
    vector<string> mots(n);
    bool isPossible = false;
    bool hasa = false;
    bool hasb = false;
    for(int i=0; i<n; i++){
        cin>>mots[i];
        if(mots[i] == pass){
            isPossible = true;
        }
        if(mots[i][0] == pass[1]){
            hasb = true;
        }
        if(mots[i][1] == pass[0]){
            hasa = true;
        }
    }
    
    if(isPossible || (hasa && hasb)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}
