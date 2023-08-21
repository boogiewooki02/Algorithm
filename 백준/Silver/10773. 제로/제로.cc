#include <iostream>
#include <stack>
using namespace std;

int main() {

	stack<int> stack;
	int k, tmp, sum;
	
	cin >> k;

	tmp = 0;
	for (int i = 0; i < k; i++) {
		cin >> tmp;
		if (tmp == 0) {
			stack.pop();
		}
		else {
			stack.push(tmp);
		}
	}
	
	sum = 0;
	while (stack.size()) {
		sum += stack.top();
		stack.pop();
	}
	cout << sum;
}