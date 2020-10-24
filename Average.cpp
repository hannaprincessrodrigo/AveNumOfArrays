#include <iostream>

using namespace std;

int main()
{
    int data, i;
    float num [20], sum = 0.0, average;

    cout << "Enter the numbers of data: ";
    cin >> data;

    while ( data > 20 || data <= 0 ){
        cout << "Error! number should be in range of (1 to 20)." << endl;
        cout << "Enter the number again: ";
        cin >> data;
    }

    for ( i = 0; i < data; ++i ){
        cout << i + 1 << ". Enter number: ";
        cin >> num [i];
        sum += num [i];
    }

    average = sum / data;
    cout << "Average = " << average << endl;
    cout << endl << "Programmed by: Hanna Princess Rodrigo" << endl;

    return 0;
}
