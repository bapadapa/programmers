#include<iostream>
/*
--��ó--
���α׷��ӽ�

--���� ����--
ū �� �����

���� ����
� ���ڿ��� k���� ���� �������� �� ���� �� �ִ� ���� ū ���ڸ� ���Ϸ� �մϴ�.

���� ���, ���� 1924���� �� �� ���� �����ϸ� [19, 12, 14, 92, 94, 24] �� ���� �� �ֽ��ϴ�. �� �� ���� ū ���ڴ� 94 �Դϴ�.

���ڿ� �������� ���� number�� ������ ���� ���� k�� solution �Լ��� �Ű������� �־����ϴ�. number���� k ���� ���� �������� �� ���� �� �ִ� �� �� ���� ū ���ڸ� ���ڿ� ���·� return �ϵ��� solution �Լ��� �ϼ��ϼ���.

���� ����
number�� 1�ڸ� �̻�, 1,000,000�ڸ� ������ �����Դϴ�.
k�� 1 �̻� number�� �ڸ��� �̸��� �ڿ����Դϴ�.

����� ��
number		k	return
1924		2	94
1231234		3	3234
4177252841	4	775841


*/


#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string number, int k) {
	string tmp = number;
	sort(tmp.begin(), tmp.end());
	for (int i = 0; i < number.length() - 1 && k != 0; i++) {
		if (number[i] < number[i + 1]) {
			number.erase(number.begin() + i);
			k--; i = -1;
			continue;
		}
		if (i == number.length() - 2) {
			for (int j = 0; j < number.length(); j++) {
				if (number[j] == tmp[0]) {
					tmp.erase(tmp.begin()); 
					number.erase(number.begin() + j);
					k--; i = -1;
					break;
				}
			}
		}
	}

	return number;
}
int main() {
	cout << solution("54321", 4);
}