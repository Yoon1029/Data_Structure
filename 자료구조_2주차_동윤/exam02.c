#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char str[100];
	int length = 0;
	int i = 0;

	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", str);
	printf("�Էµ� ���ڿ���\n%s\n�Դϴ�", str);

	while (str[i] != '\0') {
		length++;
		i++;
	}
	printf("�Էµ� ���ڿ��� ���� = %d", length);

}