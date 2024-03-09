
#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
using namespace std;

int main() {
	// 시작 시간 측정
	auto start_time = std::chrono::high_resolution_clock::now();


	// 소스 파일 작성
	// -----------------------------------------------------------------------------------------------------------------
	
	int N, M;
	cin >> N >> M;

	vector<int>* graph = new vector<int>[N];

	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		graph[i].push_back(input);
	}

	for (int i = 0; i < N; i++) {
		cout << graph->at(i);
	}
	





	// -----------------------------------------------------------------------------------------------------------------

	// 종료 시간 측정
	auto end_time = std::chrono::high_resolution_clock::now();

	// 실행 시간 계산
	std::chrono::duration<double> execution_time = end_time - start_time;

	// 결과 출력
	std::cout << "실행 시간: " << execution_time.count() << "초" << std::endl;

	
}