/*
list
1. 저장할 데이터 개수가 가변적일때 사용한다.
2. 중간에 데이터 삽입이나 삭제가 자주 일어날때 사용한다.(리스트의 추가 삭제 용이성)
3. 저장할 데이터 개수가 많으면서 검색을 자주하면 다른 컨테이너를 쓴는 것이 좋다.
(map ,set, hash_map 사용이 좋다.)
4. 데이터에 랜덤접근하는 경우가 적을떄 사용한다.
(리스트는 순차 접근만 가능하기 때문에  저장된 위치를 알더라도 순차접근해야한다. 메모리 낭비)

Vector
1. 저장할 개수가 가변적일때 사용한다. (데이터 추가 용이)
2. 중간에 데이터 삽입이나 삭제가 일어나지 않을때( 배열과 같기 때문에 중간 삽입,삭제는 리소스 낭비)
3. 저장할 데이터 개수가 적거나 많은 경우에는 빈번하게 검색하면 안된다. (데이터 순차 저장이므로 검색속도가 느리다.)
(검색에는 map, set, hash_map가 좋다.)
4. 데이터 랜덤접근이 용이하다.
(배열같은 특성이 있어 랜덤 접근이 가능하다, 위치를 알고있다면 검색도 필요 없고 빠르게 접근 가능!!)

*/

/*
//2번 DFS구현
#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;
//DFS 깊이우선탐색
struct Vertex {
	//int data;
};

vector<Vertex> verices;
vector<vector<int>> adjacent;
vector<bool> visited;

//사이즈와 연결부 설정
void CreateGraph() {
	verices.resize(6);
	adjacent = vector<vector<int>>(6);

	//행렬방식
	adjacent = vector<vector<int>>{
		{0,1,0,1,0,0},
		{1,0,1,1,0,0},
		{0,0,0,0,0,0},
		{0,0,0,0,1,0},
		{0,0,0,0,0,0},
		{0,0,0,0,1,0}
	};
}

void DFS(int here) {
	//방문확인
	visited[here] = true;
	cout << "Visited : " << here << endl;

	//행렬방식 구현
	for (int there = 0; there < 6; there++) {
		if (adjacent[here][there] == 0) {
			continue;
		}
		//방문하지 않은 곳 방문
		if (visited[there] == false) {
			DFS(there);	//재귀함수
		}
	}
}

int main(){
	CreateGraph();
	visited = vector<bool>(6, false);

	DFS(0);
}
*/

/*
//3번 트리구현
#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;
using NodeRef = shared_ptr<struct Node>;

struct Node {
	Node() {}
	Node(const string& data) : data(data){}
	string data;
	vector<NodeRef> children;
};

NodeRef CreateTree() {
	NodeRef root = make_shared<Node>("개발실"); {
		//개발실
		NodeRef node = make_shared<Node>("디자인팀");
		root->children.push_back(node); {
			NodeRef leaf = make_shared<Node>("전투");
			node->children.push_back(leaf);
		} {
			NodeRef leaf = make_shared<Node>("경제");
			node->children.push_back(leaf);
		} {
			NodeRef leaf = make_shared<Node>("스토리");
			node->children.push_back(leaf);
		}
	} {
		NodeRef node = make_shared<Node>("프로그래밍팀");
		root->children.push_back(node);
	} {
		NodeRef node = make_shared<Node>("아트팀");
		root->children.push_back(node);
	}
	return root;
}

void PrintTree(NodeRef root, int depth) {
	for (int i = 0; i < depth; i++) {
		cout << " - ";
	}
	cout << root->data << endl;

	for (NodeRef& child : root->children) {
		PrintTree(child, depth + 1);
	}
}

int GetHeight(NodeRef root) {
	int height = 1;
	for (NodeRef& child : root->children) {
		height = max(height, GetHeight(child) + 1);
	}
	return height;
}

int main() {
	NodeRef root = CreateTree();

	PrintTree(root, 0);

	int height = GetHeight(root);
	cout << "TreeHeight : " << height << endl;
}
*/

/*
//4번 버블소트
#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;

//다음 값과 단순비교 후 작은 값을 앞으로
//매우 낮은 효율
void BBSort(vector<int>& v) {
	const int n = (int)v.size();

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < (n - 1 - i); j++) {
			if (v[j] > v[j + 1]) {
				int temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}
	}

	for (int k = 0; k < n; k++) {
		cout << v[k] << endl;
	}
}

int main() {
	vector<int> v{ 1,5,3,4,2 };
	BBSort(v);
}
*/