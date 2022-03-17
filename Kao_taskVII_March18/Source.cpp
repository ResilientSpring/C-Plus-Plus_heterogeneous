#include <stdio.h>
using namespace std;


	void print_minimum(int n) {
		int input;
		int current_min, flag_actv = 0;

		for (int i = 0; i < n; i++)
		{
			scanf("%d", &input);

			if (!flag_actv)
				current_min = input, flag_actv = 1;
			/*
				????? This part is not finished yet.
			*/

		}
		printf("%d\n", current_min);
	}
