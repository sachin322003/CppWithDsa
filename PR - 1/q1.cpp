#include <iostream>
using namespace std;

main()
{
    int num;

    cout << "Enter the Number : ";
    cin >> num;

    if (num > 0)
    {
        cout << num << " is Positive" << endl;
    }
    else if (num == 0) {
        cout << num << " is Neutral" << endl;
    }
    else{
        cout << num << " is Negative" << endl;
    }
}