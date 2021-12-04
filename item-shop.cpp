#include <iostream>
using namespace std;

	char buy;
	char buyitem;
	char buyacces;
	char buyweapon;
	char con;
	int total;

void selectI(char x) {
	int count;

	if (x == '1') {
		puts("health capsul\n");
		puts("HP: +30\n");
		printf("do you want buy it y/n: ");
		cin >> con;

		if (con == 'y') {
			printf("how many: ");
			cin >> count;
			total = count * 1000;
			printf("you buy %d health capsul with price: DRP.%d\n\n", count, total);
		}
	}
}

void selectA(char x) {
	int count;

	if (x == '1') {
		puts("ring exp\n");
		puts("give a bonus exp up to +10\n");
		printf("do you want buy it y/n: ");
		cin >> con;

		if (con == 'y') {
			printf("how many: ");
			cin >> count;

			total = count * 5000;

			printf("you buy %d ring exp with price: DRP.%d\n\n", count, total);
		}
	}
}

void item() {
	//second loop
	while (true) {
		puts("what do you want\n");

		puts("1. health capsul\t DRP.1000");
		puts("2. stamina capsul\t DRP.2000");
		puts("3. indomie goreng\t DRP.10000");
		puts("4. energy drink\t\t DRP.5000");
		puts("5. revive chip\t\t DRP.20000");
		puts("6. back\n");

		printf(":");
		cin >> buyitem;

		selectI(buyitem);
		
		if (buyitem == '6') {
			break;
		}

	}
}

void acces() {	

	//second loop
	while (true) {

		puts("what do you want\n");

		puts("1. ring exp\t\t DRP.5000");
		puts("2. digital vest\t\t DRP.13000");
		puts("3. stamina capsul pouch\t DRP.8000");
		puts("4. back\n");

		printf(":");
		cin >> buyacces;

		selectA(buyacces);
		
		if (buyacces == '4') {
			break;
		}
	}

}



int main(int argc, char *argv[])
{

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
			item();
		}	
		else if (buy == '2') {
			acces();
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
