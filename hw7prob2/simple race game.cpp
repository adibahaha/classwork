#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <random>
#include "player.h"
using namespace std;

int main()
{
    cout << "Please enter the data file name: ";
    string file_name;
    cin >> file_name;
    ifstream inps(file_name);
    if (!inps.good())
    {
        cout << "cannot open " << file_name << endl;
        system("pause");
        return 1;
    }
    
    int M;
    int N;
    inps >> M;
    inps >> N;
    
    if (N < 1)
    {
        cout << N << " is too small for number of players" << endl;
        cout << "number of players must be at least 1" << endl;
        system("pause");
        exit(1);
    }
    Player *player = new Player[N];
    for (int i = 0; i < N; ++i)
    {
        string name;
        inps >> name;
        player[i].setName(name);
    }
    inps.close();

    default_random_engine e(19570421);
    uniform_int_distribution<int> pu(0, N - 1);
    uniform_int_distribution<int> du(1, 6);
    int first_index = pu(e), index = first_index;
    int die1, die2;
    int points, state;
    bool winners = false;
    do
    {
        points = player[index].getPoints();
        die1 = du(e);
        die2 = du(e);
        points = points + die1 + die2;
        
        state = points > M ? 0 : 1;
        switch (state)
        {
        case 0:
      if(points/2>=M-1)
        points = points/2;
      else
        points = M-1;
            player[index].setPoints(points);
            break;
        case 1:
      if(points==M)
              winners = true;
            player[index].setPoints(points);
            break;
        default:
            cout << "impossible state " << state << endl;
        }
        cout << player[index].getName() << ' ' << die1 + die2 << '/' << player[index].getPoints() << '/' << state << endl;

        index = (index + 1) % N;
        if (index == first_index)
            cout << endl;
    } while (!winners);
    
    for(int index = 0; index < N; ++index)
        if(player[index].getPoints() >= M)
            cout << player[index].getName() << " wins" << endl;

    system("pause");
    return 0;
}
