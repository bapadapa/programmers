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
	//잃어버린 친구들 고르기.
	for (auto elem : lost) {
		a[elem ] -= 1;
	}
	//여벌 있는 친구들 고르기
	for (auto elem : reserve) {
		a[elem ] += 1;
	}

	////맨앞 사람이 잃어버렸을경우
	//if (a[0] == 0)
	//	if (a[1] == 2) {
	//		a[0] = a[1] = 1;
	//	}

	////맨마지막 사람이 잃어버렸을 경우
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
	//		//전사람
	//		if (a[res - 2] != 1) {
	//			a[res - 2] = 1;
	//		}
	//		//다음사람
	//		else if (a[res] != 1) {
	//			a[res] = 1;
	//		}
	//	}

	//}

	cout << answer;



}


