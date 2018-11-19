#include "bits/stdc++.h"
using namespace std;

const int MAX=1e5;

int main()
{
	ios_base::sync_with_stdio(false);
	double H,M,S,T1,T2;
	cin>>H>>M>>S>>T1>>T2;
	if(T1<T2)
	swap(T1,T2);
    //3:05
    H+=M/60+S/3600;
    M+=S/60;
	if((H>=T1||H<=T2)&&(M>=T1*5||M<=T2*5)&&(S>=T1*5||S<=T2*5))
    return cout<<"YES",0;
	if((H>=T2&&H<=T1)&&(M>=T2*5&&M<=T1*5)&&(S>=T2*5&&S<=T1*5))
	return cout<<"YES",0;	
	cout<<"NO";
	return 0;
}