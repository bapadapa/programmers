/*
--��ó--
���α׷��ӽ�

--���� ���� --
ī��
���� ����
Leo�� ī���� �緯 ���ٰ� �Ʒ� �׸��� ���� �߾ӿ��� ��������� ĥ���� �ְ� �׵θ� 1���� ��������
ĥ���� �ִ� ���� ��� ī���� �ý��ϴ�.

Leo�� ������ ���ƿͼ� �Ʊ� �� ī���� ������� �������� ��ĥ�� ������ ������ ���������,
��ü ī���� ũ��� ������� ���߽��ϴ�.

Leo�� �� ī�꿡�� ���� ������ �� brown, ����� ������ �� yellow�� �Ű������� �־��� �� ī���� ����,
���� ũ�⸦ ������� �迭�� ��� return �ϵ��� solution �Լ��� �ۼ����ּ���.

���ѻ���
���� ������ �� brown�� 8 �̻� 5,000 ������ �ڿ����Դϴ�.
����� ������ �� yellow�� 1 �̻� 2,000,000 ������ �ڿ����Դϴ�.
ī���� ���� ���̴� ���� ���̿� ���ų�, ���� ���̺��� ��ϴ�.
����� ��
brown	yellow	return
10		2		[4, 3]
8		1		[3, 3]
24		24		[8, 6]
*/
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
vector<int> solution(int brown, int yellow) {
	vector<int> answer;
	double area = brown + yellow;
	vector<int> divisor;

	//���簢��
	if (sqrt(area) == (int)sqrt(area))
		return { int(sqrt(area)),int(sqrt(area)) };

	for (int i = 3; i < area; i++) {
		if ((int)area % i == 0) {
			divisor.push_back(i);
		}
	}
	for (int i = 0; i < divisor.size(); i++) {
		for (int j = i + 1; j < divisor.size(); j++) {
			if ((divisor[i] - 2) * (divisor[j] - 2) == yellow) {
				answer.push_back(divisor[j]); answer.push_back(divisor[i]);
			}
		}
	}


	return answer;
}