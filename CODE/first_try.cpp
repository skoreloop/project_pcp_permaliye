#include <iostream>
using namespace std;

unsigned long long int get_a_hexadecimal()
{
    unsigned long long int num = 0;
    string number;
    cin >> number;
    unsigned long long int degree = 1;
    for(int i = number.length() - 1; i >= 0; i--)
    {
        if((number[i] < '0' || number[i] > '9') && (number[i] < 'A' || number[i] > 'F'))
        {
            return 0;
        }
        int cost;
        if(number[i] >= 'A' && number[i] <= 'F')
        {
            cost = number[i] - 'A' + 10;
        }
        else
        {
            cost = number[i] - '0';
        }
        num += degree * cost;
        degree *= 16;
    }
    return num;
}
int main()
{
    cout << get_a_hexadecimal() << endl;
    return 0;
}