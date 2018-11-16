#include <bits/stdc++.h>
using namespace std;

int main()
{
	string num;
	char cur='0';
	int tot=0;
	bool test=0;

	cin >> num;
	for (int i = 0; i < num.length(); i++)
    {
        if (num[i]==cur)
        {
            tot+=1;
        }
        else if (num[i]!=cur)
        {
            cur = num[i];
            tot=1;
        }
        if (tot>=7)
        {
            cout << "YES";
            test = 1;
            break;
        }
    }

    if (test==0)
    {
        cout << "NO";
    }

	return 0;
}
