#include "tasks.h"

/*	Task X. Non-Unique Number Digits [неуникальные цифры числа]
*
*	Дано целое число. Необходимо определить, есть ли в числе повторяющиеся цифры.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа long long.
*
*	Формат выходных данных [output]
*	Должно быть возвращено булевское значение - результат решения задания.
*
*	[ input 1]: 54321
*	[output 1]: false
*
*	[ input 2]: 11111
*	[output 2]: true
*
*	[ input 3]: 121
*	[output 3]: true
*
*	[ input 4]: -12345
*	[output 4]: false
*
*	[ input 5]: 0
*	[output 5]: false
*/

bool taskX(long long n) {
	n *= (n > 0) ? 1 : -1;

	int array[25];
	int size = 0;

	for (int i = 0; n > 0; i++, n /= 10, size++) {
		array[i] = n % 10;
	}

	for (int i = 0; i < size-1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (array[i] == array[j]) return true;
		}
	}

	return false;
}