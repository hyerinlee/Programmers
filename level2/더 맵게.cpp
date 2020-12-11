#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> q;
    for(int i:scoville){
        q.push(i);
    }
    while(q.top()<K && q.size()>1){
        int new_food = q.top();
        q.pop();
        new_food+=q.top()*2;
        q.pop();
        q.push(new_food);
        answer++;
    }
    if(q.top()<K) return -1;
    return answer;
}
