#include <iostream>
#include <vector>

int main(void)
{
	std::vector<uint8_t> v;
	uint8_t array[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

	v.insert(v.begin(), std::begin(array), std::begin(array) + 4);

	for(int i = 0 ; i < v.size() ; i++)
		printf("%d\n", v[i]);

	return 0;
}
