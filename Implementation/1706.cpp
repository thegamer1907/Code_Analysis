/*  : Om Ganeshaay Namah:

~~~~~~~~~~~~~~~~~~~~~~~~~       All hail l0fty.WhizZ      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


This is Shreyas Iyer's code! My handle in Codechef,
Hackerrank is : shreyasiyer_14.

College: International Institute of Information Technology, Bangalore.

Oh and by the way, you can always challenge me in Counter Strike! Prepare to get rekt!
*/
#include <bits/stdc++.h>

using namespace std;

typedef int i;
typedef long int l;
typedef long long int ll;
typedef float f;
typedef long double lf;
typedef char c;

#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define s(x) cin >> x
#define s2(x,y) cin >> x >> y
#define p(x) cout << x << endl
#define p2(x,y) cout << x << y << endl
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define f(i,a,n) for (int i=a;i<n;i++)
#define fl(i,a,n) for (long int i=a;i<n;i++)
#define fll(i,a,n) for (long long int i=a;i<n;i++)
#define pb push_back

//Code starts Here!
void computeLPSArray(string pat, int M, int* lps);

void KMPSearch(string pat, string txt, bool &res) {
    int M = pat.length();
    int N = txt.length();

    int lps[M];
    computeLPSArray(pat, M, lps);

    int i = 0;
    int j = 0;
    while (i < N) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }

        if (j == M) {
            res = true;
            j = lps[j - 1];
            return;
        }

        else if (i < N && pat[j] != txt[i]) {
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
}

void computeLPSArray(string pat, int M, int* lps) {
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else {
            if (len != 0) {
                len = lps[len - 1];
            }
            else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

int main(void) {
    FASTER;
    string text;
    s(text);
    string pat1 = "1111111";
    string pat2 = "0000000";
    bool done = false;
    KMPSearch(pat1, text, done);
    if (done) {
        p("YES");
        return 0;
    }
    KMPSearch(pat2, text, done);
    if (done) {
        p("YES");
    } else {
        p("NO");
    }
    return 0;
}
