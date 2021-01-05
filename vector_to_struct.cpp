#include <iostream>
#include <vector>
#include <cstring>
#include <stdio.h>

typedef struct{
	uint8_t a;
	uint8_t b;
	uint8_t c;
	uint8_t d;
	uint8_t e;
} test;

int main(void)
{
	std::vector<uint8_t> h;
	for(int i = 5 ; i < 10 ; i++)
		h.push_back(i);

	test g;

	memcpy(&g, h.data(), sizeof(test));

	printf("0 : %d\n", g.a);
	printf("1 : %d\n", g.b);

	return 0;
}
