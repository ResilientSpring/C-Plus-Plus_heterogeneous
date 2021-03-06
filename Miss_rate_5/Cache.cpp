#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdio.h>
#include <new>
using namespace std;

int main() {
	int d[5004];
	int block_size;
	int location[5004];
	int cache_size_kilobyte;
	int cache_size_byte;
	int num_of_cache_block;
	int set;
	int num_of_set;
	int corresponding_set[5004];
	int num_of_cache_block_in_a_set;
	int miss_count = 0;
	int hit_count = 0;

	ofstream out;

	// Verifying the program using test cases from the problem statement. (0x0A985540)
	ifstream in("augmented_trace.txt");  // Open a file for text input.

	if (!in) {
		cout << "Cannot open file.\n";

		return 1;
	}

	// Read trace.txt (Hint 1)
	for (int i = 0; i < 5004; i++)
	{
		in >> hex >> d[i];
	}

	in.close();

	// Show what the program read. (Hint 1)
	for (int i = 0; i < 5004; i++)
	{
		cout << d[i] << "\n";
	}

	// Save what the program read.
	out.open("Hex_to_dec.txt");

	if (!out)
	{
		cout << "Cannot create or open file.";

		return 1;
	}

	// Output to the file.
	for (int i = 0; i < 5004; i++)
	{
		out << d[i] << "\n";
	}

	// Close Hex_to_dec.txt
	out.close();

	// Hint 2
	cout << "What is the block size of cache? (Byte)" << "\n";

	cin >> block_size;

	switch (block_size)
	{
	case 8:
		for (int i = 0; i < 5004; i++)
		{
			location[i] = d[i] / 8;
		}

		break;

	case 16:

		for (int i = 0; i < 5004; i++)
		{
			location[i] = d[i] / 16;
		}

		break;

	case 32:

		for (int i = 0; i < 5004; i++)
		{
			location[i] = d[i] / 32;

		}

		break;

	case 64:

		for (int i = 0; i < 5004; i++)
		{
			location[i] = d[i] / 64;
		}

		break;

	default:
		break;
	}

	// Show the memory address' position in memory blocks. (Hint 2)
	for (int i = 0; i < 5004; i++)
	{
		cout << location[i] << "\n";
	}

	// Write down memory address' position in memory blocks.
	out.open("Which_block_is_the_memory_address_in.txt");

	if (!out)
	{
		cout << "Cannot create or open file.";

		return 1;
	}

	// Output to the file.
	for (int i = 0; i < 5004; i++)
	{
		out << location[i] << "\n";
	}

	// Close Which_block_is_the_memory_address_in.txt
	out.close();

	// Hint 3
	cout << "What is the size of cache? (kilo-byte)" << "\n";
	cin >> cache_size_kilobyte;

	cache_size_byte = cache_size_kilobyte * 1024;
	num_of_cache_block = cache_size_byte / block_size;

	// Hint 3
	cout << "Specify the n of n-set associative:" << "\n";
	cin >> set;

	num_of_set = num_of_cache_block / set;

	// Calculate which set does the memory block of interest correspond to? (Hint 3)

	for (int i = 0; i < 5004; i++)
	{
		corresponding_set[i] = location[i] % num_of_set;
	}

	// Show the set to which the memory block of interest correspond. (Hint 3)
	for (int i = 0; i < 5004; i++)
	{
		cout << corresponding_set[i] << "\n";
	}

	// Save each memory block's corresponding set.
	out.open("Which_set_does_memory_block_belong_to.txt");

	if (!out)
	{
		cout << "Cannot create or open file.";

		return 1;
	}

	// Output to the file.
	for (int i = 0; i < 5004; i++)
	{
		out << corresponding_set[i] << "\n";
	}

	// Close Which_set_does_memory_block_belong_to.txt
	out.close();

	// Hint 4
	num_of_cache_block_in_a_set = num_of_cache_block / num_of_set;

	auto inside_cache = new int[num_of_cache_block_in_a_set][4]();

	// Initialize cache contents to zero. (Hint 4)
	for (int i = 0; i < num_of_cache_block_in_a_set; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			inside_cache[i][j] = 0;
		}

	}

	// Reaffirm if the cache contents are zero. (Hint 4)
	for (int i = 0; i < num_of_cache_block_in_a_set; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << inside_cache[i][j] << "\n";
		}

	}

	// Hint 4
	if (inside_cache[0][0] && inside_cache[1][0] == 0)
	{
		inside_cache[0][0] = 1;
		miss_count++;
	}

	// Show the number of miss by far.
	cout << "The number of miss by far: " << miss_count << "\n";

	// Hint 5
	for (int i = 0; i < 5004; i++)
	{
		if (location[i + 1] == location[i])
		{
			hit_count++;
		}

	}

	// Show the number of hit by far.
	cout << "The number of hit by far: " << hit_count << "\n";


	return 0;
}