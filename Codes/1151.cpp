#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;
int cmp(string x, string y)
{
    if (x==y)
        return 0;
    if (x<y)
        return -1;
    return 1;
}
void quick(string s[], int left, int right)
{
	if (left >= right)
		return;
	int i = left, j = right;
	int pivot = left + rand() % (right - left);

	while (i <= j)
	{

		while (cmp(s[i],s[pivot]) < 0) i++;
		while (cmp(s[j],s[pivot]) > 0) j--;
		if (i <= j)
		{
			swap(s[i], s[j]);
			i++; j--;
		}
	}


	if (left < j) quick(s, left, j);
	if (i < right) quick(s, i, right);
}
bool cmpsort(string x, string y)
{
    return x<y;
}
int main()
{
    srand(time(NULL));
    int n,m;
    string s[3000];
    cin>> n >> m;
    for (int i=0; i<n+m; i++)
        cin>>s[i];
    //quick(s, 0, n+m-1);
    sort(s,s+n+m,cmpsort);
    int same=0;
    for (int i=1; i<n+m; i++)
    {
        if (s[i]==s[i-1])
            same++;
    }
    if (n-same > m-same)
        cout<<"YES";
    else if (m-same > n-same)
        cout<<"NO";
    else if (same%2 != 0)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
