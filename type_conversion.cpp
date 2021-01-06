#include <iostream>
#include <vector>
#include <string>
#include <string.h>
typedef struct {
	uint8_t netfn;
	uint8_t cmd;
	uint8_t data[];
} ipmi_req_t;

typedef struct {
	uint8_t netfn;
	uint8_t cmd;
	uint8_t cc;
	std::vector<uint8_t> data;
} ipmi_res_t;

int main(void)
{
	uint8_t request[6] = {0x06, 0x00, 0x07, 0xff, 0x20, 0x08};
	uint8_t response[6] = {0,};

	ipmi_req_t *req = (ipmi_req_t *) &request;
	ipmi_res_t res;// = malloc(sizeof(ipmi_res_t));

	uint8_t size = sizeof(request.data);
	std::vector<uint8_t> data(req->data, req->data + size-2);
	res.data.resize(size-2);
	//	res.data.push_back(data[0]);
	copy(data.begin(), data.end(), res.data.begin());
	printf("netfn : 0x%02X\n", req->netfn);
	printf("cmd : 0x%02X\n", req->netfn);
	printf("data : ");
	for(int i = 0 ; i < 4 ; i++)
		printf("0x%02X ", data[i]);
	printf("\n");

	return 0;
}
