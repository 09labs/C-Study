#include <iostream>
#include <vector>

void test_function(uint8_t req_len)
{
	printf("req len : %d\n", req_len);
}

int main(void)
{
	std::vector<uint8_t> packet_in;

	packet_in.push_back(1);
	packet_in.push_back(1);
	packet_in.push_back(1);
	packet_in.push_back(1);
	packet_in.push_back(1);

	uint8_t size = packet_in.size() - 2;

	test_function(size);

	return 0;
}

