/*
--��ó--
���α׷��ӽ�

�Ҽ� ã��

���� ����
���ڸ� ���ڰ� ���� ���� ������ ������ֽ��ϴ�. ����� ���� ������ �ٿ� �Ҽ��� �� �� ���� �� �ִ��� �˾Ƴ��� �մϴ�.

�� ���� ������ ���� ���ڰ� ���� ���ڿ� numbers�� �־����� ��, ���� �������� ���� �� �ִ� �Ҽ��� �� ������ return �ϵ��� solution �Լ��� �ϼ����ּ���.

���ѻ���
numbers�� ���� 1 �̻� 7 ������ ���ڿ��Դϴ�.
numbers�� 0~9���� ���ڸ����� �̷���� �ֽ��ϴ�.
013�� 0, 1, 3 ���ڰ� ���� ���� ������ ������ִٴ� �ǹ��Դϴ�.
����� ��
numbers	return
17	3
011	2
����� �� ����
���� #1
[1, 7]���δ� �Ҽ� [7, 17, 71]�� ���� �� �ֽ��ϴ�.

���� #2
[0, 1, 1]���δ� �Ҽ� [11, 101]�� ���� �� �ֽ��ϴ�.

11�� 011�� ���� ���ڷ� ����մϴ�.


*/

#include<iostream>

#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<bool>primeNums;
vector<int> combined;
//�Ҽ�
bool prime(int n) {
	if (n == 0 || n == 1)return false;
	for (int i = 2; i < sqrt(n); i++) {
		if (n % i == 0)return false;
	}
	return true;
}

//�Ҽ� �����佺�׳׽��� ü
vector<bool> makePrimePool(string numbers) {
	int digit = pow(10, numbers.length());
	vector<bool> primeNum(digit, true);
	fill(primeNum.begin(), primeNum.begin() + 2, false);
	for (int i = 2; i < digit; i++) {
		if (primeNum[i] == false) continue;
		for (int j = i * 2; j < digit; j += i) {
			primeNum[j] = false;
		}
	}
	return primeNum;
}
//��������
void permutation(int depth, string numbers, string res, vector < bool>visited) {
	if (depth == numbers.length())
		return;
	for (int i = 0; i < numbers.length(); i++) {
		if (!visited[i]) {
			string currNum = res + numbers[i];
			visited[i] = true;
			if (primeNums[atoi(currNum.c_str())])
			//if (prime(atoi(currNum.c_str())))
				combined.push_back(atoi(currNum.c_str()));
			permutation(depth+ 1, numbers, res + numbers[i], visited);
			visited[i] = false;
		}
	}
}

int solution(string numbers) {	
	vector < bool>visited(numbers.size());
	primeNums = makePrimePool(numbers);

	permutation(0, numbers, "", visited);

	//�ߺ�����
	sort(combined.begin(), combined.end());
	combined.erase(unique(combined.begin(), combined.end()), combined.end());

	for (auto elem : combined) {
		cout << elem << endl;
	}
	
	return combined.size();
}

int main() {
	cout << solution("17");
}