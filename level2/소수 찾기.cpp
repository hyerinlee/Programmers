#include <string>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

set<int> s_num;
int max_num = 0;

void makeNumber(bool isVisited[], string numbers, string number) {
    if (number.length() == numbers.length()) return;

    string new_str;
    int new_num;

    for (int i = 0; i < numbers.length(); i++) {
        if (!isVisited[i]) {
            new_str = number + numbers[i];
            new_num = stoi(new_str);

            if (max_num < new_num) max_num = new_num;
            s_num.insert(new_num);

            isVisited[i] = true;
            makeNumber(isVisited, numbers, new_str);
            isVisited[i] = false;
        }
    }
}

int solution(string numbers) {
    int answer = 0;

    bool isVisited[7];
    fill_n(isVisited, numbers.length(), false);
    makeNumber(isVisited, numbers, "");

    vector<bool> isPrime;
    isPrime.assign(max_num + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i <= sqrt(max_num); i++) {
        int mul = 2;
        while (i * mul <= max_num) isPrime[i * mul++] = false;
    }

    for (auto& s : s_num) {
        if (isPrime[s]) answer++;
    }

    return answer;
}