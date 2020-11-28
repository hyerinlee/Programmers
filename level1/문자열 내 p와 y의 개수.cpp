#include <string>
using namespace std;

bool solution(string s)
{
    int n = 0;
    bool answer = false;
    for (char c : s) {
        if (c == 'p' || c == 'P') n++;
        else if (c == 'y' || c == 'Y') n--;
    }
    if (n == 0) answer = true;
    return answer;
}