#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	char buy;
	char buyitem;
	char buyacces;
	char buyweapon;
	int count;

	while (true) {
		puts("Hei, welcome to my store, what do you want\n");
		
		puts("1. item");
		puts("2. accessory");
		puts("3. weapon");
		puts("4. exit\n");

		printf(":");
		cin >> buy;

		while (buy != '1' && buy != '2' && buy != '3' && buy != '4') {
			puts("please chose in menu!");

			puts("1. item");
			puts("2. accessory");
			puts("3. weapon");
			puts("4. exit\n");

			printf(":");
			cin >> buy;
		}

		if (buy == '4') {
			break;
		}
	}

	puts("have a nice day\n");

	puts("and don't forget to give me the star");

	return 0;
}
