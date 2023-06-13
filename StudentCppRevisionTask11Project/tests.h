#pragma once
#include <climits>
#include "tasks.h"

#define RIGHT " - completed successfully. Well DONE!!!"
#define WRONG " - was not running successfully. ERROR!"

void testingTask01() {
	bool result = task01(15) == 5
		&& task01(49) == 7
		&& task01(30) == 15
		&& task01(1) == 0
		&& task01(-15) == 0
		&& task01(0) == 0
		&& task01(2) == 1
		&& task01(3) == 1
		&& task01(4) == 2
		&& task01(5) == 1
		&& task01(6) == 3
		&& task01(7) == 1
		&& task01(8) == 4
		&& task01(9) == 3
		&& task01(10) == 5
		&& task01(31) == 1
		&& task01(32) == 16
		&& task01(INT_MAX - 1) == 1'073'741'823
		&& task01(INT_MIN + 1) == 0;

	cout << "Task 01 [The Greatest Natural Divisor]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask02() {
	bool result = task02(21, 28) == 7
		&& task02(28, 21) == 7
		&& task02(18, 12) == 6
		&& task02(24, 36) == 12
		&& task02(24, 12) == 12
		&& task02(5, 13) == 1
		&& task02(13, 5) == 1
		&& task02(270, 192) == 6
		&& task02(192, 270) == 6
		&& task02(36, 36) == 36
		&& task02(36, 28) == 4
		&& task02(1, 1) == 1
		&& task02(-1, 1) == 0
		&& task02(1, -1) == 0
		&& task02(-1, -1) == 0
		&& task02(1, 0) == 0
		&& task02(0, 1) == 0
		&& task02(0, 0) == 0;

	cout << "Task 02 [The Greatest Common Divisor I]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask03() {
	bool result = task03(21, 28, 63) == 7
		&& task03(28, 21, 63) == 7
		&& task03(21, 63, 28) == 7
		&& task03(63, 21, 28) == 7
		&& task03(28, 63, 21) == 7
		&& task03(63, 28, 21) == 7
		&& task03(18, 12, 24) == 6
		&& task03(24, 48, 36) == 12
		&& task03(5, 13, 3) == 1
		&& task03(270, 192, 72) == 6
		&& task03(36, 36, 36) == 36
		&& task03(7, 7, 7) == 7
		&& task03(1, 1, 1) == 1
		&& task03(-1, 1, 1) == 0
		&& task03(1, -1, 1) == 0
		&& task03(1, 1, -1) == 0
		&& task03(-1, -1, -1) == 0
		&& task03(1, 1, 0) == 0
		&& task03(1, 0, 1) == 0
		&& task03(0, 1, 1) == 0
		&& task03(0, 0, 0) == 0;

	cout << "Task 03 [The Greatest Common Divisor II]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask04() {
	bool result = task04(21, 28) == 84
		&& task04(28, 21) == 84
		&& task04(18, 12) == 36
		&& task04(24, 36) == 72
		&& task04(24, 12) == 24
		&& task04(5, 13) == 65
		&& task04(13, 5) == 65
		&& task04(270, 192) == 8640
		&& task04(192, 270) == 8640
		&& task04(36, 36) == 36
		&& task04(36, 28) == 252
		&& task04(1, 1) == 1
		&& task04(-1, 1) == 0
		&& task04(1, -1) == 0
		&& task04(-1, -1) == 0
		&& task04(1, 0) == 0
		&& task04(0, 1) == 0
		&& task04(0, 0) == 0;

	cout << "Task 04 [Least Common Multiple I]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask05() {
	bool result = task05(21, 28, 42) == 84
		&& task05(28, 21, 42) == 84
		&& task05(28, 42, 21) == 84
		&& task05(42, 28, 21) == 84
		&& task05(21, 42, 28) == 84
		&& task05(42, 21, 28) == 84
		&& task05(18, 12, 36) == 36
		&& task05(24, 36, 12) == 72
		&& task05(24, 12, 12) == 24
		&& task05(12, 24, 12) == 24
		&& task05(12, 12, 24) == 24
		&& task05(5, 13, 2) == 130
		&& task05(270, 192, 2160) == 8640
		&& task05(192, 2160, 270) == 8640
		&& task05(2160, 270, 192) == 8640
		&& task05(36, 36, 36) == 36
		&& task05(7, 7, 7) == 7
		&& task05(1, 1, 1) == 1
		&& task05(-1, 1, 1) == 0
		&& task05(1, -1, 1) == 0
		&& task05(1, 1, -1) == 0
		&& task05(-1, -1, -1) == 0
		&& task05(1, 0, 0) == 0
		&& task05(0, 1, 0) == 0
		&& task05(0, 0, 1) == 0
		&& task05(0, 0, 0) == 0;

	cout << "Task 05 [Least Common Multiple II]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask06() {
	bool result = task06(23232) == 1
		&& task06(2414241) == 2
		&& task06(-13245) == 1
		&& task06(2121212) == 3
		&& task06(15143120) == 2
		&& task06(12345) == 0
		&& task06(11111) == 0
		&& task06(1) == 0
		&& task06(-1) == 0
		&& task06(12) == 0
		&& task06(-21) == 0
		&& task06(123) == 0
		&& task06(-321) == 0
		&& task06(212) == 1
		&& task06(-12121) == 1
		&& task06(1212121) == 2
		&& task06(-2121212) == 3
		&& task06(12'345'678'987'654'321LL) == 0
		&& task06(-9'223'372'036'854'775'807LL) == 4
		&& task06( 9'223'372'036'854'775'807LL) == 4;

	cout << "Task 06 [The Count of Local Minima]" << (result ? RIGHT : WRONG) << endl;
}

void testingTaskX() {
	bool result = !taskX(12345)
		&& !taskX(54321)
		&& !taskX(0)
		&& taskX(11111)
		&& taskX(121)
		&& !taskX(-12345)
		&& !taskX(-54321)
		&& taskX(11345)
		&& taskX(54311)
		&& taskX(12145)
		&& taskX(54121)
		&& taskX(-11345)
		&& taskX(-54311)
		&& !taskX(1234567890)
		&& !taskX(-1234567890)
		&& taskX(900)
		&& taskX(-900)
		&& taskX(-11111)
		&& taskX(999999)
		&& taskX(-999999)
		&& taskX(1000000)
		&& taskX(-1000000);

	cout << "Task X [Non-Unique Number Digits] " << (result ? RIGHT : WRONG) << endl;
}