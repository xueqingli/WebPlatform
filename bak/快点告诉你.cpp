#include "windows.h"

//每分钟标准节拍数
#define BEAT_NUM_PER_MINUTE 120

//一个标准节拍的时长
#define TIME_PER_BEAT 60*1000/BEAT_NUM_PER_MINUTE

#define C_DO_1 261.6
#define C_DO_1_# 277.2
#define D_RE_2 293.7
#define D_RE_2_# 311.1
#define E_MI_3 329.6
#define E_MI_3_# 349.2
#define F_FA_4 370.0
#define G_SOL_5 392.0
#define G_SOL_5_# 415.3
#define A_LA_6 440
#define A_LA_6_# 466.2
#define B_SI_7 493.9

#define ONE_BEEP 600
#define HALF_BEEP 300

#define NOTE_NONE Sleep(ONE_BEEP);

int main(int argc, char* argv[]) {
	//Beep(double a , double b);//a:频率单位为Hz.b:持续时间，单位毫秒
	//快点告诉你
	Beep(E_MI_3, TIME_PER_BEAT);
	Beep(E_MI_3, TIME_PER_BEAT);
	Beep(E_MI_3, TIME_PER_BEAT);
	Beep(D_RE_2, TIME_PER_BEAT);

	Beep(E_MI_3, TIME_PER_BEAT/2);
	Beep(C_DO_1, TIME_PER_BEAT/1);
	Beep(C_DO_1, TIME_PER_BEAT/1);
	Beep(C_DO_1, TIME_PER_BEAT*2);

	Beep(E_MI_3, TIME_PER_BEAT/2);
	Beep(E_MI_3, TIME_PER_BEAT/2);
	Beep(E_MI_3, TIME_PER_BEAT/2);
	Beep(D_RE_2, TIME_PER_BEAT/2);
	Beep(E_MI_3, TIME_PER_BEAT);
	Beep(G_SOL_5, TIME_PER_BEAT/2);
	Beep(G_SOL_5, TIME_PER_BEAT/2);

	Beep(G_SOL_5, TIME_PER_BEAT*4);

	Beep(D_RE_2, TIME_PER_BEAT);
	Beep(D_RE_2, TIME_PER_BEAT);
	Beep(D_RE_2, TIME_PER_BEAT);
	Beep(C_DO_1, TIME_PER_BEAT);

	Beep(D_RE_2, TIME_PER_BEAT);
	Beep(E_MI_3, TIME_PER_BEAT/2);
	Beep(D_RE_2, TIME_PER_BEAT/2);
	Beep(D_RE_2, TIME_PER_BEAT*2);

	Beep(G_SOL_5, TIME_PER_BEAT/2);
	Beep(G_SOL_5, TIME_PER_BEAT/2);
	Beep(G_SOL_5, TIME_PER_BEAT/2);
	Beep(G_SOL_5, TIME_PER_BEAT/2);
	Beep(G_SOL_5, TIME_PER_BEAT);
	Beep(E_MI_3, TIME_PER_BEAT/2);
	Beep(D_RE_2, TIME_PER_BEAT/2);

	Beep(D_RE_2, TIME_PER_BEAT*4);

	return 0;
}
