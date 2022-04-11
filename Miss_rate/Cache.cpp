#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	int a, b, c, d[5002];
	int block_size;
	int location[5002];
	int cache_size_kilobyte;
	int cache_size_byte;
	int num_of_cache_block;
	int set;
	int num_of_set;

	ifstream in("trace.txt");  // Open a file for text input.

	if (!in) {
		cout << "Cannot open file.\n";

		return 1;
	}

	in >> hex >> a;
	in >> hex >> b;
	in >> hex >> c;

	// Read trace.txt (Hint 1)
	for (int i = 0; i < 5002; i++)
	{
		in >> hex >> d[i];
	}

	in.close();

	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";

	// Show what the program read. (Hint 1)
	for (int i = 0; i < 5002; i++)
	{
		cout << d[i] << "\n";
	}

	cout << "What is the block size of cache? (Byte)";

	cin >> block_size;

	switch (block_size)
	{
	case 8:
		for (int i = 0; i < 5002; i++)
		{
			location[i] = d[i] / 8;
		}
		
		break;

	case 16:

		for (int i = 0; i < 5002; i++)
		{
			location[i] = d[i] / 16;
		}

		break;

	case 32:

		for (int i = 0; i < 5002; i++)
		{
			location[i] = d[i] / 32;

		}

		break;

	case 64:

		for (int i = 0; i < 5002; i++)
		{
			location[i] = d[i] / 64;
		}

		break;

	default:
		break;
	}

	// Show the memory address' position in memory blocks. (Hint 2)
	for (int i = 0; i < 5002; i++)
	{
		cout << location[i] << "\n";
	}

	cout << "What is the size of cache?";
	cin >> cache_size_kilobyte;

	switch (cache_size_kilobyte)
	{
	case 1:
		cache_size_byte = cache_size_kilobyte * 1024;
		num_of_cache_block = cache_size_byte / block_size;

	default:
		break;
	}

	cout << "Specify n of n-set associative:";
	cin >> set;

	num_of_cache_block = cache_size_byte / block_size;

	num_of_set = num_of_cache_block / set;

	return 0;
}