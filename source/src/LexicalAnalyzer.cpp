
#include"../include/LexicalAnalyzer.h"

bool LexicalAnalyzer::RecPar(string Str, int parSet[], int parNum) {
	// parSet�ǲ����б�����ֵΪ0�ǿո�1���ַ���2�����֡�parNum�ǲ���������
	// ֵС�ڵ���0��ʾ��ֹ״̬��Ϊ�����ǡ�
	int point = 0;
	for (unsigned int pos = 0; pos < Str.length(); pos++) {
		if (parSet[point] == 0) {
			if (Str[pos] != ' ') {
				point++;
			}
		}
		else if (abs(parSet[point]) == 1) {
			if (Str[pos] == ' ') {
				point++;
			}
			else if (!islower(Str[pos])) {
				return false;
			}
		}
		else if (abs(parSet[point]) == 2) {
			if (Str[pos] == ' ') {
				point++;
			}
			else if (!isdigit(Str[pos])) {
				return false;
			}
		}
		if (point > parNum) {
			return false;
		}
	}
	return parSet[point] < 0;
}