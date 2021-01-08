#include <vector>
using namespace std;

vector<int> solution(int brown, int yellow) {
    int sum = brown/2 + 2;  //x+y
    int x=sum, y=0, area=brown+yellow;
    while(x*y!=area){
        x--;
        y++;
    }
    return {x,y};
}
