#include <iostream>
using namespace std;


int Z(int n, int row, int col, int count){

   if (n == 0) return count;
   
   int center = 1 << (n - 1); // n/2로 하면 안되는 이유: n=1일때 center: 1이라서 
                  // n>>1로 하면 안되는 이유: count = 0 부터 시작해야 한다. 1부터 시작하면 항상 1만큼 큰 수를 반환
                  // n>>1로 하면 (1,1)일때 count= 0 임 
   if (row < center && col < center) { //부등호 이렇게 하는 이유 행렬로 보지 말고 배열로 생각해서 
                              // index = 0 부터 시작함...어이없어
      return Z(--n, row, col, count); //--n이 안되는 이유: 함수 내부에서 음수로 돼서..?근데 상관없지않나 이 문제에는
   }
   else if (row < center && col >= center) {
      count += center * center;
      return Z(--n, row, col%center, count);
   }
   else if (row >= center && col < center) {
      count += center * center * 2;// 1, 2 사분면 횟수 더하기
      return Z(--n, row%center, col, count);
   }
   else {
      count += center * center * 3;
      return Z(--n, row%center, col%center, count);
   }
}
int main() {
   int count = 0;
   int n, row, col;
   cin >> n >> row >> col;
   cout << Z(n , row, col, count);
}