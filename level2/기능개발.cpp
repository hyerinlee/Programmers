#include <vector>
#include <numeric>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days;
    for(int i=0; i<progresses.size(); i++){
        days.push_back((100-progresses[i])/speeds[i]);
        if((100-progresses[i])%speeds[i]!=0) days[i]++;
    }
    answer.push_back(1);
    for(int i=1; i<days.size(); i++){
        if(days[accumulate(answer.begin(),answer.end()-1,0)]>=days[i]) answer.at(answer.size()-1)++;
        else answer.push_back(1);
    }
    return answer;
}
