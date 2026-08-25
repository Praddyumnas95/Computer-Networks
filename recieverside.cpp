#include <iostream>
#include <string>
using namespace std;

string divide(string data, string key)
{
    int n = key.length();

    for (int i = 0; i <= data.length() - n; i++)
    {
        if (data[i] == '1')
        {
            for (int j = 0; j < n; j++)
            {
                data[i + j] = (data[i + j] == key[j]) ? '0' : '1';
            }
        }
    }

    return data.substr(data.length() - n + 1);
}

int main()
{
    string receivedData, key;

    cout << "Enter received data: ";
    cin >> receivedData;

    cout << "Enter generator: ";
    cin >> key;

    string remainder = divide(receivedData, key);

    cout << "\nRemainder: " << remainder << endl;

    bool error = false;

    for (char bit : remainder)
    {
        if (bit == '1')
        {
            error = true;
            break;
        }
    }

    if (error)
        cout << "Error detected in received data!" << endl;
    else
        cout << "No error detected. Data is accepted." << endl;

    return 0;
}
