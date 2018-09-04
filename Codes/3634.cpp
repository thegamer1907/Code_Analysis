#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define clr(t, val) memset(t, val, sizeof(t))

#define all(v)  v.begin() , v.end()
#define SZ(v) ((int)(v).size())

typedef long long Long;
typedef vector<int> vInt;
typedef vector<vInt> vvInt;
typedef vector<string> vStr;
typedef vector<vStr> vvStr;
typedef pair<int, int> Pair;
typedef pair<Long, Long> PairLong;
typedef vector<Pair> vPair;
typedef vector<vPair> vvPair;
typedef vector<PairLong> vPairLong;
typedef vector<Long> vLong;
typedef tuple<int, int, int> Tuple;
typedef vector<Tuple> vTuple;
typedef long double LongDouble;

const int INF = INT_MAX;

vInt read(int len) {
	vInt ans(len);
	REP (i, len) {
		scanf("%d", &ans[i]);
	}
	return ans;
}

vTuple getFrom(vInt &a, vInt &b) {
	vTuple ans;
	REP (i, SZ(a)) {
		ans.push_back(make_tuple(a[i], b[i], 0));
	}
	sort(all(ans), [](Tuple tripleA, Tuple tripleB){
		return get<1>(tripleA) < get<1>(tripleB);
	});
	int minimum = INF;
	REP (i, SZ(ans)) {
		minimum = min(minimum, get<0>(ans[i]));
		get<2>(ans[i]) = minimum;
	}
	return ans;
}

int main() {
	int target, len1, len2;
	while (scanf("%d%d%d", &target, &len1, &len2) == 3) {
		int initialSeconds;
		int manaPool;
		scanf("%d%d", &initialSeconds, &manaPool);
		vInt seconds = read(len1);
		vInt mana1 = read(len1);
		
		seconds.push_back(initialSeconds);
		mana1.push_back(0);
		
		vTuple spells1 = getFrom(seconds, mana1);
		/*
		for (auto tuple:spells1) {
			cout << get<0>(tuple) << " " << get<1>(tuple) << " " << get<2>(tuple) << endl;
		}
		*/
		vInt potions = read(len2);
		vInt mana2 = read(len2);
		
		potions.push_back(0);
		mana2.push_back(0);
		
		Long best = LLONG_MAX;
		REP (i, SZ(potions)) {
			int curMana = manaPool - mana2[i];
			if (curMana >= 0) {
				int curTarget = max(0, target - potions[i]);
				int pos = upper_bound(all(spells1), 
					make_tuple(0, curMana, 0),  
					[](Tuple tripleA, Tuple tripleB){
						return get<1>(tripleA) < get<1>(tripleB);
					}
				) - spells1.begin();
				pos --;
				int minSeconds = get<2>(spells1[pos]);
				best = min(best, (Long)minSeconds * curTarget);
			}
		}
		
		printf("%lld\n", best);
	}
}

