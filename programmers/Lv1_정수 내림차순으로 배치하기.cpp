/*
--��ó--
���α׷��ӽ�
--���� ����--
���� ������������ ��ġ�ϱ�

--���� ����--
�Լ� solution�� ���� n�� �Ű������� �Է¹޽��ϴ�. n�� �� �ڸ����� ū�ͺ��� ���� ������ ������ ���ο� ������ �������ּ���. ������� n�� 118372�� 873211�� �����ϸ� �˴ϴ�.

--���� ����--
n�� 1�̻� 8000000000 ������ �ڿ����Դϴ�.

--����� ��--
n	return
118372	873211
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    int multi = 1;
    vector<int> num;
    while (n != 0) {
        num.push_back(n % 10);
        n /= 10;
    }
    sort(num.begin(), num.end());
    
    for (auto elem : num) {
        answer += elem * multi;
        multi *= 10;
    }
    
    return answer;
}