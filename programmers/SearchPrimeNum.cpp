/*--��ó--
���α׷��ӽ�

--���� ����--
�Ҽ� ã��

--���� ����--
1���� �Է¹��� ���� n ���̿� �ִ� �Ҽ��� ������ ��ȯ�ϴ� �Լ�, solution�� ����� ������.

�Ҽ��� 1�� �ڱ� �ڽ����θ� ���������� ���� �ǹ��մϴ�.
(1�� �Ҽ��� �ƴմϴ�.)

���� ����
n�� 2�̻� 1000000������ �ڿ����Դϴ�.

--����� ��--
n	result
10	4
5	3
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector<bool> primeNum(n + 1);
    for (int i = 2; i <= n; i++) {
        if (primeNum[i] == false)
            answer++;

        for (int j = i; j <= n; j += i)
            primeNum[j] = true;
    }

    //�ð��ʰ�
    /*
    vector<int> primeNum(n+1);
    for (int i = 0; i < primeNum.size(); i++) {
        primeNum[i] = i;
    }
    for (int i = 2; i < primeNum.size(); i++) {        
        for (int j = i+1; j < primeNum.size(); j++) {
            if (primeNum[j] % primeNum[i] == 0)
                primeNum.erase(primeNum.begin() + j--);
        }
        
    }
    answer = primeNum.size() - 2;*/

    return answer;
}

int main(){

    cout << solution(10);
}
