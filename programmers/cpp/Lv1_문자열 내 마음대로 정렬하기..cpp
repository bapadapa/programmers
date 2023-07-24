/*
 ��ó : ���α׷��ӽ�
 ���� : ���ڿ� �� ������� �����ϱ�.

--���� ����--
���ڿ��� ������ ����Ʈ strings��, ���� n�� �־����� ��, �� ���ڿ��� �ε��� n��° ���ڸ� �������� �������� �����Ϸ� �մϴ�. ���� ��� strings�� [sun, bed, car]�̰� n�� 1�̸� �� �ܾ��� �ε��� 1�� ���� u, e, a�� strings�� �����մϴ�.

���� ����
strings�� ���� 1 �̻�, 50������ �迭�Դϴ�.
strings�� ���Ҵ� �ҹ��� ���ĺ����� �̷���� �ֽ��ϴ�.
strings�� ���Ҵ� ���� 1 �̻�, 100������ ���ڿ��Դϴ�.
��� strings�� ������ ���̴� n���� Ů�ϴ�.
�ε��� 1�� ���ڰ� ���� ���ڿ��� ���� �� ���, ���������� �ռ� ���ڿ��� ���ʿ� ��ġ�մϴ�.

--����� ��--
strings				n	return
[sun, bed, car]		1	[car, bed, sun]
[abce, abcd, cdx]	2	[abcd, abce, cdx]
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int _index;

bool _sort(string a, string b) {
    if (a[_index] != b[_index])
        return a[_index] < b[_index];
    else
        return a < b;
}
vector<string> solution(vector<string> strings, int n) {
    _index = n;

    sort(strings.begin(), strings.end(), _sort);
    return strings;
}