/*
--��ó--
���α׷��ӽ�

--���� ����--
�ϻ��� ��

--���� ����--
���� ���� x�� �ϻ��� ���̷��� x�� �ڸ����� ������ x�� ���������� �մϴ�. ���� ��� 18�� �ڸ��� ���� 1+8=9�̰�, 18�� 9�� ������ �������Ƿ� 18�� �ϻ��� ���Դϴ�. �ڿ��� x�� �Է¹޾� x�� �ϻ��� ������ �ƴ��� �˻��ϴ� �Լ�, solution�� �ϼ����ּ���.

--���� ����--
x�� 1 �̻�, 10000 ������ �����Դϴ�.

--����� ��--
arr	return
10	true
12	true
11	false
13	false

*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solution(int x) {

    int tmp =x;
    int num = 0;
    while (tmp) {
        num += (tmp % 10);
        tmp /= 10;
    }
    return x%num ? false : true;
}