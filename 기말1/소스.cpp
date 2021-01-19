#include <iostream>
#define N 6
int main() {

	int temp; //line 1

	int list[N] = { 7, 4, 5, 1, 3, 10 }; //line 2


	for (int ii = N - 1; ii > 0; ii--) //line 3 // i라는 변수를 삽입하는데 크기가 6인 n에서 1을 뺀 값을 삽입한대. 그럼 5가 되겠지. 0보다 큰 숫자일 때까지만 감소를 하는거네

		for (int jj = 0; jj < ii; jj++) //line 4 // 0이라는 변수를 삽입하고 그게 for문의 가장 바깥인 숫자보다 작을 때까지만 계속 증가를 시키는거네
			if (list[jj] < list[jj + 1]) { //line 5 // 만약 리스트[맨 바깥쪽 숫자] 보다 리스트[안쪽 숫자]가 작을 경우
				temp = list[jj]; //line 6 // temp라는 변수는 list[안쪽 숫자]의 값이 된다. 
				list[jj] = list[jj + 1]; //line 7 // list[안쪽 숫자]=list[안쪽숫자 + 1]
				list[jj + 1] = temp; //line 8 //list[바깥쪽 숫자+1]는 temp값과 같게 한다. 
			} //line 9

	// 저 이중 for문을 통해서 리스트 배열이 바뀌게 되고 그다음 바뀐 리스트값을 출력하도록 하는게 문제의 의도였네. 
	// 그럼 이중 for문을 통해 어떻게 내림차순이 되는 지  차례대로 쓰면 되는거야.



	for (int x = 0; x < N; x++) { //line 10 /// for문인데, 0부터 크기 6이 되기전까지 계속 늘리는거네
		printf("%d ", list[x]); //line 11  // 리스트 안에 있는 숫자를 계속 출력하도록 하는거야.
	} //line 12



	return 0;

}