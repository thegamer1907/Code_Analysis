#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>
using namespace std;
int main(){
    int n,i,c,l,ab=0,ba=0;
    char word[100050];
    cin>>word;
    //cout<<word<<"\n";
    l=strlen(word);
    for(i=0;i<l-1;i++){
        if(word[i]=='A'&&word[i+1]=='B'&&ab==0){
            //word[i]='0';
            i++;
            ab++;
            ba=1;
        }
        else if(word[i]=='B'&&word[i+1]=='A'&&ba==1){
            i++;
            ba++;
        }
        if(ab==1&&ba>1){
            //cout<<ab<<" "<<ba<<endl;
            cout<<"YES\n";
            return 0;

        }
    }
    ab=0;
    ba=0;

    for(i=0;i<l-1;i++){
        if(word[i]=='A'&&word[i+1]=='B'&&ab==1){
            //word[i]='0';
            i++;
            ab++;
        }
        else if(word[i]=='B'&&word[i+1]=='A'&&ba==0){
            i++;
            ba++;
            ab=1;
        }
        if(ab>1&&ba==1){
       // cout<<ab<<"   "<<ba<<endl;

        cout<<"YES\n";
        return 0;

        }
    }

    cout<<"NO\n";
    return 0;
}
