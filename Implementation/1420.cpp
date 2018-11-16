
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int num,time;
    scanf("%d%d",&num,&time);
    string theQue;
    cin>>theQue;
    while(time){
        int first=0,second=1;
        for(int i=0; i<num; i++){
            if(theQue[first]=='B' && theQue[second] == 'G'){
                //swap
                theQue[first] = 'G';
                theQue[second] = 'B';
                first=second+1;
                second = first+1;
            }else{
                first++;
                second++;
            }
        }
        time--;
    }
    
    cout<<theQue<<endl;
    return 0;
}

