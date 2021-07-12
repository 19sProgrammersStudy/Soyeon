#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<vector<int>> score={{0,1},{0,2},{0,3}};
    vector<int> one = {1,2,3,4,5};
    vector<int> two = {2,1,2,3,2,4,2,5};
    vector<int> three={3,3,1,1,2,2,4,4,5,5};
    for(int i=0;i<answers.size();i++){
        if(one[i%5]==answers[i]){
            score[0][0]+=1;
        }if(two[i%8]==answers[i]){
            score[1][0]+=1;
        }if(three[i%10]==answers[i]){
            score[2][0]+=1;
        }
    }
    sort(score.begin(),score.end());
    if(score[2][0]==score[0][0]){
        for(int i=0;i<score.size();i++){
            answer.push_back(score[i][1]);
        }
    }
    else if(score[2][0]==score[1][0]){
        answer.push_back(score[1][1]);
        answer.push_back(score[2][1]);
    }
    else{
        answer.push_back(score[2][1]);
    }
    return answer;
    
}
