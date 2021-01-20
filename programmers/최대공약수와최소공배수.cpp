/*
--��ó--
���α׷��ӽ�

--���� ����--
�ִ������� �ּҰ����

--���� ����--
�� ���� �Է¹޾� �� ���� �ִ������� �ּҰ������ ��ȯ�ϴ� �Լ�, solution�� �ϼ��� ������. �迭�� �� �տ� �ִ�����, �״��� �ּҰ������ �־� ��ȯ�ϸ� �˴ϴ�. ���� ��� �� �� 3, 12�� �ִ������� 3, �ּҰ������ 12�̹Ƿ� solution(3, 12)�� [3, 12]�� ��ȯ�ؾ� �մϴ�.

--���� ����--
�� ���� 1�̻� 1000000������ �ڿ����Դϴ�.

--����� ��--
n	m	return
3	12	[3, 12]
2	5	[1, 10]
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
	return b ?  gcd(b, a % b) : a;
}
vector<int> solution(int n, int m) {
	vector <int> answer;
	answer.push_back(gcd(n, m));
	answer.push_back(n * m / gcd(n, m));

	for (auto elem : answer) {
		cout << elem << endl;
	}
	return answer;
}

int main() {
	solution(1000000, 1000000-1);
}






//�Ʒ� �� �� �Ǵ��� �𸣰��� ..
/*



vector<int> commonFactor(int num) {

	vector<int> Factor;
	vector<int> _commonFactor;
	for (int i = 1; i <= num; i++) {
		Factor.push_back(i);
	}

	for (auto elem : Factor) {
		if (num % elem == 0)
			_commonFactor.push_back(elem);
	}
	return _commonFactor;
}

vector<__int64> solution(int n, int m) {
	vector <__int64> answer;
	vector<int> commonFactorN;
	vector<int> commonFactorM;

	bool find = false;
	//�����
	commonFactorN = commonFactor(n);
	commonFactorM = commonFactor(m);

	for (int i = commonFactorN.size()-1; i >= 0; i--) {
		for (int j = commonFactorM.size()-1; j >= 0; j--) {
			if (commonFactorN[i] == commonFactorM[j]) {				
				find = true;
				break;
			}
			else if (commonFactorN[i] > commonFactorM[j])
				break;

		}
		if (find) {
			answer.push_back(commonFactorN[i]);
			break;
		}
			
	}


	__int64 n64 = n;
	__int64 m64 = m;

	//�����
	if (n < m)
		if (m % n == 0)
			answer.push_back(m);			
		else {
			answer.push_back(n64 * m64);
		}
			
	else
		if (m % n == 0)
			answer.push_back(n);
		else {
			answer.push_back(n64 * m64);
		}
			



	for (auto elem: answer) {
		cout << elem << endl; 
	}

	return answer;
}

int main() {
	
	solution(1000000, 1000000-1);
	cout << 1000000 * (1000000 - 1);
}
*/