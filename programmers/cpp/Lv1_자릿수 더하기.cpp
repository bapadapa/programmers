/*
--��ó--
���α׷��ӽ�
--���� ����--
�ڸ��� ���ϱ�

--���� ����--
�ڿ��� N�� �־�����, N�� �� �ڸ����� ���� ���ؼ� return �ϴ� solution �Լ��� ����� �ּ���.
������� N = 123�̸� 1 + 2 + 3 = 6�� return �ϸ� �˴ϴ�.

--���ѻ���--
N�� ���� : 100,000,000 ������ �ڿ���

--����� ��--
N	answer
123	6
987	24
*/

#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    while (n != 0) {
        answer += n % 10;
        n /= 10;        
    }

    return answer;
}