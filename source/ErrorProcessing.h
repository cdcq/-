
#ifndef _ERROR_PROCESSING_H
#define _ERROR_PROCESSING_H

#include<cstdio>

class Error{
public:

	void throwError(int errorInfo);
}error;

void Error::throwError(int errorInfo){
	printf("Error: ");
	if(errorInfo == -1){
		printf("�޷��������룬����ָ���ʽ\n");
		printf("����help����ȡ����\n");
	}

	if(errorInfo == -201){
		printf("�������Ѵ���\n");
	}
	if(errorInfo == -202){
		printf("����Ԫ�ذ����Ƿ��ַ�\n");
	}
	if(errorInfo == -203){
		printf("����������һ��\n");
	}

	if(errorInfo == 0){
		printf("���ܳ�0��\n");
	}
}

#endif


