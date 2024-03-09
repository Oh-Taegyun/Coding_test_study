
#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
using namespace std;

int main() {
	// ���� �ð� ����
	auto start_time = std::chrono::high_resolution_clock::now();


	// �ҽ� ���� �ۼ�
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

	// ���� �ð� ����
	auto end_time = std::chrono::high_resolution_clock::now();

	// ���� �ð� ���
	std::chrono::duration<double> execution_time = end_time - start_time;

	// ��� ���
	std::cout << "���� �ð�: " << execution_time.count() << "��" << std::endl;

	
}