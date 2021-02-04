#include <iostream>
#include <vector>

int main(void)
{
	std::vector<uint8_t> test;
	std::vector<uint8_t> source(4,1);

	test.insert(test.begin(), source.begin(), source.end());
	std::vector<uint8_t>::iterator it = test.end();
	test.insert(it, 3);
	it = test.end();
	test.insert(it, 5);
	it = test.end();
	test.insert(it, 2);
	test.insert(it, 2);
	for(int i = 0 ; i < test.size() ; i++)
		printf("%d ", test[i]);
	printf("\n");
	return 0;
}
