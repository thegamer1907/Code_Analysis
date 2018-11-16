//int _main(){//ot
//	int n;
//	cin >> n;
//	vpii arr(n);
//	cin >> arr;
//	vi a,b;
//	tie(a,b) = split(arr);
//	return max(partial_sum(b-a));
//}
//
// ================================================ 
// ^^^	ABOVE is what I wrote in my editor	^^^
// ------------------------------------------------ 
// vvv	BELOW is automatically generated 	vvv
// ================================================ 
#include <iomanip>
#include <cassert>
#include <vector>
#include <utility>
#include <iostream>
#define pb push_back 
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
template<typename IT>
ostream &print(IT b, IT e, string sep = " ", ostream &stream = cout){
	for(IT it = b; it != e; ++it){
		stream << *it;
		if(it+1 != e) stream << sep;
	} 
	return stream;
}
//template<typename T>
//ostream &print(vector<T> &arr, string sep = " ", ostream &stream = cout){
	//print(all(arr),sep,stream);
	//return stream << '\n';
//}
template<typename IT> istream &read(IT b, IT e, istream &stream = cin){
	for(IT it = b; it != e; ++it) stream >> *it; return stream;
}
template<typename T> ostream &operator<<(ostream &stream, vector<vector<T> > &t){
	stream << "[";
	print(all(t),"],[",stream);
	stream << "]";
	return stream;
}
template<typename T> ostream &operator<<(ostream &stream, vector<T> &t){
	return print(all(t)," ",stream);
}
template<typename T> istream &operator>>(istream &stream, vector<T> &t){
	return read(all(t),stream);
}
template<typename F, typename S> ostream &operator<<(ostream &stream, pair<F,S> &t){
	return stream << t.first << ' ' << t.second;
}
template<typename F, typename S> istream &operator>>(istream &stream, pair<F,S> &t){
	return stream >> t.first >> t.second;
}
template <typename T> 
void print(T x){
	cout << x << '\n';
}
template<typename T>
T sum(vector<T> &arr){
	T ans = 0;
	for(auto x : arr)
		ans += 0;
	return ans;
}
template<typename A, typename B>
pair<vector<A>,vector<B> > split(vector<pair<A,B> > &arr){
	vector<A> l;
	vector<B> r;
	for(auto cur : arr){
		l.pb(cur.first);
		r.pb(cur.second);
	}
	return {l,r};
}
template<typename T>
T _main();
const int MOD = 1e9+7;
const int N = 5e5+5;
template <typename T>
vector<T> partial_sum(vector<T> arr){
	vector<T> ans = arr;
	ans.insert(ans.begin(),0);
	for(int i = 1; i < ans.size(); ++i)
		ans[i] = ans[i-1]+arr[i-1];
	return ans;
}
template<typename T>
vector<T> operator+(const vector<T> &lhs, const vector<T> &rhs){
	vector<T> ans(lhs);
	assert(ans.size() == rhs.size());
	for(int i = 0; i < rhs.size(); ++i)
		ans[i] += rhs[i];
	return ans;
}
template<typename T>
vector<T> operator-(const vector<T> &lhs, const vector<T> &rhs){
	vector<T> ans(all(lhs));
	assert(ans.size() == rhs.size());
	for(int i = 0; i < rhs.size(); ++i)
		ans[i] -= rhs[i];
	return ans;
}
template<typename T>
T max(vector<T> &arr){
	assert(!arr.empty());
	T ans = arr[0];
	for(auto &cur : arr)
		ans = max(ans,cur);
	return ans;
}
template<typename T>
T max(vector<T> &&arr){
	assert(!arr.empty());
	T ans = arr[0];
	for(auto &cur : arr)
		ans = max(ans,cur);
	return ans;
}
int _main(){//ot
	int n;
	cin >> n;
	vpii arr(n);
	cin >> arr;
	vi a,b;
	tie(a,b) = split(arr);
	return max(partial_sum(b-a));
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	cout << fixed << setprecision(12);
	cout << _main() << '\n';
}
