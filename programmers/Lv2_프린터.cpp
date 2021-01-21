/*
--��ó--
���α׷��ӽ� 

--��������--
������

--���� ����--
�Ϲ����� �����ʹ� �μ� ��û�� ���� ������� �μ��մϴ�. �׷��� ������ �߿��� ������ ���߿� �μ�� �� �ֽ��ϴ�. �̷� ������ �����ϱ� ���� �߿䵵�� ���� ������ ���� �μ��ϴ� �����͸� �����߽��ϴ�. �� ���Ӱ� ������ �����ʹ� �Ʒ��� ���� ������� �μ� �۾��� �����մϴ�.

1. �μ� ������� ���� �տ� �ִ� ����(J)�� ����Ͽ��� �����ϴ�.
2. ������ �μ� ����Ͽ��� J���� �߿䵵�� ���� ������ �� ���� �����ϸ� J�� ������� ���� �������� �ֽ��ϴ�.
3. �׷��� ������ J�� �μ��մϴ�.
���� ���, 4���� ����(A, B, C, D)�� ������� �μ� ����Ͽ� �ְ� �߿䵵�� 2 1 3 2 ��� C D A B ������ �μ��ϰ� �˴ϴ�.

���� �μ⸦ ��û�� ������ �� ��°�� �μ�Ǵ��� �˰� �ͽ��ϴ�. ���� ������ C�� 1��°��, A�� 3��°�� �μ�˴ϴ�.

���� ����Ͽ� �ִ� ������ �߿䵵�� ������� ��� �迭 priorities�� ���� �μ⸦ ��û�� ������ ���� ������� � ��ġ�� �ִ����� �˷��ִ� location�� �Ű������� �־��� ��, ���� �μ⸦ ��û�� ������ �� ��°�� �μ�Ǵ��� return �ϵ��� solution �Լ��� �ۼ����ּ���.

--���ѻ���--
���� ����Ͽ��� 1�� �̻� 100�� ������ ������ �ֽ��ϴ�.
�μ� �۾��� �߿䵵�� 1~9�� ǥ���ϸ� ���ڰ� Ŭ���� �߿��ϴٴ� ���Դϴ�.
location�� 0 �̻� (���� ����Ͽ� �ִ� �۾� �� - 1) ������ ���� ������ ������� ���� �տ� ������ 0, �� ��°�� ������ 1�� ǥ���մϴ�.

--����� ��--
priorities	location	return
[2, 1, 3, 2]	2	1
[1, 1, 9, 1, 1, 1]	0	5
*/

#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <iostream>


using namespace std;



int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int, int>> priorQ;
    int priorCnt[9] = { 0, };

    for (int i = 0; i < size(priorities) ; i++) {
        priorCnt[priorities[i] - 1] ++;
        priorQ.push(make_pair(priorities[i], i));
    }
    int index = 8;
    while (true) {
        if (priorCnt[index] == 0) {
            index--;
            continue;
        }

        if (index+1 == priorQ.front().first) {
            if (priorQ.front().second == location) {
                answer++;
                break;
            }
            priorQ.pop();
            answer++;            
            priorCnt[index]--;
        }
        else{ 
            priorQ.push(priorQ.front());
            priorQ.pop();
        }
    }    
    return answer;
}