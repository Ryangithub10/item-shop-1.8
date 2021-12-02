#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	char buy;
	char buyitem;
	char buyacces;
	char buyweapon;
	char con;
	int count;

	//start main loop
	while (true) {
		puts("Hei, welcome to my store, what do you want\n");
		
		puts("1. item");
		puts("2. accessory");
		puts("3. weapon");
		puts("4. exit\n");

		printf(":");
		cin >> buy;

		//execute when the value not match whith option in above
		while (buy != '1' && buy != '2' && buy != '3' && buy != '4') {
			puts("please chose in menu!\n");

			puts("1. item");
			puts("2. accessory");
			puts("3. weapon");
			puts("4. exit\n");

			printf(":");
			cin >> buy;
		}

		//start second loop
		if (buy == '1') {
			while (true) {
				puts("what do you want\n");

				puts("1. health capsul\t DRP.1000");
				puts("2. stamina capsul\t DRP.2000");
				puts("3. fried indomie\t DRP.10000");
				puts("4. energy drink\t\t DRP.5500");
				puts("5. revive chip\t\t DRP.30000");
				puts("6. back\n");

				printf(":");
				cin >> buyitem;

				if (buyitem == '1') {
					puts("health capsul\n");
					puts("HP: 30\n");

					puts("do you want to buy it\n");
					printf("y/n: ");
					cin >> con;


					if (con == 'y') {
						printf("How many: ");
						cin >> count;
						int total = count * 1000;

						printf("you buy %d health capsul with price: DRP.%d\n\n", count, total);
					}

				} 
				else if (buyitem == '6') {
					break;
				}
			}
			//end second loop
		}
		else if (buy == '4') {
			break;
		}
	}
	//end main loop

	puts("have a nice day\n");

	puts("and don't forget to give me the star");

	return 0;
}
