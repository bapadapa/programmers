/*
--��ó--
���α׷��ӽ�

--���� ����--
���̽�ƽ

--���� ����--
���̽�ƽ���� ���ĺ� �̸��� �ϼ��ϼ���. �� ó���� A�θ� �̷���� �ֽ��ϴ�.
ex) �ϼ��ؾ� �ϴ� �̸��� �� ���ڸ� AAA, �� ���ڸ� AAAA

���̽�ƽ�� �� �������� �����̸� �Ʒ��� �����ϴ�.

�� - ���� ���ĺ�
�� - ���� ���ĺ� (A���� �Ʒ������� �̵��ϸ� Z��)
�� - Ŀ���� �������� �̵� (ù ��° ��ġ���� �������� �̵��ϸ� ������ ���ڿ� Ŀ��)
�� - Ŀ���� ���������� �̵�
���� ��� �Ʒ��� ������� JAZ�� ���� �� �ֽ��ϴ�.

- ù ��° ��ġ���� ���̽�ƽ�� ���� 9�� �����Ͽ� J�� �ϼ��մϴ�.
- ���̽�ƽ�� �������� 1�� �����Ͽ� Ŀ���� ������ ���� ��ġ�� �̵���ŵ�ϴ�.
- ������ ��ġ���� ���̽�ƽ�� �Ʒ��� 1�� �����Ͽ� Z�� �ϼ��մϴ�.
���� 11�� �̵����� "JAZ"�� ���� �� �ְ�, �̶��� �ּ� �̵��Դϴ�.
������� �ϴ� �̸� name�� �Ű������� �־��� ��, �̸��� ���� ���̽�ƽ ���� Ƚ���� �ּڰ��� return �ϵ��� solution �Լ��� ���弼��.

--���� ����--
name�� ���ĺ� �빮�ڷθ� �̷���� �ֽ��ϴ�.
name�� ���̴� 1 �̻� 20 �����Դϴ�.

--����� ��--
name	return
JEROEN	56
JAN	23
*/

#include<iostream>

#include <string>
#include <vector>

using namespace std;

int solution(string name) {
    int answer = size(name) - 1;

    int rep = 0;
    int pos = 0;
    int tmp = 0;
    bool isfirst = true;

    for (int i = 0; i < size(name); i++) {
        if (name[i] == 'A') {
            tmp++;            
        }
        else {
            tmp = 0;
            isfirst = true;
        }  
        if (rep <= tmp) {
            if (isfirst) {
                pos = i;
                isfirst = false;
            }
            rep = tmp;            
        }
    }
    
    cout << endl << endl << "rep = " << rep << "   pos = " << pos << "  size(name) = "<< size(name) << endl;

    if (rep >= size(name) / 2) {
        if (pos == 0)
        {
            answer = (size(name) - (pos + 1) - rep);
        }
        else
            answer = (pos - 1) * 2 + (size(name) - pos - rep);

        
    }
    else if (name[1] == 'A')
        answer--;

    for (int i = 0; i < size(name); i++) {
        if (i == size(name) - 1 && name[i] == 'A')
            break;
        if (name[i] < 'N') {
            answer += name[i] - 'A';
        }
        else {
            answer += 'Z' - name[i] + 1;
        }

    }

    cout << endl << endl;
    cout << answer;
    return answer;

}