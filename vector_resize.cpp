#include <vector>
#include <iostream>

int main(void)
{
	std::vector<uint8_t> packet_out;
	std::vector<uint8_t> temp(10,10);

	printf("packet size : %d\n", packet_out.capacity());
	packet_out.push_back(10);

	for(int i = 0 ; i < packet_out.size() ; i++)
		printf("%d ", packet_out[i]);
	printf("\n");

	packet_out.resize(20);

	printf("packet size : %d\n", packet_out.capacity());
	packet_out.assign(temp.begin(), temp.end());

	printf("packet size : %d\n", packet_out.capacity());
	for(int i = 0 ; i < packet_out.size() ; i++)
		printf("%d ", packet_out[i]);
	printf("\n");

	return 0;
}
