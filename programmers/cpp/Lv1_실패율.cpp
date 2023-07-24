/*
--��ó--
���α׷��ӽ�

--���� ����--
������

--���� ����--
������

���� ���� ������ �������� ū ��ο� ������. �׳డ ���� ������ ��õ���� �뼺���� �ŵ�����,
���� �ű� ������� ���� �ް��� ���̴�. ������ �ű� ����ڿ� ���� ����� ���̿� �������� ���̰� �ʹ� ū ���� ��������.

�� ������ ��� �ұ� ��� �� �׳�� �������� ���� �ð��� �÷��� ���̵��� �����ϱ�� �ߴ�.
���� ���� �����ڶ� ��κ��� ������ ���� ����������, �������� ���ϴ� �κп��� ���⿡ ������ ���Ҵ�.
�������� ���� �������� ���ϴ� �ڵ带 �ϼ��϶�.

�������� ������ ���� �����Ѵ�.
���������� ���������� ���� Ŭ�������� ���� �÷��̾��� �� / ���������� ������ �÷��̾� ��
��ü ���������� ���� N, ������ �̿��ϴ� ����ڰ� ���� �����ִ� ���������� ��ȣ�� ��� �迭 stages�� �Ű������� �־��� ��,
�������� ���� ������������ ������������ ���������� ��ȣ�� ����ִ� �迭�� return �ϵ��� solution �Լ��� �ϼ��϶�.

--���ѻ���--
���������� ���� N�� 1 �̻� 500 ������ �ڿ����̴�.
stages�� ���̴� 1 �̻� 200,000 �����̴�.
stages���� 1 �̻� N + 1 ������ �ڿ����� ����ִ�.
�� �ڿ����� ����ڰ� ���� ���� ���� ���������� ��ȣ�� ��Ÿ����.
��, N + 1 �� ������ ��������(N ��° ��������) ���� Ŭ���� �� ����ڸ� ��Ÿ����.
���� �������� ���� ���������� �ִٸ� ���� ��ȣ�� ���������� ���� ������ �ϸ� �ȴ�.
���������� ������ ������ ���� ��� �ش� ���������� �������� 0 ���� �����Ѵ�.

--����� ��--
N	stages	result
5	[2, 1, 2, 6, 2, 4, 3, 3]	[3,4,2,1,5]
4	[4,4,4,4,4]	                [4,1,2,3]

*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

vector<int> solution(int N, vector<int> stages) {
	vector<int> answer;
	vector<pair<int , float>> rank;

	//���̵� ����.
	for (int i = 0; i < N; i++) {
		float tmp = 0;
		float clear = 0;
		for (auto elem : stages) {
			if (elem >= (i + 1))
				clear++;
			if (elem == (i + 1))
				tmp++;
		}
		rank.push_back(pair<int, float>{ i+1,tmp / clear });
	}

	for (auto elem : rank)
		cout << elem.first << " " << elem.second << endl;
	cout<< endl << endl;
	
	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++) {
			if (rank[i].second < rank[j].second) {
				swap(rank[i], rank[j]);
			}
			else if (rank[i].second == rank[j].second) {
				if (rank[i].first > rank[j].first) {
					swap(rank[i], rank[j]);
				}
			}
		}
	}
	for (auto elem : rank)
		cout << elem.first << " " << elem.second << endl;
	cout << endl << endl;
	
	for (int i = 0; i < N; i++) {
		answer.push_back(rank[i].first);
	}
	for (auto elem : answer)
		cout << elem << endl;
	return answer;
}