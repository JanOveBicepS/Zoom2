#include <iostream>

//using namespace std;
int age = 21;
bool sw = true;
char Initial = 'O';
std::string name = "Ole";
double pi = 3.14;
int a = 10;
int b = 5;
int c = 20;
int z = 10;

int main() {

	system("cls");
	system("pause");

	if (a > b) {
		std::cout << "a is greater than b\n";
	}
	else {
		std::cout << "b is greater than a\n";
	}
	if (a == z) {
		std::cout << "a and z are equal \n";
	}
	if (a >= z) { //if ( a > z && a == z) && is and, || is or, ! is not;
		std::cout << "nothing happens here \n";
	}
	if (a != b) {
		std::cout << "a and b is not equal\n";
	}
}

int main() {
	std::cout << "enter your age :";
	std::cin >> age;
 std::cout << "Your age is : " << age << "\n";  // = std::endl;  \t
 std::cout << "You are young "; 
 std::cout << "s";

}


//_getch() have to include <conio.h>            std::getline(std::cout