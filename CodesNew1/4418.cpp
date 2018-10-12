#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;
const int MAXN = 500005;

int n;
vector<char> vec[MAXN];

inline void read( int i ){
	char ch;
	while( ch = (char)getchar(), ch != '#' );
	vec[i].push_back(ch);
	while( ch = (char)getchar(), ch != '\n' )
		vec[i].push_back(ch);
}

inline void print( int i ){
	for( int j = 0, en = (int)vec[i].size(); j < en; ++j )
		printf( "%c", vec[i][j] );
	puts( "" );
}

int main(){
	scanf( "%d", &n );
	for( int i = 1; i <= n; ++i ) read(i);
	for( int i = n-1; i >= 1; --i ){
		bool flag = 1;
		int en = min( (int)vec[i].size(), (int)vec[i+1].size() );
		for( int j = 0; j < en; ++j ){
			if( vec[i][j] < vec[i+1][j] ){
				flag = 0; break;
			} else if( vec[i][j] > vec[i+1][j] ){
				vec[i].erase( vec[i].begin()+j, vec[i].end() );
				flag = 0; break;
			}
		}
		if(flag) vec[i].erase( vec[i].begin()+en, vec[i].end() );
	}
	for( int i = 1; i <= n; ++i ) print(i);
	return 0;
}
