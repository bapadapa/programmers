#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int answer = 0;
	int n = 5;
	vector<int> lost = { 2,4 };
	vector<int> reserve = { 1,3,5 };


	vector<int> a;
	a.assign(n+2, 0);
	//�Ҿ���� ģ���� ����.
	for (auto elem : lost) {
		a[elem ] -= 1;
	}
	//���� �ִ� ģ���� ����
	for (auto elem : reserve) {
		a[elem ] += 1;
	}

	////�Ǿ� ����� �Ҿ���������
	//if (a[0] == 0)
	//	if (a[1] == 2) {
	//		a[0] = a[1] = 1;
	//	}

	////�Ǹ����� ����� �Ҿ������ ���
	//if (a[a.size() - 1] == 0) {
	//	if (a[a.size() - 2] == 2) {
	//		a[a.size() - 1] = a[a.size() - 2] = 1;

	//	}
	//}

	for (int i = 1; i < n; i++) {
		if (a[i] == 0)
			if (a[i + 1] == 2) {
				a[i] = a[i + 1] = 1;
			}
			else if (a[i - 1] == 2) {
				a[i] = a[i - 1] = 1;
			}
	}
	for (auto elem : a) {
		if (elem >= 0)
			answer++;
	}

	//
	//for (auto res : reserve) {
	//	if (res == 1) {
	//		if (a[res] != 1)
	//			a[res] = 1;
	//	}
	//	else if (res == n) {
	//		if (a[res - 2] != 1)
	//			a[res - 2] = 1;
	//	}
	//	else {
	//		//�����
	//		if (a[res - 2] != 1) {
	//			a[res - 2] = 1;
	//		}
	//		//�������
	//		else if (a[res] != 1) {
	//			a[res] = 1;
	//		}
	//	}

	//}

	cout << answer;



}


