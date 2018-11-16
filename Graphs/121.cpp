#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
using namespace std;
int main(){
    int n,m,i;
    char stu[100];
    cin>>n>>m>>stu;
    while(m!=0){
    for(i=0;i<n-1;i++){
        if(stu[i]<stu[i+1]){
            swap(stu[i],stu[i+1]);
            i++;
        }
    }
    m--;
    }
    cout<<stu<<"\n";
    return 0;
}