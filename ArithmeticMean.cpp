#include <iostream>
#include <cmath>

using namespace std;


float calculateArithmeticMean(float data[]);

int main()
{
    float data[10];

    cout << "Enter 10 elements: ";

    int i;
    for(i = 0; i < 10; ++i)
        cin >> data[i];

    cout << endl << "Arithmetic Mean = " << calculateArithmeticMean(data);

    return 0;
}

float calculateArithmeticMean(float data[])
{
    float sum = 0.0, mean;

    int i;

    for(i = 0; i < 10; ++i)
    {
        sum += data[i];
    }

    mean = sum/10;

    return mean;
}
