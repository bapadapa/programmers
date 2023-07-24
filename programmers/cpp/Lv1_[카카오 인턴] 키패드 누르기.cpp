/*
--��ó--
���α׷��ӽ�

--���� ����--

[īī�� ����] Ű�е� ������
���� ����
����Ʈ�� ��ȭ Ű�е��� �� ĭ�� ������ ���� ���ڵ��� ���� �ֽ��ϴ�.
###########
#		  #
# 1	 2	3 #
# 4	 5	6 #
# 7	 8	9 #
# *	 0	# #
#         #
###########

�� ��ȭ Ű�е忡�� �޼հ� �������� �����հ������� �̿��ؼ� ���ڸ��� �Է��Ϸ��� �մϴ�.
�� ó�� �޼� �����հ����� * Ű�е忡 ������ �����հ����� # Ű�е� ��ġ���� �����ϸ�, �����հ����� ����ϴ� ��Ģ�� ������ �����ϴ�.

�����հ����� �����¿� 4���� �������θ� �̵��� �� ������ Ű�е� �̵� �� ĭ�� �Ÿ��� 1�� �ش��մϴ�.
���� ���� 3���� ���� 1, 4, 7�� �Է��� ���� �޼� �����հ����� ����մϴ�.
������ ���� 3���� ���� 3, 6, 9�� �Է��� ���� ������ �����հ����� ����մϴ�.
��� ���� 4���� ���� 2, 5, 8, 0�� �Է��� ���� �� �����հ����� ���� Ű�е��� ��ġ���� �� ����� �����հ����� ����մϴ�.
4-1. ���� �� �����հ����� �Ÿ��� ���ٸ�, ���������̴� ������ �����հ���, �޼����̴� �޼� �����հ����� ����մϴ�.
������� ���� ��ȣ�� ��� �迭 numbers, �޼��������� ������������ ���� ��Ÿ���� ���ڿ� hand�� �Ű������� �־��� ��,
�� ��ȣ�� ���� �����հ����� �޼��� �� �������� ���� ��Ÿ���� ���ӵ� ���ڿ� ���·� return �ϵ��� solution �Լ��� �ϼ����ּ���.

[���ѻ���]
numbers �迭�� ũ��� 1 �̻� 1,000 �����Դϴ�.
numbers �迭 ������ ���� 0 �̻� 9 ������ �����Դϴ�.
hand�� "left" �Ǵ� "right" �Դϴ�.
"left"�� �޼�����, "right"�� ���������̸� �ǹ��մϴ�.
�޼� �����հ����� ����� ���� L, ������ �����հ����� ����� ���� R�� ������� �̾�ٿ� ���ڿ� ���·� return ���ּ���.

����� ��
numbers	                            hand	    result
[1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5]	"right"	    "LRLLLRLLRRL"
[7, 0, 8, 2, 8, 3, 1, 5, 7, 6, 2]	"left"	    "LRLLRRLLLRR"
[1, 2, 3, 4, 5, 6, 7, 8, 9, 0]	    "right"	    "LLRLLRLLRL"

*/
#include<iostream>

#include <string>
#include <vector>

using namespace std;

int midDistance(int num, int target) {


	//�հ����� �̹� �߰��� ��
	if (num % 3 == 2) {
		return abs(target - num) / 3 - 1;
	}
	//1,4,7 ����.
	if (num % 3 == 1) {
		return abs(target - (num + 1)) / 3;
	}
	//3,6,9 ����
	else if (num % 3 == 0) {
		return abs(target - (num - 1)) / 3;
	}
}

string solution(vector<int> numbers, string hand) {
	string answer = "";
	int left = 10;
	int right = 12;	

	for (auto elem : numbers) {		
		//�߰��Ͻ�
		if (elem == 0) {
			elem = 11;
		}
		if (elem % 3 == 2) {
			int ldist = midDistance(left, elem);
			int rdist = midDistance(right, elem);
			if (ldist == rdist)
			{
				if (hand == "left") {
					left = elem;
					answer.push_back('L');
				}
				else {
					right = elem;
					answer.push_back('R');
				}

			}
			else {
				if (ldist < rdist) {
					left = elem;
					answer.push_back('L');
				}
				else {
					right = elem;
					answer.push_back('R');
				}
			}
		}
			//1,4,7������
		else if (elem % 3 == 1) {
			left = elem;
			answer.push_back('L');
		}
		//3,6,9������
		else if (elem % 3 == 0) {
			right = elem;
			answer.push_back('R');
		}	

	}
	return answer;
}


