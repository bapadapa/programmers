/*--��ó--
���α׷��ӽ�
--���� ���� --
���ڿ� �� p�� y�� ����
���� ����
�빮�ڿ� �ҹ��ڰ� �����ִ� ���ڿ� s�� �־����ϴ�.s�� 'p'�� ������ 'y'�� ������ ���� ������ True, �ٸ��� False�� return �ϴ� solution�� �ϼ��ϼ���.
'p', 'y' ��� �ϳ��� ���� ���� �׻� True�� �����մϴ�.��, ������ ���� �� �빮�ڿ� �ҹ��ڴ� �������� �ʽ��ϴ�.

���� ��� s�� pPoooyY�� true�� return�ϰ� Pyy��� false�� return�մϴ�.

���ѻ���
���ڿ� s�� ���� : 50 ������ �ڿ���
���ڿ� s�� ���ĺ����θ� �̷���� �ֽ��ϴ�.

--����� ��--
s			answer
pPoooyY		true
Pyy			false
*/

#include <string>
#include <iostream>
#include<algorithm>
using namespace std;

bool solution(string s)
{
	bool answer = false;
	int cntY, cntP;
	cntY = cntP = 0;
	transform(s.begin(), s.end(),s.begin(), ::tolower);
	for (auto elem : s) {
		if (elem == 'p')
			cntP++;
		else if (elem == 'y')
			cntY++;
	}


	answer = cntP == cntY ? true : false;
	

	// [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
	cout << "Hello Cpp" << endl;


	return answer;
}