/*
--��ó--
���α׷��ӽ�

--���� ����--
�ﰢ ������
���� ����
���� n�� �Ű������� �־����ϴ�.
���� �׸��� ���� �غ��� ���̿� ���̰� n�� �ﰢ������ �� �� ���������� �ݽð� �������� ������ ä��⸦ ������ ��,
ù ����� ������ ����� ��� ������� ��ģ ���ο� �迭�� return �ϵ��� solution �Լ��� �ϼ����ּ���.


���ѻ���
n�� 1 �̻� 1,000 �����Դϴ�.

����� ��
n	result
4	[1, 2, 9, 3,10, 8, 4, 5, 6, 7]

5	[1, 2,12, 3,13,11, 4,14,15,10, 5, 6, 7, 8, 9]

6	[1, 2,15, 3,16,14, 4,17,21,13, 5,18,19,20,12, 6, 7, 8, 9,10,11]
*/
#include <iostream>

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
	vector<int> answer;
	vector < vector<int> > tempNum;
	tempNum.resize(n, vector<int>(n, 0));
	int cnt = 1;
	int xPos, yPos;
	xPos = yPos = 0;	

	//�켱 ��ġ�ϱ�
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {		
			if(i%3 == 0)
				tempNum[xPos++][yPos] = cnt++;
			else if (i % 3 == 1) 
				tempNum[xPos][yPos++] = cnt++;			
			else 
				tempNum[xPos--][yPos--] = cnt++;
		}
		if (i % 3 == 0) {
			xPos--; yPos++;
		}			
		else if (i % 3 == 1) {
			xPos--; yPos-=2;
		}
		else {
			xPos+=2; yPos++;
		}		
	}
	//��ġ�� �Է��ϱ�
	for (auto elem : tempNum) {
		for (auto num : elem) {
			if (num == 0)
				break;
			answer.push_back(num);
		}
	}

	return answer;
}
