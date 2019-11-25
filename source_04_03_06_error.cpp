#include <iostream>
#include <string>


int main() {
    string string;
    string = "A" + "B";
    string = string + "C";
    string = "B" + string; 		
    std::cout << string << std::endl;
    return 0;
}
