#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<int> month={31,29,31,30,31,30,31,31,30,31,30,31};
    vector<string> day={"THU","FRI","SAT","SUN","MON","TUE","WED"};
    int s = 0;
    for(int i=0;i<a-1;i++){
        s+=month[i];
    }s+=b;
    answer=day[s%=7];
    return answer;
}
