#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <stdio.h>

typedef struct {
	uint8_t test1;
	uint8_t test2;
	uint32_t test3;
} TestStruct;

int main(void)
{
	TestStruct testStruct;
	testStruct.test1 = 0x38;
	testStruct.test2 = 0x14;
	testStruct.test3 = 0x00000022;

	std::vector<uint8_t> dest(sizeof(TestStruct),0); // TestStruct 크기로 벡터 생성
	
	memcpy(dest.data(), &testStruct, sizeof(TestStruct)); // 벡터에 TestStruct 구조체 복사. 복사 시 구조체는 &를 붙여주며
	// dest 벡터는 포인터를 알려줘야 하므로 dest.data()를 적어준다.

	for(int i = 0 ; i < dest.size() ; i++)
		printf("0x%02X ", dest[i]);
	printf("\n");

	return 0;
}
