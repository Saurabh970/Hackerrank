#include <iostream>
#include <chrono>
int main(int argc, char *argv[])
{
	auto start = std::chrono::steady_clock::now();
	auto end = std::chrono::steady_clock::now();
	double time_ns = double (std::chrono::duration_cast <std::chrono::nanoseconds>(end-start).count());
	std::cout<<"time :"<<time_ns/1e9;
}