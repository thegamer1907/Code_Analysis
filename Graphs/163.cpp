#include<iostream>
using namespace std;
int main(){
    int flag=0,t,l;
    cin>>l>>t;
    char d;
    char inpu[l];
    for(int i=0;i<l;i++)
    cin>>inpu[i];
    for(int i=1;i<=t;i++)
    {for(int j=0;j<l-1;j++)
    {
    	if(inpu[j]=='B'&&inpu[j+1]=='G')
	{ d=inpu[j];
	inpu[j]=inpu[j+1];
	inpu[j+1]=d;
	j++;
	}
	
}

}
for(int j=0;j<l;j++)
	cout<<inpu[j];}