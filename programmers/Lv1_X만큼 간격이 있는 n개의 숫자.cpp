/*
--��ó--
���α׷��ӽ�

--���� ����--
x��ŭ ������ �ִ� n���� ����

--���� ����--
�Լ� solution�� ���� x�� �ڿ��� n�� �Է� �޾�, x���� ������ x�� �����ϴ� ���ڸ� n�� ���ϴ� ����Ʈ�� �����ؾ� �մϴ�. 
���� ���� ������ ����, ������ �����ϴ� �Լ�, solution�� �ϼ����ּ���.

--���� ����--
x�� -10000000 �̻�, 10000000 ������ �����Դϴ�.
n�� 1000 ������ �ڿ����Դϴ�.

--����� ��--
x	n	answer
2	5	[2,4,6,8,10]
4	3	[4,8,12]
-4	2	[-4, -8]
*/

#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int add = x;
    for (int i = 0; i < n; i++) {
        answer.push_back(add);
        add += x;
    }
    return answer;
}