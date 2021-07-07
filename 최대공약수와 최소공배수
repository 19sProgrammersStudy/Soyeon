#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int x = 1;
    int max = 1;
    vector<int>::iterator iter;
    
    while(x<=n){
        if(n%x==0&&m%x==0){
            max=x;
        }x++;
    }
    answer.push_back(max);
    answer.push_back(n*m/max);
    return answer;
}
