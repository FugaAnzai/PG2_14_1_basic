#include <stdio.h>
#include "Pokemon.h"

int main() {

	Pokemon pokemon1("���O���[�W");
	Pokemon pokemon2("���J���I");

	pokemon2 = pokemon1;

	int i = 0;

	while (i != 1) {
		printf("�R���\�[���A�v���P�[�V�������I������ꍇ�͐�����1����͂���Enter�L�[�������Ă�������");
		scanf_s("%d", &i);
	}
	return 0;
}