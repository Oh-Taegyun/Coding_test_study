#include <iostream>
#include <list>

using namespace std;

// ����Ʈ���� ����� ����
/*
	1. ������ �Է� �޴´�
	2. �켱 ���� ť(����)�� �Է��� �޴´�.
	3. ���� ū ������ �߶󺸰� �����غ���. (�̰͵� ū ���� ������ �� �ְ� ������)
	4. �����ؼ� �Ǵ� ��� stop
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
	list<int>::iterator iter = li.begin(); // ����� �ּ� ����
	while (iter != li.end()) { // ���������� �ݺ�
		for (list<int>::iterator next = iter; next != li.end(); ++iter) {
			length = *next - *iter; // ���� ���
			if (length != 0 && length < M) ans.push_back(length);
			else break;
		}
		
		ans.sort(); // �������� �ڿ��� ������
		int R;
		R = iter
		// ans���� �ϳ��� ������ ���Ѵ� 

	}




	
	
	while (iter != li.end()) { 

		// �� �������� �̵�
		++next_length;
		// ���� ������ - �� ���� ��� 
		int length = *next_length - *Min_length;
		if (M > length)
			ans.push_back(length);
		
	}


}
