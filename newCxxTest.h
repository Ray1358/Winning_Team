//
// Copyright 2024
//

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H
#include <string>
#include "Team.h"

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.

class newCxxTest : public CxxTest::TestSuite {
public:

    //Test cases should be declared here
    void test1() {
        Team team;
        team.SetName("Team1");
        team.SetWins(10);
        team.SetLosses(5);
        TS_ASSERT_EQUALS(team.GetName(), "Team1");
        TS_ASSERT_EQUALS(team.GetWins(), 10);
        TS_ASSERT_EQUALS(team.GetLosses(), 5);
        TS_ASSERT_DELTA(team.GetWinPercentage(), 0.6666666666666666, 0.0001);
    }
};

#endif //NEWCXXTEST_H
