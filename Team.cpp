//
// CopyRight 2024
//

#include "Team.h"
#include <iostream>
#include <iomanip>
#include "Team.h"
using namespace std;

// TODO: Implement mutator functions -
//       SetName(), SetWins(), SetLosses()
void Team::SetName(string name) {
    this->name = name;
}

void Team::SetWins(int wins) {
    this->wins = wins;
}

void Team::SetLosses(int losses) {
    this->losses = losses;
}


// TODO: Implement accessor functions -
//       GetName(), GetWins(), GetLosses()
string Team::GetName() {
    return name;
}

int Team::GetWins() {
    return wins;
}

int Team::GetLosses() {
    return losses;
}


// TODO: Implement GetWinPercentage()
double Team::GetWinPercentage() {
    return (double)wins / (wins + losses);
}


// TODO: Implement PrintStanding()
void Team::PrintStanding() {
    cout << fixed << setprecision(2);
    cout << "Win percentage: " << GetWinPercentage() << endl;
    cout << "Congratulations, Team " << GetName() << " has a winning average!" << endl;
}


