#include <iostream>
#include <vector>
#include <string.h>
#include <stdio.h>
typedef struct 
{
	uint8_t netfn;
	uint8_t cmd;
	std::vector<uint8_t> data;
} ipmi_res_t;

int main(void)
{
	ipmi_res_t response;
	
	response.data.push_back(1);
	response.data.push_back(2);
	response.data.push_back(3);
	response.data.push_back(4);
	response.data.push_back(5);

	for(int i = 0 ; i < 4 ; i++)
		printf("response : %d\n", response.data[i]);
	
	return 0;
}
