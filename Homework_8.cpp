
#include <iostream>
using namespace std;

int main()
{
    int choise;
    while (true)
    {
        cout << "\nChoose task:\
                \n1 - square/point\
                \n2 - point/coordinates\
                \n3 - is 1/is 0.1\
                \n4 - lucky ticket?\
                \n0 - exit\n";
        cin >> choise;
        if (choise == 1)
        {
            int angle_top_x;
            int angle_top_y;
            int angle_down_x;
            int angle_down_y;
            int point_x;
            int point_y;
            cout << "\nenter all options in range from - 20 to 20\n";
            cout << "\nenter coordinates of top-left angle(X /enter/ Y):\n";
            cin >> angle_top_x >> angle_top_y;
            cout << "\nenter coordinates of down-right angle(X /enter/ Y):\n";
            cin >> angle_down_x >> angle_down_y;
            cout << "\nenter coordinates of point(X /enter/ Y):\n";
            cin >> point_x >> point_y;
            for (int y = -20; y < 21; y++)
            {
                for (int x = -20; x < 21; x++)
                {
                    if (point_x == x && point_y == y)
                    {
                        cout << "*";
                    }
                    else if (angle_top_y == y || angle_down_y == y)
                    {
                        cout << "-";
                    }
                    else if (angle_top_x == x || angle_down_x == x)
                    {
                        cout << "|";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                cout << "\n";
            }
            cout << "\n" << (point_y >= min(angle_top_y, angle_down_y) && point_y <= max(angle_top_y, angle_down_y) &&
                point_x >= min(angle_top_x, angle_down_x) && point_x <= max(angle_top_x, angle_down_x) ? "point is in/on square" : "point out of square");
        }
        else if (choise == 2)
        {
            int point_x1;
            int point_y1;
            int point_x2;
            int point_y2;
            cout << "\nenter the first point coordinates (X /enter/ Y):\n";
            cin >> point_x1 >> point_y1;
            cout << "\n enter the second point coordinates (X /enter/ Y):\n";
            cin >> point_x2 >> point_y2;
            cout << "\nthe line is " << (point_x1 == point_x2 && point_y1 != point_y2 ? "||" : (point_y1 == point_y2 && point_x1 == point_x2 ? "point" : "not ||"));
        }
        else if (choise == 3)
        {
            float num_0;
            cout << "\nenter number:\n";
            cin >> num_0;
            int num_1 = num_0;
            cout << "\nnumber is " << (num_1 == num_0 ? "integer" : "fraction");
        }
        else if (choise == 4)
        {
            int tick_num;
            cout << "\n enter traumway ticket number:\n";
            cin >> tick_num;
            cout << "\nticket is " << ((tick_num / 100000 + tick_num / 10000 % 10 + tick_num / 1000 % 10) == 
                                       (tick_num % 10 + tick_num / 10 % 10 + tick_num / 100 % 10) ? "lucky" : "common");
        }
        else if (choise == 0)
        {
            exit(1);
        }
        string skip;
        cout << "\nenter any symbol + enter:\n";
        cin >> skip;
        system("cls");
    }
}