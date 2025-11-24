#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE 
void task();
main() {
	setlocale(LC_CTYPE, "RUS");
	task();
}
void task() {
	do {
		char Predl[100], letter;
		int count_words = 0;
		printf("Ваше предложение:\n");
		fgets(Predl, 100, stdin);
		printf("Введите букву:\n");
		scanf(" %c", &letter);

		for (int i = 0; Predl[i] != '\0'; i++)
			if ((i == 0 || Predl[i - 1] == ' ') && Predl[i] == letter) count_words++;
		printf("В предложении %d слов(а), начинающихся с %c\n", count_words, letter);
		printf("Продолжить ? (Да - любая клавиша, нет - n)\n");
		char a;
		getchar();
		if (a = getchar() == 'n') break;
	} while (1);
}