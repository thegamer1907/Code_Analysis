#include <bits/stdc++.h>

using namespace std;

int const SIZE = (int)1e5;

int main()
{
	int A[3], t1, t2;
	cin >> A[0] >> A[1] >> A[2] >> t1 >> t2;

    A[0] = (A[0] * 10 + (int)ceil((A[1] * 60 + A[2]) / 1800.0)) % 120;
    A[1] = (A[1] * 2 + (int)ceil(A[2] / 60.0)) % 120;
    A[2] *= 2;
    t1 = (t1 % 12) * 10;
    t2 = (t2 % 12) * 10;
    if (t2 < t1)
		swap(t1, t2);

    bool ans1 = true, ans2 = true;
    for (int i = 0; i < 3; i++)
    {
		if ((A[i] > t1) && (A[i] < t2))
			ans1 = false;
		if ((A[i] > t2) || (A[i] < t1))
			ans2 = false;
    }

    if (ans1 || ans2)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}
