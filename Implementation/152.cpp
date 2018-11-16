#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/rope>

using namespace std;
using namespace __gnu_pbds;

//typedef tree<int, null_type, less <int>, rb_tree_tag, tree_order_statistics_node_update> order_tree;
//*X.find_by_order(1)
//	*x.order_of_key
typedef long long ll;
typedef long double ld;
typedef pair <int, int> pii;

#define endl "\n"
#define mp make_pair

int n, a, b;
vector <int> cur, pos;
int result = -1;

int main()
{
    int st = 0;

	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);

	cin >> n >> a >> b;

	if (a > b)
        swap(a, b);

	for (int i = 1; i <= n; i++)
        pos.push_back(i);

    while (pos.size() != 2) {
            st++;

        for (int i = 0; i < pos.size(); i += 2) {
            if ((pos[i] == a) && (pos[i + 1] == b)) {
                result = st;

                if ((result != -1) && ((1 << result) == n))
        result = -1;

                if (result == -1)
                    cout << "Final!";
                else
                cout << st;

                return 0;
            }

            if (pos[i + 1] < a)
                cur.push_back(pos[i]);
            else if (pos[i] > b)
                cur.push_back(pos[i]);
            else if ((pos[i] == a) || (pos[i + 1] == a))
                cur.push_back(a);
            else if ((pos[i] == b) || (pos[i + 1] == b))
                cur.push_back(b);
            else
                cur.push_back(pos[i]);
        }

        pos = cur;
    }

    if ((result != -1) && ((1 << result) == n))
        result = -1;

	if (result == -1)
        cout << "Final!";
    else
        cout << result;

    cout << endl << endl;

    return 0;
}
