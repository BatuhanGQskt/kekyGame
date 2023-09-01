//To run g++ {filename}.cpp -o {run filename}
//./{run filename}

#include<iostream>
#include<chrono>
#include<thread>
#include <fstream>
#include <string>

#include "helpers/knight.hpp"


int main() {
    Knight warrior;

    warrior.displayStatus();

    return 0;
}