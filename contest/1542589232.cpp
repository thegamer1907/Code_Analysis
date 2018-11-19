#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string all[109];
int n;
string mainStr, ans[2] = {"YES", "NO"};

bool test1()
{
    for(int i = 0; i<n; i++)
        if(all[i] == mainStr) return true;
    return false;
}

bool test2()
{
    bool t1 = false, t2 = false;
    for(int i = 0; i<n; i++)
    {
        if(all[i][0] == mainStr[1]) t1 = true;
        int l = all[i].length();
        if(all[i][l-1] == mainStr[0]) t2 = true;
        
    }
    
    if(t1 && t2) return true;
    return false;
}

int findAns()
{
    if(test1() || test2()) return 0;
    return 1;
}


int main(void)
{
	cin >> mainStr;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	    cin >> all[i];
	    
    cout << ans[findAns()] << endl;	
	
	return 0;
}
