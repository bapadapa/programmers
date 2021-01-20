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

#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer{ 0 ,0 };
    int area = brown + yellow;
    int sumOfHoriNVerti = brown / 2 + 2;
    int num = 3;

    //���簢��
	if (sqrt(area) == (int)sqrt(area))
		return { int(sqrt(area)),int(sqrt(area)) };

    while (answer[0] * answer[1] != area) {
        int col = sumOfHoriNVerti - num;
        int row = num;
        if (col * row == area && (col - 2) * (row - 2) == yellow) {
            answer = { col ,row };
            break;
        }            
        num++;
    }
    //sort(answer.begin(), answer.end(), greater<>());

    for (auto elem : answer) {
        cout << elem << endl;
    }
    return answer;
}


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
		for (int j = i+1; j < divisor.size(); j++) {
				if (divisor[i] * divisor[j] == area && (divisor[i]-2) * (divisor[j]-2) == yellow ) {
					answer.push_back(divisor[i]); answer.push_back(divisor[j]);
				}					
		}
	}

	sort(answer.begin(), answer.end(), greater<>());
	
	return answer;
}

//vector<int> solution(int brown, int yellow) {
//	vector<int> answer;
//	double area = brown + yellow, col;
//	vector<int> divisor;
//
//	if (sqrt(area) == (int)sqrt(area))
//		return { int(sqrt(area)),int(sqrt(area)) };
//
//	for (int i = 3; i < area; i++) {
//		if ((int)area % i == 0) {
//			divisor.push_back(i);
//		}
//	}
//	
//	for (auto elem : divisor) {
//		double j = yellow / elem;
//		if (j * elem == area) {
//			answer.push_back(j); answer.push_back(elem);
//		}
//	}
//	
//	return answer;
//}



int main() {
	//solution(12,3);
	//solution(18, 6);
	//solution(14,6);
	//solution(66, 238);
	//solution(588, 6675);
	//solution(8, 1);

	for (auto elem : solution(385-297, 297)) {
		cout << elem << " ";
	}
}