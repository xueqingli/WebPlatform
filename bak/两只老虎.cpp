#include <iostream>
using namespace std;

#include "windows.h"

/**每分钟标准节拍数*/
#define BEAT_NUM_PER_MINUTE 160

/**一个标准节拍的时长*/
#define TIME_PER_BEAT 60*1000/BEAT_NUM_PER_MINUTE

/**C对应的频率*/
#define C_DO_1 261.6
#define D_RE_2 293.7
#define E_MI_3 329.6
#define F_FA_4 349.2
#define G_SOL_5 392.0
#define A_LA_6 440.0
#define B_SI_7 493.9

/**两只老虎*/

int main(int argc, char* argv[]) {

	Beep(C_DO_1, TIME_PER_BEAT);
	Beep(D_RE_2, TIME_PER_BEAT);
	Beep(E_MI_3, TIME_PER_BEAT);
	Beep(C_DO_1, TIME_PER_BEAT);

	Beep(C_DO_1, TIME_PER_BEAT);
	Beep(D_RE_2, TIME_PER_BEAT);
	Beep(E_MI_3, TIME_PER_BEAT);
	Beep(C_DO_1, TIME_PER_BEAT);

	Beep(E_MI_3, TIME_PER_BEAT);
	Beep(F_FA_4, TIME_PER_BEAT);
	Beep(G_SOL_5, TIME_PER_BEAT*2);

	Beep(E_MI_3, TIME_PER_BEAT);
	Beep(F_FA_4, TIME_PER_BEAT);
	Beep(G_SOL_5, TIME_PER_BEAT*2);

	Beep(G_SOL_5, TIME_PER_BEAT*(3.0/4.0));
	Beep(A_LA_6, TIME_PER_BEAT*(1.0/4.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(3.0/4.0));
	Beep(F_FA_4, TIME_PER_BEAT*(1.0/4.0));
	Beep(E_MI_3, TIME_PER_BEAT);
	Beep(C_DO_1, TIME_PER_BEAT);

	Beep(G_SOL_5, TIME_PER_BEAT*(3.0/4.0));
	Beep(A_LA_6, TIME_PER_BEAT*(1.0/4.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(3.0/4.0));
	Beep(F_FA_4, TIME_PER_BEAT*(1.0/4.0));
	Beep(E_MI_3, TIME_PER_BEAT);
	Beep(C_DO_1, TIME_PER_BEAT);

	Beep(D_RE_2, TIME_PER_BEAT);
	Beep(G_SOL_5*(1.0/2.0), TIME_PER_BEAT);
	Beep(C_DO_1, TIME_PER_BEAT*2);

	Beep(D_RE_2, TIME_PER_BEAT);
	Beep(G_SOL_5*(1.0/2.0), TIME_PER_BEAT);
	Beep(C_DO_1, TIME_PER_BEAT*2);

	return 0;
}
