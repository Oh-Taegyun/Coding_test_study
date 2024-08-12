#include <iostream>
#include <list>

using namespace std;

// 이진트리로 만들어 보자
/*
	1. 데이터 입력 받는다
	2. 우선 순위 큐(히프)로 입력을 받는다.
	3. 가장 큰 것으로 잘라보고 조합해본다. (이것도 큰 값을 내보낼 수 있게 히프로)
	4. 조합해서 되는 경우 stop
*/ 

list<int> li;
list<int> ans;

int main() {
	int N, M, data;
	int length;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> data;
		li.push_back(data);
	}
	li.sort(less<int> ());
	list<int>::iterator iter = li.begin(); // 현재는 최소 길이
	while (iter != li.end()) { // 끝날때까지 반복
		for (list<int>::iterator next = iter; next != li.end(); ++iter) {
			length = *next - *iter; // 길이 계산
			if (length != 0 && length < M) ans.push_back(length);
			else break;
		}
		
		ans.sort(); // 오름차순 뒤에서 꺼내자
		int R;
		R = iter
		// ans에서 하나씩 꺼내서 더한다 

	}




	
	
	while (iter != li.end()) { 

		// 그 다음으로 이동
		++next_length;
		// 가장 작은놈 - 그 다음 긴놈 
		int length = *next_length - *Min_length;
		if (M > length)
			ans.push_back(length);
		
	}


}
