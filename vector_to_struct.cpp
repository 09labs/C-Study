#include <iostream>
#include <vector>
#include <cstring>
#include <stdio.h>

typedef struct{
	uint8_t a;
	uint8_t b;
	std::vector<uint8_t> c;
} test;

int main(void)
{
	std::vector<uint8_t> h;
	for(int i = 5 ; i < 10 ; i++)
		h.push_back(i);

	test g;
	
	size_t size = h.size() - 2;
	g.a = h[0];
	g.b = h[1];
	
	g.c.resize(size); // 벡터 사이즈를 조정
	copy(h.begin() + 2, h.end(), g.c.begin()); // g.c 벡터에 h벡터 + 2 를 복사

	printf("0 : %d\n", g.a);
	printf("1 : %d\n", g.b);
	printf("2 : %d\n", g.c[0]);
	printf("2 : %d\n", g.c[1]);
	printf("2 : %d\n", g.c[2]);
	return 0;
}
