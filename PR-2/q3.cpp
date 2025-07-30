#include <iostream>
using namespace std;

main()
{
    int inputNumber, digitSum = 0;

    cout << "Enter any Number: ";
    cin >> inputNumber;

    while (inputNumber > 0 || digitSum >= 10)
    {
        if (inputNumber == 0)
        {
            inputNumber = digitSum;
            digitSum = 0;
        }
        digitSum += inputNumber % 10;
        inputNumber = inputNumber / 10;
    }

    cout << "This number final: " << digitSum << endl;
}