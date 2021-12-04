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
			printf("you buy %d health capsul with price: RP.%d\n\n", count, total);
		}
	}
	else if (x == '2') {
		puts("stamina capsul\n");
		puts("SP: +20\n");
		printf("do you want buy it y/n: ");
		cin >> con;

		if (con == 'y') {
			printf("how many: ");
			cin >> count;
			total = count * 2000;
			printf("you buy %d stamina capsul with price: RP.%d\n\n", count, total);
		}
	}
	else if (x == '3') {
		puts("Indomie goreng\n");
		puts("HP: +100\n");
		printf("do you want buy it y/n: ");
		cin >> con;

		if (con == 'y') {
			printf("how many: ");
			cin >> count;
			total = count * 10000;
			printf("you buy %d Indomie goreng with price: RP.%d\n\n", count, total);
		}
	}
	else if (x == '4') {
		puts("energy drink\n");
		puts("HP: +30\t SP: +40\n");
		printf("do you want buy it y/n: ");
		cin >> con;

		if (con == 'y') {
			printf("how many: ");
			cin >> count;
			total = count * 5000;
			printf("you buy %d energy drink with price: RP.%d\n\n", count, total);
		}
	}
	else if (x == '5') {
		puts("revive chip\n");
		puts("reviving a your party and give max HP after reviving\n");
		printf("do you want buy it y/n: ");
		cin >> con;

		if (con == 'y') {
			printf("how many: ");
			cin >> count;
			total = count * 20000;
			printf("you buy %d revive chip with price: RP.%d\n\n", count, total);
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

			printf("you buy %d ring exp with price: RP.%d\n\n", count, total);
		}
	}
}

void item() {
	//second loop
	while (true) {
		puts("what do you want\n");

		puts("1. health capsul\t RP.1000");
		puts("2. stamina capsul\t RP.2000");
		puts("3. indomie goreng\t RP.10000");
		puts("4. energy drink\t\t RP.5000");
		puts("5. revive chip\t\t RP.20000");
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

		puts("1. ring exp\t\t RP.5000");
		puts("2. digital vest\t\t RP.13000");
		puts("3. stamina capsul pouch\t RP.8000");
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

		
		switch(buy) {
			case '1':
				item();
				break;

			case '2':
				acces();
				break;
		}

		if (buy == '4') {
			break;
		}
	}
	//end main loop

	puts("have a nice day\n");

	puts("and don't forget to give me the star");

	return 0;
}
