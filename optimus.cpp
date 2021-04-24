#include <iostream>

int main() {

    int number = 0;
    bool isprime = true;
    for(number = 1; number <= 10000; number++) {
        isprime = true;
    if(number == 0 || number == 1) {
        isprime = false;
    } else {
        for(int counter = 2; counter <= number / 2; counter++) {
            //std::cerr << counter << ", N" << number << std:endl;
            if(number % counter == 0) {
                isprime = false;
                break; //counter = number;
            }
        }
    }


    //std::cout << number << " is a " << (isprime ? "": "not ") << "prime number. Great Job -_-" << std::endl;
    if(isprime) {
        std::cout << number << ", ";
    }
    }
    return 0;
}