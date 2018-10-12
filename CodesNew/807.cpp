#include <set>
#include <iostream>

using namespace std;

int main(int argc, char** argv){

    ios_base::sync_with_stdio(false);
    int n, m; 
    cin >> n >> m; 
    
    set<string> array1;
    set<string> array2;

    for(n; n > 0; n--){
    	string a;
    	cin >> a;
    	array1.insert(a);
    }
    for(m; m > 0; m--){
    	string a;
    	cin >> a;
    	array2.insert(a);
    }

    int common(0);
    for(set<string>::iterator setIter = array1.begin(); setIter != array1.end(); setIter++){
        if(array2.count(*setIter) > 0){
        	common++;
        }
    }

    int u = (common + 1) / 2 + (array1.size() - common);
    int v = (common/2) + (array2.size() - common);

    std::cout << ((u > v) ? "YES" : "NO") << std::endl;

    return 0;
}
