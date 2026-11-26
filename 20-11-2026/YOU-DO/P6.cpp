#include <iostream>
using namespace std;

class TeamScore {
private:
    int points;

public:
    TeamScore() {
        points = 0;
    }

    void addPoint() {
        points++;
    }

    int getPoints() {
        return points;
    }
};

int main() {
    TeamScore t1, t2;
    int n, team;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> team;
        if (team == 1) {
            t1.addPoint();
        } else if (team == 2) {
            t2.addPoint();
        }
    }
    cout << "Team 1 points " << t1.getPoints() << endl;
    cout << "Team 2 points " << t2.getPoints();
    return 0;
}
