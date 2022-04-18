#include <stdio.h>
#include <Windows.h>
using namespace std;

int main() {
	SYSTEM_INFO system_info;

	GetSystemInfo(&system_info);

	printf("The page size for this system is %u bytes.\n", system_info.dwPageSize);

	return 0;
}