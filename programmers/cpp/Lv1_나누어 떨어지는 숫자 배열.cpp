/*--��ó--
���α׷��ӽ�
--���� ����--
������ �������� ���� �迭
--���� ����--
array�� �� element �� divisor�� ������ �������� ���� ������������ ������ �迭�� ��ȯ�ϴ� �Լ�, solution�� �ۼ����ּ���.
divisor�� ������ �������� element�� �ϳ��� ���ٸ� �迭�� - 1�� ��� ��ȯ�ϼ���.

���ѻ���
arr�� �ڿ����� ���� �迭�Դϴ�.
���� i, j�� ���� i �� j �̸� arr[i] �� arr[j] �Դϴ�.
divisor�� �ڿ����Դϴ�.
array�� ���� 1 �̻��� �迭�Դϴ�.
--����� ��--
arr				divisor	return
[5, 9, 7, 10]	5		[5, 10]
[2, 36, 1, 3]	1		[1, 2, 3, 36]
[3, 2, 6]		10		[-1]*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
	vector<int> answer;

	for (auto elem : arr) {
		if (!(elem % divisor)) {
			answer.push_back(elem);
		}
	}
	sort(answer.begin(), answer.end());

	if (answer.empty())
		answer.push_back(-1);

	return answer;
}