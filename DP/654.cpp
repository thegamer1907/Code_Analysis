#include <cstdio>
#include <cstring>
#include<iostream>
using namespace std;
//const long long N= 1e5+1;
char ch[100001];
int queries;
int first,second;
int a[100001];
int main()
{

cin>>ch;
cin>>queries;
int len=strlen(ch);
	a[1]=0;
	for(int i=1;i<len;i++){
		if(ch[i-1]==ch[i]){
			a[i+1]=a[i]+1;
		}
		else
			a[i+1]=a[i];
	}
	while (queries--)
	{
		cin>>first>>second;
		cout<<a[second]-a[first]<<endl;
	}
    return 0;
}