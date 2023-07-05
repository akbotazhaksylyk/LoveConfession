#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, row, col;
    n = 6;
    for (int i = 0; i < 3; i++) {
        for (row = 0; row < n; row++)
        {
            for (col = 0; col < n + 1; col++) {
                if ((row == 0 && col % 3 != 0) || (row == 1 && col % 3 == 0) || (row - col == 2) || (row + col == 8))
                    cout << "*";
                else
                    cout << " ";
            }
            cout << "\n";
        }
        cout << endl;
    }

    unsigned char message1[] = {
        0xD0, 0xA1, 0xD0, 0xBB, 0xD1, 0x83, 0xD1, 0x88, 0xD0, 0xB0, 0xD0, 0xB9, 0x2E, 0x2E, 0x2E, 0x20,
        0xD0, 0xAF, 0x20, 0xD1, 0x85, 0xD0, 0xBE, 0xD1, 0x82, 0xD0, 0xB5, 0xD0, 0xBB, 0xD0, 0xB0, 0x20,
        0xD0, 0xB1, 0xD1, 0x8B, 0x20, 0xD0, 0xBE, 0xD1, 0x82, 0xD0, 0xBA, 0xD1, 0x80, 0xD1, 0x8B, 0xD1,
        0x82, 0xD1, 0x8C, 0xD1, 0x81, 0xD1, 0x8F, 0x20, 0xD1, 0x81, 0xD0, 0xB2, 0xD0, 0xBE, 0xD0, 0xB8,
        0xD0, 0xBC, 0xD0, 0xB8, 0x20, 0xD0, 0xB8, 0xD1, 0x81, 0xD0, 0xBA, 0xD1, 0x80, 0xD0, 0xB5, 0xD0,
        0xBD, 0xD0, 0xBD, 0xD0, 0xB8, 0xD0, 0xBC, 0xD0, 0xB8, 0x20, 0xD1, 0x87, 0xD1, 0x83, 0xD0, 0xB2,
        0xD1, 0x81, 0xD1, 0x82, 0xD0, 0xB2, 0xD0, 0xB0, 0xD0, 0xBC, 0xD0, 0xB8, 0x2E, 0x20 };

    unsigned char message2[] = {
        0xD0, 0xA2, 0xD1, 0x8B, 0x20, 0x2D, 0x20, 0xD0, 0xBE, 0xD1, 0x81, 0xD0, 0xBE, 0xD0,
        0xB1, 0xD0, 0xB5, 0xD0, 0xBD, 0xD0, 0xBD, 0xD1, 0x8B, 0xD0, 0xB9, 0x20, 0xD1, 0x87,
        0xD0, 0xB5, 0xD0, 0xBB, 0xD0, 0xBE, 0xD0, 0xB2, 0xD0, 0xB5, 0xD0, 0xBA, 0x2C, 0x20,
        0xD0, 0xBA, 0xD0, 0xBE, 0xD1, 0x82, 0xD0, 0xBE, 0xD1, 0x80, 0xD1, 0x8B, 0xD0, 0xB9,
        0x20, 0xD0, 0xB2, 0xD1, 0x8B, 0xD0, 0xB7, 0xD1, 0x8B, 0xD0, 0xB2, 0xD0, 0xB0, 0xD0,
        0xB5, 0xD1, 0x82, 0x20, 0xD0, 0xB2, 0xD0, 0xBE, 0x20, 0xD0, 0xBC, 0xD0, 0xBD, 0xD0,
        0xB5, 0x20, 0xD0, 0xBD, 0xD0, 0xB5, 0xD0, 0xBF, 0xD0, 0xBE, 0xD0, 0xB4, 0xD0, 0xB4,
        0xD0, 0xB5, 0xD0, 0xBB, 0xD1, 0x8C, 0xD0, 0xBD, 0xD1, 0x83, 0xD1, 0x8E, 0x20, 0xD1,
        0x81, 0xD0, 0xB8, 0xD0, 0xBC, 0xD0, 0xBF, 0xD0, 0xB0, 0xD1, 0x82, 0xD0, 0xB8, 0xD1,
        0x8E, 0x2E,
    };

    string message3 = "\xd0\x9c\xd0\xbe\xd0\xb8\x20\xd0\xbc\xd1\x8b\xd1\x81\xd0\xbb\xd0\xb8\x20\xd0\xbe\x20\xd1\x82\xd0\xb5\xd0\xb1\xd0\xb5\x20\xd0\xb7\xd0\xb0\xd1\x85\xd0\xb2\xd0\xb0\xd1\x82\xd1\x8b\xd0\xb2\xd0\xb0\xd1\x8e\xd1\x82\x20\xd1\x83\xd0\xbc\x2c\x20\xd0\xb0\x20\xd1\x81\xd0\xb5\xd1\x80\xd0\xb4\xd1\x86\xd0\xb5\x20\xd0\xb1\xd1\x8c\xd0\xb5\xd1\x82\xd1\x81\xd1\x8f\x20\xd1\x81\xd0\xb8\xd0\xbb\xd1\x8c\xd0\xbd\xd0\xb5\xd0\xb5\x2c\x20\xd0\xba\xd0\xbe\xd0\xb3\xd0\xb4\xd0\xb0\x20\xd1\x82\xd1\x8b\x20\xd1\x80\xd1\x8f\xd0\xb4\xd0\xbe\xd0\xbc\x2e";

    string message4 = "\xd0\xad\xd1\x82\xd0\xbe\xd1\x82\x20\xd0\xba\xd0\xbe\xd0\xb4\x2c\x20\xd0\xba\xd0\xbe\xd1\x82\xd0\xbe\xd1\x80\xd1\x8b\xd0\xb9\x20\xd1\x8f\x20\xd0\xbd\xd0\xb0\xd0\xbf\xd0\xb8\xd1\x81\xd0\xb0\xd0\xbb\xd0\xb0\x2c\x20\xd1\x81\xd0\xb8\xd0\xbc\xd0\xb2\xd0\xbe\xd0\xbb\xd0\xb8\xd0\xb7\xd0\xb8\xd1\x80\xd1\x83\xd0\xb5\xd1\x82\x20\xd0\xbc\xd0\xbe\xd0\xb8\x20\xd1\x8d\xd0\xbc\xd0\xbe\xd1\x86\xd0\xb8\xd0\xb8\x20\xd0\xb8\x20\xd0\xb2\xd1\x81\xd0\xb5\x20\xd1\x82\xd0\xbe\x2c\x20\xd1\x87\xd1\x82\xd0\xbe\x20\xd1\x8f\x20\xd1\x85\xd0\xbe\xd1\x82\xd0\xb5\xd0\xbb\xd0\xb0\x20\xd1\x81\xd0\xba\xd0\xb0\xd0\xb7\xd0\xb0\xd1\x82\xd1\x8c\x20\xd1\x82\xd0\xbe\xd0\xbb\xd1\x8c\xd0\xba\xd0\xbe\x20\xd1\x82\xd0\xb5\xd0\xb1\xd0\xb5\x2e";
    
    for (int i = 0; i < sizeof(message1); i++) {
        cout << message1[i];
    };

    cout << endl;

    for (int i = 0; i < sizeof(message2); i++) {
        cout << message2[i];
    };

    cout << endl;

    cout << message3 << endl;
    cout << message4 << endl; cout << endl;

    char credits[] = {
        0x4D, 0x61, 0x64, 0x65, 0x20,
        0x62, 0x79, 0x20, 0x41, 0x6B,
        0x62, 0x6F, 0x74, 0x61, 0x20,
        0x5A, 0x68, 0x61, 0x6B, 0x73,
        0x79, 0x6C, 0x79, 0x6B, '\0'
    };

    cout << credits << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
