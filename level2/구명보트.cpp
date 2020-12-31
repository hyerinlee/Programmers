#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0, f=0, b=people.size()-1;
    sort(people.begin(), people.end());
    while(f<b){
        if(people[f]+people[b]<=limit) f++;
        b--;
        answer++;
    }
    if(f==b) answer++;
    return answer;
}
