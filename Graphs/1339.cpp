#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <sstream>
#include <fstream>
#include <random>

using namespace std;

class Node{
public:
	int label;
	Node* neighbour;
	Node(int label){
		this->label = label;
		this->neighbour = NULL;
	}
};

void isReachable(int t, vector< Node* >& graph){
	Node* root = graph[1];
	while(root != NULL){
		if(root->label == t){
			cout << "YES" << endl;
			return;
		}
		root = root->neighbour;
	}
	cout << "NO" << endl;
}

int main(){
	int n,t,elem;
	cin >> n >> t;
	vector< Node* > graph(n);
	for(int i = 1; i < n+1; i++){
		graph[i] = new Node(i);
	}
	for(int i = 1; i < n; i++){
		cin >> elem;
		graph[i]->neighbour = graph[i+elem]; 
	}
	isReachable(t,graph);
}