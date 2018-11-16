
#include<iostream>
using namespace std;


string input;

int main(void){
int n,t;
cin>>n>>t;
cin>>input;
for(int i=0;i<t;i++)
    for(int j=0;j<n-1;j++)
        if(input[j]=='B'&&input[j+1]=='G')
            {
                input[j]='G';
                input[j+1]='B';
                j++;
            }
cout<<input;
}
