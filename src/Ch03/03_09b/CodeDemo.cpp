// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<int> primes;
    primes.push_back(16);
    primes.push_back(68);
    primes.push_back(47);
    primes.push_back(15);
    primes.push_back(39);

    std::cout << "The vector has " << primes.size() << " elements." << std::endl;

    std::cout << "The content of index 2 is: " << primes[2] << std::endl;

    primes[2] = 69;
    std::cout << "The content of index 2 is: " << primes[2] << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
