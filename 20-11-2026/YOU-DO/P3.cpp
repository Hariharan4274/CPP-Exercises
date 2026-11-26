#include <iostream>
using namespace std;

class PracticeScore {
private:
    int score;

public:
    PracticeScore() {
        score = 0;
    }

    void awardPoints() {
        score += 10;
    }

    int getScore() {
        return score;
    }
};

int main() {
    int n;
    cin >> n;
    PracticeScore p;
    for (int i = 0; i < n; i++) {
        p.awardPoints();
    }
    cout << "Score " << p.getScore();
    return 0;
}
