#include <iostream>
#include <string>
using namespace std;

int main() {
    int n,t;
    
    cin>>n>>t;
    char str[n];
    cin>>str;
    int i,j;
    while(t!=0)
    {
    for(i=0;i<n;i++)
    {
        if(str[i]=='B'&&str[i+1]=='G')
        {
            str[i]='G';
            str[i+1]='B';
            i=i+1;
        }
    }
    --t;
    }
    cout<<str;
	// your code goes here
	return 0;
}
