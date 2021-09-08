//#include<iostream>
//#include<math.h>
//#include<vector>
//
//using namespace std;
//
//class Node {
//private:
//	vector<Node*> root;
//	int time;
//	int before_time;
//
//public:
//	Node(int t){
//		time = t;
//		before_time = 0;
//	}
//	int get_time() {
//		int result = 0;
//		vector<Node*>::iterator iter;
//		for (iter = root.begin(); iter != root.end(); iter++) {
//			if (result < (*iter)->get_time()) {
//				result = (*iter)->get_time();
//			}
//		}
//		result += time;
//		return result;
//	}
//	void push_root(Node* r) {
//		root.push_back(r);
//	}
//};
//
//int main(void) {
//	int count = 0;
//	cin >> count;
//	for (int o = 0; o < count; o++) {
//		int num = 0;
//		int k = 0;
//		int target = 0;
//		vector<pair<int, int>> v;
//		vector<Node> graph;
//		int start, end;
//		cin >> num >> k;
//		for (int i = 0; i < num; i++) {
//			int input_time;
//			cin >> input_time;
//			Node n(input_time);
//			graph.push_back(n);
//		}
//		for (int j = 0; j < k; j++) {
//			
//			cin >> start >> end;
//			graph.at(end-1).push_root(&graph.at(start -1));
//		}
//		cin >> target;
//
//		cout << graph.at(target-1).get_time() << endl;
//	}
//	return 0;
//}

#include<iostream>
#include<vector>

using namespace std;

class Node {
private:
	vector<Node*> root;
	int time;
	int before_time;

public:
	Node(int t){
		time = t;
		before_time = 0;
	}
	int get_time() {
		int result = 0;
		vector<Node*>::iterator iter;
		for (iter = root.begin(); iter != root.end(); iter++) {
			if (result < (*iter)->get_time()) {
				result = (*iter)->get_time();
			}
		}
		result += time;
		return result;
	}
	void push_root(Node* r) {
		root.push_back(r);
	}
};
int find(int* arr[1000], vector<vector<int>>* v, int n) {
	int result;
	
}
int main(void) {
	int count = 0;
	cin >> count;
	for (int o = 0; o < count; o++) {
		int arr[1000] = { -1, };
		int num = 0;
		int k = 0;
		int target = 0;
		vector<vector<int>> v;
		int start, end;
		cin >> num >> k;
		for (int i = 0; i < num; i++) {
			int input_time;
			cin >> input_time;
			arr[i] = input_time;
		}
		for (int j = 0; j < k; j++) {
			int start, end;
			cin >> start >> end;
			v.at(end - 1).push_back(start - 1);
		}
		cin >> target;

		cout <<  << endl;
	}
	return 0;
}