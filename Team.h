//
// Created by Ramon Baez on 9/6/24.
//

#ifndef TEAM_H
#define TEAM_H


#include <string>

using namespace std;

class Team {
    // TODO: Declare private data members - name, wins, losses
private:
    string name;
    int wins;
    int losses;
    // TODO: Declare mutator functions -
    //       SetName(), SetWins(), SetLosses()
public:
    void SetName(string name);
    void SetWins(int wins);
    void SetLosses(int losses);

    // TODO: Declare accessor functions -
    //       GetName(), GetWins(), GetLosses()
    string GetName();
    int GetWins();
    int GetLosses();

    // TODO: Declare GetWinPercentage()
    double GetWinPercentage();

    // TODO: Declare PrintStanding()
    void PrintStanding();
};



#endif //TEAM_H
