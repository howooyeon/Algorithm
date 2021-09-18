#include <iostream> 
#include <cmath>
using namespace std;

int cnt = 0; // 이동 횟수에 이용.

void hanoi(int n, int start, int mid, int end) {
	if (n == 1) cout << start << " " << end << '\n';
	else {
		hanoi(n - 1, start, end, mid);//1. 1번기둥의 n-1개 -> 2번 기둥으로
		cout << start << " " << end << '\n'; //2. 1번기둥 -> 3번으로
		hanoi(n - 1, mid, start, end);//3. 2번기둥 -> 3번기둥으로
	}
}

void main()
{
	int n; //원반의 수
	cout << "원반의 갯수를 입력하세요 : ";
	cin >> n;
	cout << (1 << n) - 1 << '\n';
	Hanoi(n, 'A, 'B', 'C');    // n개의 원반을 'A'에서 'C'로 이동
		return 0;
}