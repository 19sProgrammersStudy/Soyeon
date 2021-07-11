#include <string>
#include <vector>
#include <map>
#include <cstdlib>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    map<int,vector<int>> mp;
    int L=10;
    int R=12;
    for(int i =0;i<4;i++){
        for(int j=0;j<3;j++){
            if(i==3&&j==1){
                mp.insert(pair<int, vector<int>>(0, {i,j}));
            }else{
                mp.insert(pair<int, vector<int>>((3*i)+(j+1), {i,j}));
            }
        }
    }
    int l_len=0;
    int r_len=0;
    
    for(int x=0;x<numbers.size();x++){
        if(mp[numbers[x]][1]==0){
            answer+='L';
            L=numbers[x];
        }else if(mp[numbers[x]][1]==2){
            answer+='R';
            R=numbers[x];
        }
        else{
            l_len = abs(mp[numbers[x]][0]-mp[L][0]) + abs(mp[numbers[x]][1]-mp[L][1]);
            r_len = abs(mp[numbers[x]][0]-mp[R][0]) + abs(mp[numbers[x]][1]-mp[R][1]);
            if(l_len==r_len){
                if(hand=="left"){
                    answer+='L';
                    L=numbers[x];
                }else{
                    answer+='R';
                    R=numbers[x];
                }
            }else if(l_len>r_len){
                answer+='R';
                R=numbers[x];
            }else{
                answer+='L';
                L=numbers[x];
            }
        }
    }
    return answer;
}
