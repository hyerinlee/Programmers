#include <string>
using namespace std;

bool solution(string s){
    for(char c:s){
        if(c<'0' || c>'9') return false;
    }
    return (s.size()==4 || s.size()==6)? true:false;
}
