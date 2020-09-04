#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    srand(time(NULL));

    int x; // the number the computer is thinking of
    int y; // the number you guess

    x= rand()%101; cout << x;
    cout << "What number do you think I am thinking of?" << std::endl;
    cin >> y;
    while (x!=y)
    {
        if (x>y)
        {
            cout << "guess higher" << endl;
            cout << " What number do you guess?" << endl;
            cin >> y;
        }
        else if (y > x)
        {
            cout << "guess lower" << endl;

        cout << " What number do you guess?" << endl;
        cin >> y;
        }
        else
        {
            cout << "congratulation" << endl;
            break;
        }

    }

    return 0;
}
