#include<iostream>
#include<string>

using namespace std;

class restaurant {
private:
	string Savory_food[10] = { "Pizza","Fries","Burger","Pasta","Meat","Crepe" };
	string Sweet_food[10] = { "Ice cream","Zalbya","Sweet pie","Donuts","Cake" };
	int menu_choice = 0;
	int food_choice = 0;
	int x = 0;
	int y = 0;
	int price = 0;

	string order_name[100];
	int order_price[100];
	int order_quantity[100];
	int quantity = 0;
	int orders = 0;
	int order_id = 1001;

public:
	void system() {
		while (true) {
			cout << "=============== RESTAURANT ===============\n" <<
				"(1) MAIN COURSES\n" <<
				"(2) DESSERTS\n" <<
				"(3) VIEW CART\n" <<
				"(4) CLEAR CART \n" <<
				"(5) REMOVE ITEM\n" <<
				"(6) CHECKOUT \n" <<
				"(7) EXIT\n" <<
				"Enter Your Choice : ";
			cin >> menu_choice;

			while (cin.fail() || menu_choice > 7 || menu_choice <= 0) {
				cout << "INVALD INPUT! Please enter number from (1 -> 7)\n";
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Enter your choice agin : ";
				cin >> menu_choice;
			}

			if (menu_choice == 1) {
				y = 0;
				while (y != 2) {

					cout << "=========== MAIN COURSES ===========\n";

					for (int i = 0; i < 6; i++) {
						cout << i + 1 << ". " << Savory_food[i] << endl;

					}
					cout << "0. BACK TO MAIN MENU" << endl;

					cout << "Enter Your Choice : ";
					cin >> food_choice;

					while (cin.fail() || food_choice > 6 || food_choice < 0) {
						cout << "INVALD INPUT! Please enter number from (0 -> 6)\n";
						cin.clear();
						cin.ignore(1000, '\n');
						cout << "Enter your choice agin : ";
						cin >> food_choice;
					}

					if (food_choice == 0)
					{
						y = 2;
						continue;
					}

					cout << "===========================\n";

					switch (food_choice) {
					case 0:
						break;

					case 1:
						cout << "1) MUSHROOM PIZZA (150 EGP)\n"
							<< "2) CHICKEN RANCH PIZZA (175 EGP)\n"
							<< "3) SEA FOOD PIZZA (200 EGP)\n"
							<< "0) BACK TO MAIN COURSES \n";
						cout << "Enter Your Choice : ";
						cin >> x;

						while (cin.fail() || x > 3 || x < 0) {
							cout << "INVALD INPUT! Please enter number from (0 -> 3)\n";
							cin.clear();
							cin.ignore(1000, '\n');
							cout << "Enter your choice agin : ";
							cin >> x;
						}

						cout << "\n===========================\n";

						if (x == 1) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 150 * quantity;
							bool found = false;

							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "MUSHROOM PIZZA")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "MUSHROOM PIZZA";
								order_price[orders] = 150;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(MUSHROOM PIZZA) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 2) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 175 * quantity;
							bool found = false;

							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "CHICKEN RANCH PIZZA")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "CHICKEN RANCH PIZZA";
								order_price[orders] = 175;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(CHICKEN RANCH PIZZA) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 3) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 200 * quantity;

							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "SEA FOOD PIZZA")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "SEA FOOD PIZZA";
								order_price[orders] = 200;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(SEA FOOD PIZZA) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 0) {

							break;
						}

						break;

					case 2:
						cout << "1) French Fries (40 EGP) \n"
							<< "2) Curly Fries (55 EGP)\n"
							<< "3) Sweet Potato Fries (70 EGP)\n"
							<< "0) BACK TO MAIN COURSES \n";


						cout << "Enter Your Choice : ";
						cin >> x;
						while (cin.fail() || x > 3 || x < 0) {
							cout << "INVALD INPUT! Please enter number from (0 -> 3)\n";
							cin.clear();
							cin.ignore(1000, '\n');
							cout << "Enter your choice agin : ";
							cin >> x;
						}
						cout << "\n===========================\n";

						if (x == 1) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 40 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "French Fries")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "French Fries";
								order_price[orders] = 40;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(French Fries) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 2) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 55 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "Curly Fries")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "Curly Fries";
								order_price[orders] = 55;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(Curly Fries) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 3) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 70 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "Sweet Potato Fries")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "Sweet Potato Fries";
								order_price[orders] = 70;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(Sweet Potato Fries) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 0) {
							break;
						}

						break;

					case 3:
						cout << "1) SMASHED BURGER (210 EGP) \n"
							<< "2) CHICKEN BURGER (185 EGP)\n"
							<< "3) CLASSIC BEEF BURGER (120 EGP)\n"
							<< "0) BACK TO MAIN COURSES \n";


						cout << "Enter Your Choice : ";
						cin >> x;
						while (cin.fail() || x > 3 || x < 0) {
							cout << "INVALD INPUT! Please enter number from (0 -> 3)\n";
							cin.clear();
							cin.ignore(1000, '\n');
							cout << "Enter your choice agin : ";
							cin >> x;
						}
						cout << "\n===========================\n";

						if (x == 1) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 210 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "SMASHED BURGER")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "SMASHED BURGER";
								order_price[orders] = 210;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(SMASHED BURGER) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 2) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 185 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "CHICKEN BURGER")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "CHICKEN BURGER";
								order_price[orders] = 185;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(CHICKEN BURGER) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 3) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 120 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "CLASSIC BEEF BURGER")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "CLASSIC BEEF BURGER";
								order_price[orders] = 120;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(CLASSIC BEEF BURGER) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						break;

					case 4:
						cout << "1) PASTA ALFREDO (120 EGP) \n"
							<< "2) CHICKEN PINK SAUCE PASTA (160 EGP)\n"
							<< "3) SHRIMP PASTA (220 EGP)\n"
							<< "0) BACK TO MAIN COURSES \n";


						cout << "Enter Your Choice : ";
						cin >> x;

						while (cin.fail() || x > 3 || x < 0) {
							cout << "INVALD INPUT! Please enter number from (0 -> 3)\n";
							cin.clear();
							cin.ignore(1000, '\n');
							cout << "Enter your choice agin : ";
							cin >> x;
						}

						cout << "\n===========================\n";

						if (x == 1) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 120 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "PASTA ALFREDO")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "PASTA ALFREDO";
								order_price[orders] = 120;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(PASTA ALFREDO) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 2) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 160 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "CHICKEN PINK SAUCE PASTA")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "CHICKEN PINK SAUCE PASTA";
								order_price[orders] = 160;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(CHICKEN PINK SAUCE PASTA) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 3) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 220 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "SHRIMP PASTA")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "SHRIMP PASTA";
								order_price[orders] = 220;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(SHRIMP PASTA) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 0) {
							break;
						}

						break;

					case 5:
						cout << "1) STEAK (280 EGP) \n"
							<< "2) KEBAB (220 EGP)\n"
							<< "3) GRILLED BEEF (250 EGP)\n"
							<< "0) BACK TO MAIN COURSES \n";


						cout << "Enter Your Choice : ";
						cin >> x;
						while (cin.fail() || x > 3 || x < 0) {
							cout << "INVALD INPUT! Please enter number from (0 -> 3)\n";
							cin.clear();
							cin.ignore(1000, '\n');
							cout << "Enter your choice agin : ";
							cin >> x;
						}
						cout << "\n===========================\n";

						if (x == 1) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 280 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "STEAK")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "STEAK";
								order_price[orders] = 280;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(STEAK) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 2) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 220 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "KEBAB")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "KEBAB";
								order_price[orders] = 220;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(KEBAB) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 3) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 250 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "GRILLED BEEF")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "GRILLED BEEF";
								order_price[orders] = 250;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(GRILLED BEEF) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 0) {
							break;
						}

						break;

					case 6:
						cout << "1) SAUSAGE CREPE (140 EGP) \n"
							<< "2) FOUR CHEESE CREPE (120 EGP)\n"
							<< "3) CRISPY CHICKEN CREPE (140 EGP)\n"
							<< "0) BACK TO MAIN COURSES \n";


						cout << "Enter Your Choice : ";
						cin >> x;
						while (cin.fail() || x > 3 || x < 0) {
							cout << "INVALD INPUT! Please enter number from (0 -> 3)\n";
							cin.clear();
							cin.ignore(1000, '\n');
							cout << "Enter your choice agin : ";
							cin >> x;
						}
						cout << "\n===========================\n";

						if (x == 1) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 140 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "SAUSAGE CREPE")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "SAUSAGE CREPE";
								order_price[orders] = 140;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(SAUSAGE CREPE) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 2) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 120 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "FOUR CHEESE CREPE")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "FOUR CHEESE CREPE";
								order_price[orders] = 120;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(FOUR CHEESE CREPE) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 3) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 140 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "CRISPY CHICKEN CREPE")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "CRISPY CHICKEN CREPE";
								order_price[orders] = 140;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(CRISPY CHICKEN CREPE) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 0) {
							break;
						}

						break;
					}
				}
			}

			else if (menu_choice == 2) {
				y = 0;
				while (y != 2) {
					cout << "=========== DESSERTS ============\n";

					for (int i = 0; i < 5; i++) {
						cout << i + 1 << ". " << Sweet_food[i] << endl;
					}
					cout << "0. BACK TO MAIN MENU" << endl;

					cout << "Enter Your Choice : ";
					cin >> food_choice;

					while (cin.fail() || food_choice < 0 || food_choice > 5) {
						cout << "INVALID INPUT! Please enter number from (0 -> 5)\n";

						cin.clear();
						cin.ignore(1000, '\n');

						cout << "Enter your choice again : ";
						cin >> food_choice;
					}

					if (food_choice == 0)
					{
						y = 2;
						continue;
					}

					cout << "===========================\n";
					switch (food_choice) {

					case 0:
						break;


					case 1:
						cout << "1) MANGO ICE CREAM (60 EGP)\n"
							<< "2) VANILLA ICE CREAM (45 EGP)\n"
							<< "3) PEACH ICE CREAM (75 EGP)\n"
							<< "0) BACK TO DESSERTS \n";


						cout << "Enter Your Choice : ";
						cin >> x;
						while (cin.fail() || x > 3 || x < 0) {
							cout << "INVALD INPUT! Please enter number from (0 -> 3)\n";
							cin.clear();
							cin.ignore(1000, '\n');
							cout << "Enter your choice agin : ";
							cin >> x;
						}
						cout << "\n===========================\n";

						if (x == 1) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 60 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "MANGO ICE CREAM")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "MANGO ICE CREAM";
								order_price[orders] = 60;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(MANGO ICE CREAM) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 2) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 45 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "VANILLA ICE CREAM")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "VANILLA ICE CREAM";
								order_price[orders] = 45;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(VANILLA ICE CREAM) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 3) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 75 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "PEACH ICE CREAM")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "PEACH ICE CREAM";
								order_price[orders] = 75;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(PEACH ICE CREAM) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 0) {
							break;
						}

						break;

					case 2:
						cout << "1) CLASSIC ZALABYA (60 EGP) \n"
							<< "2) NUTELLA ZALABYA (85 EGP)\n"
							<< "3) LOTUS ZALABYA (90 EGP)\n"
							<< "0) BACK TO DESSERTS \n";


						cout << "Enter Your Choice : ";
						cin >> x;
						while (cin.fail() || x > 3 || x < 0) {
							cout << "INVALD INPUT! Please enter number from (0 -> 3)\n";
							cin.clear();
							cin.ignore(1000, '\n');
							cout << "Enter your choice agin : ";
							cin >> x;
						}
						cout << "\n===========================\n";

						if (x == 1) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 60 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "CLASSIC ZALABYA")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "CLASSIC ZALABYA";
								order_price[orders] = 60;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(CLASSIC ZALABYA) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 2) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 85 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "NUTELLA ZALABYA")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "NUTELLA ZALABYA";
								order_price[orders] = 85;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(NUTELLA ZALABYA) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 3) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 90 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "LOTUS ZALABYA")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "LOTUS ZALABYA";
								order_price[orders] = 90;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(LOTUS ZALABYA) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 0) {
							break;
						}

						break;

					case 3:
						cout << "1) CLASSIC SWEET PIE (70 EGP) \n"
							<< "2) NUTELLA SWEET PIE (95 EGP)\n"
							<< "3) LOTUS SWEET PIE (100 EGP)\n"
							<< "0) BACK TO DESSERTS \n";


						cout << "Enter Your Choice : ";
						cin >> x;
						while (cin.fail() || x > 3 || x < 0) {
							cout << "INVALD INPUT! Please enter number from (0 -> 3)\n";
							cin.clear();
							cin.ignore(1000, '\n');
							cout << "Enter your choice agin : ";
							cin >> x;
						}
						cout << "\n===========================\n";

						if (x == 1) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 70 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "CLASSIC SWEET PIE")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "CLASSIC SWEET PIE";
								order_price[orders] = 70;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(CLASSIC SWEET PIE) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 2) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 95 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "NUTELLA SWEET PIE")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "NUTELLA SWEET PIE";
								order_price[orders] = 95;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(NUTELLA SWEET PIE) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 3) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 100 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "LOTUS SWEET PIE")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "LOTUS SWEET PIE";
								order_price[orders] = 100;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(LOTUS SWEET PIE) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						break;

					case 4:
						cout << "1) CLASSIC DOUNT (40 EGP) \n"
							<< "2) NUTELLA DOUNT (60 EGP)\n"
							<< "3) LOTUS DOUNT (75 EGP)\n"
							<< "0) BACK TO DESSERTS \n";


						cout << "Enter Your Choice : ";
						cin >> x;
						while (cin.fail() || x > 3 || x < 0) {
							cout << "INVALD INPUT! Please enter number from (0 -> 3)\n";
							cin.clear();
							cin.ignore(1000, '\n');
							cout << "Enter your choice agin : ";
							cin >> x;
						}
						cout << "\n===========================\n";

						if (x == 1) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 40 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "CLASSIC DOUNT")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "CLASSIC DOUNT";
								order_price[orders] = 40;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(CLASSIC DOUNT) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 2) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 60 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "NUTELLA DOUNT")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "NUTELLA DOUNT";
								order_price[orders] = 60;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(NUTELLA DOUNT) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 3) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 75 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "LOUTS DOUNT")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "LOUTS DOUNT";
								order_price[orders] = 75;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(LOTUS DOUNT) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 0) {
							break;
						}
						break;
					case 5:
						cout << "1) CLASSIC CAKE (60 EGP) \n"
							<< "2) NUTELLA CAKE (85 EGP)\n"
							<< "3) LOTUS CAKE (95 EGP)\n"
							<< "0) BACK TO DESSERTS \n";


						cout << "Enter Your Choice : ";
						cin >> x;
						while (cin.fail() || x > 3 || x < 0) {
							cout << "INVALD INPUT! Please enter number from (0 -> 3)\n";
							cin.clear();
							cin.ignore(1000, '\n');
							cout << "Enter your choice agin : ";
							cin >> x;
						}
						cout << "\n===========================\n";

						if (x == 1) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 60 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "CLASSIC CAKE")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "CLASSIC CAKE";
								order_price[orders] = 60;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(CLASSIC CAKE) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 2) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 85 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "NUTELLA CAKE")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "NUTELLA CAKE";
								order_price[orders] = 85;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(NUTELLA CAKE) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 3) {
							cout << "Enter quantity : ";
							cin >> quantity;
							while (cin.fail() || quantity <= 0) {
								cout << "INVALD INPUT!\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> quantity;
							}
							price += 95 * quantity;
							bool found = false;
							for (int i = 0; i < orders; i++)
							{
								if (order_name[i] == "LOTUS CAKE")
								{
									order_quantity[i] += quantity;
									found = true;
									break;
								}
							}
							if (found == false) {
								order_name[orders] = "LOTUS CAKE";
								order_price[orders] = 95;
								order_quantity[orders] = quantity;
								orders++;
							}
							cout << "(LOTUS CAKE) is Added \n";
							cout << "Your Order Now Cost : " << price << "EGP\n";
							cout << "===========================\n";
							cout << "Do you want to add another item?\n";
							cout << "1) yes\n" << "2) No\n";
							cout << "Enter your choice :";
							cin >> y;
							while (cin.fail() || y > 2 || y < 1) {
								cout << "INVALD INPUT! Please enter number (1) or (2)\n";
								cin.clear();
								cin.ignore(1000, '\n');
								cout << "Enter your choice agin : ";
								cin >> y;
							}
							cout << "\n===========================\n";

							if (y == 2) {
								break;
							}
						}

						else if (x == 0) {
							break;
						}

						break;

					}

				}

			}
			else if (menu_choice == 6) {
				if (orders == 0) {
					cout << "CART IS EMPTY\n";
					continue;
				}
				double tax = price * 14 / 100.0;
				double total = price + tax;
				double payment;
				cout << "=============== CHECKOUT ===============\n";
				cout << "Order ID : " << order_id << "\n";
				cout << "--------------------------------------------------------\n";

				for (int i = 0; i < orders; i++) {
					cout << order_name[i] << "\t x" << order_quantity[i]
						<< "\t" << order_price[i]
						<< " EGP\t" << order_price[i] * order_quantity[i]
						<< " EGP\n";
				}
				cout << "--------------------------------------------------------\n";
				cout << "\nSubtotal\t" << ": " << price << " EGP";
				cout << "\nTax (14%)\t" << ": " << tax << " EGP";
				cout << "\n-------------------------------------------\n";
				cout << "\nTotal\t" << ": " << total << " EGP";
				cout << "\nEnter Payment\t" << ": ";
				cin >> payment;
				while (cin.fail() || 0 > payment || payment < total) {
					cout << "Insufficient Payment! Please try agin.\n";
					cin.clear();
					cin.ignore(1000, '\n');
					cout << "Enter your choice agin : ";
					cin >> payment;
				}
				double change = payment - total;
				cout << "\nChange\t" << ": " << change << " EGP";
				cout << "\n=============== THANK YOU FOR YOUR ORDER! ===============\n";

				order_id++;
				orders = 0;
				price = 0;



			}
			else if (menu_choice == 3) {
				view_cart();

			}
			else if (menu_choice == 5) {
				remove_item();

			}
			else if (menu_choice == 4) {
				clear_cart();

			}
			else if (menu_choice == 7) {
				break;
			}
		}

	}
	void view_cart() {
		cout << "\n=============== YOUR CART ===============\n";
		cout << "Order ID : " << order_id << "\n";
		if (orders == 0) {
			cout << "your order is empty!\n";
			cout << "==========================================\n";
			return;
		}
		for (int i = 0;i < orders;i++) {
			cout << i + 1 << ") "
				<< order_name[i]
				<< " x" << order_quantity[i]
				<< " | " << order_price[i] * order_quantity[i]
				<< " EGP\n";
		}
		cout << "------------------------------------------\n";
		cout << "subtotal : " << price << " EGP\n";
		cout << "------------------------------------------\n";

	}

	void remove_item() {
		cout << "\n=============== REMOVE ITEM ===============\n";
		if (orders == 0) {
			cout << "NO ITEMS FOUND!\n";
			cout << "==========================================\n";
			return;
		}
		view_cart();

		int choice;
		cout << "\nEnter item number to remove (0 to cancel): ";
		cin >> choice;

		while (cin.fail() || choice<0 || choice>orders) {
			cout << "INVALID INPUT! Please enter a valid item number: ";
			cin.clear();
			cin.ignore(1000, '\n');
			cin >> choice;

		}

		if (choice == 0) {
			return;
		}

		int index = choice - 1;
		int remove_quantity;
		cout << "How many " << order_name[index] << " do you want to remove? ";
		cin >> remove_quantity;

		while (cin.fail() || remove_quantity <= 0 || remove_quantity > order_quantity[index]) {
			cout << "INVALID QUANTITY! Please enter a number from 1 to "
				<< order_quantity[index] << ": ";
			cin.clear();
			cin.ignore(1000, '\n');
			cin >> remove_quantity;
		}

		price -= order_price[index] * remove_quantity;
		order_quantity[index] -= remove_quantity;

		if (order_quantity[index] == 0) {
			for (int i = index; i < orders - 1; i++)
			{
				order_name[i] = order_name[i + 1];
				order_price[i] = order_price[i + 1];
				order_quantity[i] = order_quantity[i + 1];

			}
			orders--;
		}
		cout << "\nItem removed successfully!\n";
		cout << "Current subtotal : " << price << " EGP\n";


	}

	void clear_cart() {
		int z;
		cout << "\n=============== CLEAR CART ===============\n";
		if (orders == 0) {
			cout << "cart is alredy empty!\n";
			return;

		}
		cout << "are u sure u want to clear cart ?\n" << "1) yes\n" << "2) No\n";
		cout << "Enter your choice : ";
		cin >> z;
		if (z == 1) {
			price = 0;
			orders = 0;

		}
		else {
			return;
		}

		cout << "\nYour cart has been cleared successfully!\n";

	}

};


int main() {
	restaurant r1;
	r1.system();
}