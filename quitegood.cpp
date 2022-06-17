/**
 * Computer Programming 2 (COMP2711, COMP8801)
 * Practical 1: Quite Good Numbers
 */
#include <iostream>
#include <cstdlib>
using namespace std;
/**
 * Prints perfect numbers up to a specified limit.
 */
int main(int argc, char* argv[])
{
    const int limit = argc > 1 ? atoi(argv[1]) : 100;
    const int badness = argc > 2 ? atoi(argv[2]) : 0;


        int num = 0;
        for (int candidate = 2; candidate < limit; candidate++) {
            int total = 1;
            for (int factor = 2; factor * factor <= candidate; factor++) {
                if (candidate % factor == 0) {
                    total += factor + candidate / factor;
                    if (factor * factor == candidate) {
                        total -= factor;
                    }
                }
            }
            if (abs(total - candidate) <= abs(badness)) {
                if(badness < 0)
                {
                    num++;
                }
                else
                {
                    cout << candidate << " ";
                }
            }
        }
        if(badness < 0)
        {
            cout << num << endl;
        }
//        cout << num << endl;

    return 0;
}