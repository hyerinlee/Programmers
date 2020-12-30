#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    queue<int> q;
    int sum=truck_weights[0], answer = bridge_length+1;
    q.push(truck_weights[0]);
    
    for(int i=1; i<truck_weights.size(); i++){
        if(q.size()==bridge_length){
            sum-=q.front();
            q.pop();
        }
        if(sum+truck_weights[i]<=weight) q.push(truck_weights[i]);
        else{
            q.push(0);
            i--;
        }
        answer++;
        sum+=q.back();
    }
    return answer;
}
