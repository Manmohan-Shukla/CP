#include <iostream>
using namespace std;
int binary_decimal(string &binary)
{
    int n = binary.size();
    int result = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        char ch = binary[i];
        int num = ch - '0';
        result = result + num * (1 << (n - i - 1));
    }
    return result;
}

string decimal_binary(int decimal)
{
    string result = "";
    while (decimal > 0)
    {
        if (decimal % 2 == 0)
        {
            result = "0" + result;
        }
        else
        {
            result = "1" + result;
        }
        decimal = decimal >> 2;
    }
    return result;
}
int main()
{
    string binary = "101";
    cout << binary_decimal(binary) << endl;
    cout << decimal_binary(103);
    return 0;
}