#include <iostream>
using namespace std;

#include "windows.h"

//每分钟标准节拍数
#define BEAT_NUM_PER_MINUTE 80

//一个标准节拍的时长
#define TIME_PER_BEAT 60*1000/BEAT_NUM_PER_MINUTE

#define C_DO_1 261.6
#define C_DO_1_# 277.2
#define D_RE_2 293.7
#define D_RE_2_# 311.1
#define E_MI_3 329.6
#define F_FA_4 349.2
#define F_FA_4_# 370.0
#define G_SOL_5 392.0
#define G_SOL_5_# 415.3
#define A_LA_6 440.0
#define A_LA_6_# 466.2
#define B_SI_7 493.9
#define Q 1.0595

int main(int argc, char* argv[]) {

	//鸿雁

	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));
	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));
	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));
	Beep(E_MI_3, TIME_PER_BEAT);
	Beep(D_RE_2, TIME_PER_BEAT);

	Beep(C_DO_1, TIME_PER_BEAT*3);
	Beep(F_FA_4, TIME_PER_BEAT);

	Beep(G_SOL_5, TIME_PER_BEAT*(1.0/2.0));
	Beep(F_FA_4, TIME_PER_BEAT*(1.0/2.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(1.0/2.0));
	Beep(F_FA_4, TIME_PER_BEAT*(1.0/2.0));
	Beep(G_SOL_5, TIME_PER_BEAT);
	Beep(F_FA_4, TIME_PER_BEAT);

	Beep(D_RE_2, TIME_PER_BEAT);

	//G5 A6 B7 C1 D2 E3 F4
	Beep(C_DO_1*(1.0/2.0), TIME_PER_BEAT*(1.0/2.0));
	Beep(G_SOL_5*(1.0/4.0), TIME_PER_BEAT*(1.0/2.0));
	Beep(D_RE_2*(1.0/2.0), TIME_PER_BEAT*(1.0/2.0));
	Beep(G_SOL_5*(1.0/2.0), TIME_PER_BEAT*(1.0/2.0));
	Beep(E_MI_3*(1.0/2.0), TIME_PER_BEAT);
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(1.0/2.0));
	Beep(G_SOL_5*(1.0/2.0), TIME_PER_BEAT*(1.0/2.0));

	Beep(C_DO_1*(1.0/2.0), TIME_PER_BEAT*(1.0/2.0));
	Beep(G_SOL_5*(1.0/4.0), TIME_PER_BEAT*(1.0/2.0));
	Beep(D_RE_2*(1.0/2.0), TIME_PER_BEAT*(1.0/2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(1.0/2.0));
	Beep(E_MI_3*(1.0/2.0), TIME_PER_BEAT);
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(1.0/2.0));
	Beep(G_SOL_5*(1.0/2.0), TIME_PER_BEAT*(1.0/2.0));

	Beep(E_MI_3, TIME_PER_BEAT*(1.0/3.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/3.0)*(1.0/2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(1.0/2.0));
	Beep(G_SOL_5*(1.0/2.0), TIME_PER_BEAT*(2.0));

	Beep(G_SOL_5, TIME_PER_BEAT);
	Beep(A_LA_6, TIME_PER_BEAT*(1.0/2.0));
	Beep(C_DO_1*(2.0), TIME_PER_BEAT*(1.0/2.0));
	Beep(A_LA_6, TIME_PER_BEAT*(2.0));

	Beep(A_LA_6, TIME_PER_BEAT);
	Beep(G_SOL_5, TIME_PER_BEAT*(1.0/2.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(1.0/2.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));

	Beep(D_RE_2*(1.0/2.0), TIME_PER_BEAT*(1.0/2.0));
	Beep(D_RE_2*(1.0/2.0), TIME_PER_BEAT*(1.0/2.0));
	Beep(D_RE_2*(1.0/2.0), TIME_PER_BEAT*(3.0));

	Beep(G_SOL_5, TIME_PER_BEAT);
	Beep(A_LA_6, TIME_PER_BEAT*(1.0/2.0));
	Beep(C_DO_1*(2.0), TIME_PER_BEAT*(1.0/2.0));
	Beep(A_LA_6, TIME_PER_BEAT*(2.0));

	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(1.0/2.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));

	Beep(E_MI_3, TIME_PER_BEAT);
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(1.0/2.0));
	Beep(G_SOL_5*(1.0/2.0), TIME_PER_BEAT*(1.0/2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(1.0/2.0));
	Beep(E_MI_3, TIME_PER_BEAT);

	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));

	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));

	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));

	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));

	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));

	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));

	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));

	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));

	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));

	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));

	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));

	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));

	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));

	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));

	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));

	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));
	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));

	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));

	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));

	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));

	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));

	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));
	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));
	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));

	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));

	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));

	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));

	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));

	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));

	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));

	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));
	Beep(C_DO_1, TIME_PER_BEAT*(1.0/2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(G_SOL_5, TIME_PER_BEAT*(2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));

	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));

	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));
	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));
	Beep(A_LA_6*(1.0/2.0), TIME_PER_BEAT*(4.0));
	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));
	Beep(D_RE_2, TIME_PER_BEAT*(1.0/2.0));

	Beep(E_MI_3, TIME_PER_BEAT*(1.0/2.0));

	return 0;
}
