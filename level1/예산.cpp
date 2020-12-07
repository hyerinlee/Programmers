#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int i = 0;
    sort(d.begin(), d.end());
    for(i; i<d.size(); i++){
        budget-=d[i];
        if(budget<0) break;
    }
    return i;
}
