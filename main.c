#include <stdio.h>
#include "osero.h"
#include "settings.h"





int main()
{
	int turn = 0;

	//�Ֆʂ̏�����
	setBoard();

	//�Q�[���̃��C�����[�v
	while(turn < 2){
		//�ǂ���̎�Ԃ��\��
		if(turn == 0) printf("turn:��\n");
		else printf("turn:��\n");

		//�Ֆʕ\��
		disp();

		//����
		input(turn);

		//��Ԍ��
		turn = (turn + 1) % 2;

		//�I������
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
