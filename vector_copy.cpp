#include <iostream>
#include <vector>

int main(void)
{
	std::vector<uint8_t> a;

	// 원소 삽입
	a.push_back(10);
	a.push_back(30);
	a.push_back(70);

	std::vector<uint8_t> b;
	//b 벡터 사이즈 리사이징
	b.resize(a.size());

	//a벡터를 b벡터로 복사
	copy(a.begin(), a.end(), b.begin());

	for(std::vector<uint8_t>::iterator it = b.begin(); it != b.end() ; ++it)
		printf("%d\n", *it);
	return 0;
}
