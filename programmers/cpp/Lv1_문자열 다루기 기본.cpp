/*--��ó--
���α׷��ӽ�

--���� ����--
���ڿ� �ٷ�� �⺻

--���� ����--
���ڿ� s�� ���̰� 4 Ȥ�� 6�̰�, ���ڷθ� �������ִ��� Ȯ�����ִ� �Լ�, solution�� �ϼ��ϼ���.���� ��� s�� a234�̸� False�� �����ϰ� 1234��� True�� �����ϸ� �˴ϴ�.

���� ����
s�� ���� 1 �̻�, ���� 8 ������ ���ڿ��Դϴ�.

--����� ��--
s		return
a234	false
1234	true
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    cout << s<<endl;
    cout << s.length() << endl;
    if (s.length() != 4 && s.length() != 6)
        return false;

    for (auto elem : s) {
        if (!isdigit(elem))
            return false;
    }

    return answer;
}