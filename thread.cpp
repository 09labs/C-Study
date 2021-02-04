#include <stdio.h>
#include <iostream>
#include <thread>
#include <chrono>
#include <unistd.h>


void *test_thread()
{
	std::cout << "Sleep now... " << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(3));
	std::cout << "Sleep exit... " << std::endl;	
}

int main(void)
{
	std::thread t_1(test_thread);

	std::chrono::system_clock::time_point start = std::chrono::system_clock::now();

	t_1.join();

	std::chrono::system_clock::time_point end = std::chrono::system_clock::now();

	std::chrono::duration<double> sec = end - start;

	printf("time : %f\n", sec);

	return 0;
}

