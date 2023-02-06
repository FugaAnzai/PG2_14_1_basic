#include <stdio.h>
#include "Pokemon.h"

int main() {

	Pokemon pokemon1("ラグラージ");
	Pokemon pokemon2("ルカリオ");

	pokemon2 = pokemon1;

	int i = 0;

	while (i != 1) {
		printf("コンソールアプリケーションを終了する場合は数字の1を入力してEnterキーを押してください");
		scanf_s("%d", &i);
	}
	return 0;
}