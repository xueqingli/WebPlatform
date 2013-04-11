#include "windows.h"

#define ONE_BEEP 600
#define HALF_BEEP 300

#define NOTE_1 440
#define NOTE_2 495
#define NOTE_3 550
#define NOTE_4 587
#define NOTE_5 660
#define NOTE_6 733
#define NOTE_7 825
#define NOTE_NONE Sleep(ONE_BEEP);

/**ËÍ±ð*/

int main(int argc, char* argv[]) {

	Beep(NOTE_5, ONE_BEEP);
	Beep(NOTE_3, HALF_BEEP);
	Beep(NOTE_5, HALF_BEEP);
	Beep(NOTE_1 * 2, ONE_BEEP * 2);

	Beep(NOTE_6, ONE_BEEP);
	Beep(NOTE_1 * 2, ONE_BEEP);
	Beep(NOTE_5, ONE_BEEP * 2);

	Beep(NOTE_5, ONE_BEEP);
	Beep(NOTE_1, HALF_BEEP);
	Beep(NOTE_2, HALF_BEEP);
	Beep(NOTE_3, ONE_BEEP);
	Beep(NOTE_2, HALF_BEEP);
	Beep(NOTE_1, HALF_BEEP);
	Beep(NOTE_2, ONE_BEEP * 4);

	Beep(NOTE_5, ONE_BEEP);
	Beep(NOTE_3, HALF_BEEP);
	Beep(NOTE_5, HALF_BEEP);
	Beep(NOTE_1 * 2, HALF_BEEP * 3);
	Beep(NOTE_7, HALF_BEEP);
	Beep(NOTE_6, ONE_BEEP);
	Beep(NOTE_1 * 2, ONE_BEEP);
	Beep(NOTE_5, ONE_BEEP * 2);

	Beep(NOTE_5, ONE_BEEP);
	Beep(NOTE_2, HALF_BEEP);
	Beep(NOTE_3, HALF_BEEP);
	Beep(NOTE_4, HALF_BEEP * 3);
	Beep(NOTE_7 / 2, HALF_BEEP);
	Beep(NOTE_1, ONE_BEEP * 4);

	Beep(NOTE_6, ONE_BEEP);
	Beep(NOTE_1 * 2, ONE_BEEP);
	Beep(NOTE_1 * 2, ONE_BEEP * 2);

	Beep(NOTE_7, ONE_BEEP);
	Beep(NOTE_6, HALF_BEEP);
	Beep(NOTE_7, HALF_BEEP);
	Beep(NOTE_1 * 2, ONE_BEEP * 2);

	Beep(NOTE_6, HALF_BEEP);
	Beep(NOTE_7, HALF_BEEP);
	Beep(NOTE_1 * 2, HALF_BEEP);
	Beep(NOTE_6, HALF_BEEP);
	Beep(NOTE_6, HALF_BEEP);
	Beep(NOTE_5, HALF_BEEP);
	Beep(NOTE_3, HALF_BEEP);
	Beep(NOTE_1, HALF_BEEP);
	Beep(NOTE_2, ONE_BEEP * 4);

	Beep(NOTE_5, ONE_BEEP);
	Beep(NOTE_3, HALF_BEEP);
	Beep(NOTE_5, HALF_BEEP);
	Beep(NOTE_1 * 2, HALF_BEEP * 3);
	Beep(NOTE_7, HALF_BEEP);
	Beep(NOTE_6, ONE_BEEP);
	Beep(NOTE_1 * 2, ONE_BEEP);
	Beep(NOTE_5, ONE_BEEP * 2);

	Beep(NOTE_5, ONE_BEEP);
	Beep(NOTE_2, HALF_BEEP);
	Beep(NOTE_3, HALF_BEEP);
	Beep(NOTE_4, HALF_BEEP * 3);
	Beep(NOTE_7 / 2, HALF_BEEP);
	Beep(NOTE_1, ONE_BEEP * 3);
	return 0;
}
