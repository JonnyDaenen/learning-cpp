#include<CStdLib>
#include<CTime>
#include<IOStream>

// standard library is in std namespace
using namespace std;

int main() {
    // seed random with current time
    int timestamp = (int) time(nullptr);
    srand(timestamp);
    cout << "Time: " << timestamp << endl;

    // roll the dice!
    int dice = (rand() % 6) + 1;

    // print result
    cout << "Dice: " << dice << endl;
}
