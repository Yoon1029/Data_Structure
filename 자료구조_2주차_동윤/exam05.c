#include <stdio.h>


void hanoi(int n, char start, char target, char work);

int main() {
	hanoi(3, 'A', 'B', 'C');
	

}

void hanoi(n, start, target, work) {
	if (n == 1)
		printf("%c���� ���� %d��(��) %c�� �ű�\n", start, n, work);
	else
	{
		hanoi(n - 1, start, work, target);
		printf("% c���� ���� % d��(��) % c�� �ű�\n", start, n, work);
		hanoi(n - 1, target, start, work);
	}

}