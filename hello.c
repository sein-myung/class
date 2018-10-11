#include <stdio.h>

void master(void) {
	printf("MASTER !!!\n");
void second(void) {
	printf("SECOND !!! \n");
}

void myname(void) {
	printf("SEIN MYUNG!!!\n");
}

int main(void) {
	printf("hello git!!\n");
	myname();
	master();
	second();
}

