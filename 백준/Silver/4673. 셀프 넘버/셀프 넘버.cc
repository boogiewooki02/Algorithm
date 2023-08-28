#include <iostream>
using namespace std;
//브루토 포스 알고리즘

/* d(n)의 값을 구하는 함수 
	int로 반환 */

int num;
bool d(int n) {
	
	int sum = n;
	while (n != 0) { // 각 자릿수의 합까지 더함
		sum += n % 10;
		n /= 10;
	}

	if (sum == num) return true;
	else return false;
}

/* 해당 수가 셀프 넘버인지 판단하는 함수 isSelf
	매개변수까지 d(n) 함수를 돌린 후 매개변수와 동일하면 카운트 증가
	최종 카운트가 0이면 셀프넘버로 판단후 매개변수 출력*/
void isSelf(int x) {

	num = x;
	int cnt = 0;
	for (int i = 1; i <= x; i++) {
		if (d(i)) cnt++; // 생성자가 존재할때 마다 카운트 증가
	}

	if (cnt == 0) cout << x << endl;
	else return;
}

/* main 영역
1부터 10000까지 isSelf(i)를 돌린후 출력*/
int main() {

	for (int i = 1; i <= 10000; i++) {
		isSelf(i);
	}
}