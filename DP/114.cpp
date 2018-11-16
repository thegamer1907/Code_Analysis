#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#define ll long long
using namespace std;
int main(){
    ll int i,a,g,b,team=0,j;
    int boy[110],girl[110];
    cin>>b;
    for(i=0;i<b;i++) cin>>boy[i];
    cin>>g;
    for(i=0;i<g;i++) cin>>girl[i];

    sort(boy,boy+b);
    sort(girl,girl+g);


    for(i=0;i<b;i++){
        for(j=0;j<g;j++){
            if(abs(boy[i]-girl[j])<2)
            {

                team++;
                girl[j]=-5;
                break;
            }
        }
    }
    cout<<team<<endl;


}