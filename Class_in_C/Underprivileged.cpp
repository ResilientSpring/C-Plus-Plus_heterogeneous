#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct student {
	char name[20];
	int ID;
	int year;
	char major[30];
	float GPA;
};

typedef struct graduate {
	char name[20];
	int ID;
	int year;
	char major[30];
	float GPA;
};

typedef struct postgraduate {
	char name[20];
	int ID;
	int year;
	char major[30];
	float GPA;
} Postgraduate;

int main() {
	struct student john_smith;
	graduate kelly;
	Postgraduate peter;
	struct student john;
	postgraduate sherry;

	struct student michalle = { "Kerry", 12345, 3, "Engineering", 3.47 };
	Postgraduate joseph = { "Lin", 12345, 3, "Engineering", 3.47 };
}