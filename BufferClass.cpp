#include "BufferClass.h"
#include <random>
double getProb() {
	float r = (float)rand() / RAND_MAX;
	return r;
}
int* generateData(int* &inbuf, int &count) {
	int r;
	r = rand() % (9 + 1);
	if (count < BUFSIZE) {
		inbuf[count++] = r;
		return NULL;
	}
	else {
		int *temp = inbuf;
		inbuf = (int*)malloc(sizeof(int) * BUFSIZE);
		count = 0;
		return temp;
	}
}
void processData(int* &outbuf, int &count, int &total) {
	if (outbuf == NULL) {
		return;
	}
	if (count < BUFSIZE)
	{
		total += outbuf[count++];
	}
	else {
		count = 0;
		free(outbuf);
		outbuf = NULL;
	}
}
