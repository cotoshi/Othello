#include "settings.h"
//その場所に置くことができるかを確認する関数
int check(int y,int x,int turn)
{
	int vec;

	//どれか一方向でもひっくり返るか確認
	for(vec = 0 ; vec < 8 ; ++vec){
		if(checkFlip(y,x,turn,vec) == 1) return 1;
	}

	return 0;
}
