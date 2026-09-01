#include <iostream>

using namespace std;

int main()
{
    int o1, o2, o3, o4;
    char dot1, dot2, dot3;

    cout << "Enter IPv4 Address in decimal form: ";
    cin >> o1 >> dot1 >> o2 >> dot2 >> o3 >> dot3 >> o4;

    if (dot1 != '.' || dot2 != '.' || dot3 != '.' ||
        o1 < 0 || o1 > 255 ||
        o2 < 0 || o2 > 255 ||
        o3 < 0 || o3 > 255 ||
        o4 < 0 || o4 > 255)
    {
        cout << "Invalid IP Address!" << endl;
        return 0;
    }
    
    cout << "\nIP Address is Valid." << endl;
    cout << "Separated IP: " << o1 << " | " << o2 << " | " << o3 << " | " << o4 << endl;
    cout << "First Byte: " << o1 << endl;


    if (o1 >= 1 && o1 <= 126)
    {
        cout << "Class: A" << endl;
        cout << "Net ID: " << o1 << ".0.0.0" << endl;
        cout << "Host ID: " << o2 << "." << o3 << "." << o4 << endl;
        cout << "Network Address: " << o1 << ".0.0.0" << endl;
    }

    else if (o1 >= 128 && o1 <= 191)
    {
        cout << "Class: B" << endl;
        cout << "Net ID: " << o1 << "." << o2 << ".0.0" << endl;
        cout << "Host ID: " << o3 << "." << o4 << endl;
        cout << "Network Address: " << o1 << "." << o2 << ".0.0" << endl;
    }

    else if (o1 >= 192 && o1 <= 223)
    {
        cout << "Class: C" << endl;
        cout << "Net ID: " << o1 << "." << o2 << "." << o3 << ".0" << endl;
        cout << "Host ID: " << o4 << endl;
        cout << "Network Address: " << o1 << "." << o2 << "." << o3 << ".0" << endl;
    }

    else if (o1 >= 224 && o1 <= 239)
    {
        cout << "Class: D" << endl;
        cout << "Multicast Address" << endl;
        cout << "No Net ID, Host ID or Network Address." << endl;
    }

    else if (o1 >= 240 && o1 <= 255)
    {
        cout << "Class: E" << endl;
        cout << "Experimental/Reserved Address" << endl;
        cout << "No Net ID, Host ID or Network Address." << endl;
    }

    return 0;
}
