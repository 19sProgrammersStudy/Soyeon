#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(pair<double, int>a, pair<double, int>b) {
	if (a.first == b.first) {
		return a.second < b.second;
	}
	else {
		return a.first > b.first;
	}
}
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<double,int>> tmp;
    int loser=0;
    int player=0;
    double f=0;
    for(int i=1;i<=N;i++){
        for(int j=0;j<stages.size();j++){
            if(stages[j]==i){loser++;}
            if(stages[j]>=i){player++;}
        }
        
        if(loser==0||player==0){f=0;}
        else{f=(double)loser/(double)player;}
        tmp.push_back(make_pair(f,i));
            
        loser=0;
        player=0;
    }
    sort(tmp.begin(),tmp.end(),compare);
    for(int i=0;i<tmp.size();i++){
        answer.push_back(tmp[i].second);
    }
    return answer;
}
