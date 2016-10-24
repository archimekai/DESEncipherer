/*
2.	2.	编制一个DES算法，设密钥为SECURITY，明文为NETWORK INFORMATION SECURITY，计算密文，并列出每一轮的中间结果

*/

#include "DESUtility.h"
#include <iostream>
#include <string>

using namespace std;
using namespace DESUtility;

void main(){
	cout << "Hello world!\n";
	Encipherer encipherer = Encipherer();
	char key[8] = { 'S', 'E', 'C', 'U', 'R', 'I', 'T', 'Y' };
	//string text = string("NETWORK INFORMATION SECURITY");
	string text = string(" ");
	encipherer.setKey((unsigned char *)key);
	unsigned char * result = encipherer.encipher(text);
	for (int i = 0; i < encipherer.ciphertextSize; ++i) {
		printf("%X", result[i]);
	}
	system("pause");
}