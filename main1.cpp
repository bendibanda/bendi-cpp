#include <iostream> 
#include <string>

int main(int argc, char* argv []) {
	std::string str;
	std::cout << "Put your name here!" <<std::endl;
	std::cin >> str;
	std::cout << "Hello, " << str << "!\n";
	std::string answr;
	std::cout << "How are you?" <<std::endl;
	std::cin >> answr;
	if (answr=="fine") {
		std::cout << "It's super!" <<std::endl;
	}
	else if (answr=="bad") {
		std::cout << "Oh, it isn't good..." <<std::endl;
	}
	else {
		std::cout << "I don't understand your answer..." <<std::endl;
	}
	return -1;
}
