#include "settings.h"
//���̏ꏊ�ɒu�����Ƃ��ł��邩���m�F����֐�
int check(int y,int x,int turn)
{
	int vec;

	//�ǂꂩ������ł��Ђ�����Ԃ邩�m�F
	for(vec = 0 ; vec < 8 ; ++vec){
		if(checkFlip(y,x,turn,vec) == 1) return 1;
	}

	return 0;
}
