#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void display(int a[], int n)
{
    cout << endl;
    cout << endl;
    cout << "Displaying Elements: " << endl;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }
    cout << endl;
}

int main()
{

    int a[10];
    int n;
    int option;

    while (1)
    {
        cout << endl;
        cout << "1. Continue" << endl;
        cout << "2. Exit" << endl;
        cin >> option;
        switch (option)
        {

        case 1:
            cout << "Enter number of elements" << endl;
            cin >> n;

            for (int i = 0; i < n; i++)
            {
                cout << "Enter Element " << i + 1 << endl;
                cin >> a[i];
                cout << endl;
            }

            display(a, n);

            for (int i = 0; i < n; i++)
            {
                for (int j = i; j < n; j++)
                {
                    if (a[i] > a[j])
                    {
                        int temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }

            display(a, n);

            break;

        case 2:
            cout << "Exiting program ..." << endl;
            return 0;
        }
    }
}