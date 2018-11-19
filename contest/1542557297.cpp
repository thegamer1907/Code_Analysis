#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string pass;
    int n;
    cin>>pass>>n;
    char word[n][3];
    int a2=0,b2=0;
    for(int i=0;i<n;i++){
        cin>>word[i][0]>>word[i][1];
        if(word[i][0]==pass[1])a2=1;
        if(word[i][1]==pass[0])b2=1;
        if(word[i][0]==pass[0]&&word[i][1]==pass[1]){a2=1;b2=1;}

    }
    if(a2==1&&b2==1)cout<<"YES";
    else cout<<"NO";



    //alo blyat

    return 0;
}
