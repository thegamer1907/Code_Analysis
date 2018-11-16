#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    vector<int> boys;
    vector<int> girls;
    int b, g, d,pairs=0;
    scanf("%d",&b);
    while (b--) {
	scanf("%d", &d);
	boys.push_back(d);
    }
    scanf("%d",&g);
    while (g--) {
	scanf("%d", &d);
	girls.push_back(d);
    }
    sort(boys.begin(),boys.end());
    sort(girls.begin(),girls.end());
    for (int i = 0; i < boys.size(); i++) {
	    for(int j=0;j<girls.size();j++){
		    if((boys[i]-girls[j]<=1)&&(boys[i]-girls[j]>=-1)){
			    boys[i]=1000;
			    girls[j]=1010;
			    pairs++;
		    }
	    }
    }
    cout<<pairs;

    return 0;
}
