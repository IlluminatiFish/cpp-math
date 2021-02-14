#include <iostream>
#include <sstream>

using namespace std;

unsigned int russianPeasantMultiplication(unsigned int paramA, unsigned int paramB) {

    int result = 0;

    while(paramB > 0) {
        if(paramB & 1) {
            result = result + paramA;
        }

        paramA = paramA << 1;
        paramB = paramB >> 1;

    }

    return result;
}


int main() {

    unsigned int paramA;
    unsigned int paramB;

    cin >> paramA;
    cin >> paramB;

    std::ostringstream o;

    o << russianPeasantMultiplication(paramA, paramB);

    std::cout << "Result = " + o.str() << std::endl;

    return 0;
}
