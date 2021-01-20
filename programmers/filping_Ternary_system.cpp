#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main() {
	int n = 78413450;
	int answer = 0;
	vector<int> ternary;

	cout << "입력값 = " << n;

	int tmp = pow(n, 1.0 / 3.0);
	tmp = pow(tmp, 3.0);

	while (true) {
		if (n == 0)
			break;
		//answer += tmp * (n % 3);
		ternary.push_back(n % 3);
		n /= 3;
		//tmp /= 3;
	}

	cout << endl <<" test == "  <<  answer;

	int num = 1;	

	while (true) {
		if (ternary.empty())
			break;
		answer += num * ternary.back();
		ternary.pop_back();
		num *= 3;

	}
	//------------test-----------

	cout << endl << "결과값 = "<<answer;

	

}