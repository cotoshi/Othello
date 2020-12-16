#include <stdio.h>
#include "osero.h"
#include "settings.h"





int main()
{
	int turn = 0;

	//盤面の初期化
	setBoard();

	//ゲームのメインループ
	while(turn < 2){
		//どちらの手番か表示
		if(turn == 0) printf("turn:○\n");
		else printf("turn:●\n");

		//盤面表示
		disp();

		//入力
		input(turn);

		//手番交替
		turn = (turn + 1) % 2;

		//終了判定
		switch(checkEnd(turn)){
			case 1:
				printf("pass\n");
				turn = (turn + 1) % 2;
				break;
			case 2:
				printf("game end\n");
				turn = 2;
				break;
			default:
				break;
		}

	}

	checkWinner();

	return 0;

}
