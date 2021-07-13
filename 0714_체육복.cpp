#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int arr[30];
    fill_n(arr,30,1);
    
    for(int i=0;i<reserve.size();i++){
        arr[reserve[i]-1]++;
    }
    for(int i=0;i<lost.size();i++){
        arr[lost[i]-1]--;
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            if(i==0&&arr[1]==2){
                arr[i]=1;arr[1]--;
            }else if(i==n-1&&arr[n-2]==2){
                arr[i]=1;arr[n-2]--;
            }else if(arr[i-1]==2){
                arr[i]=1;arr[i-1]--;
            }else if(arr[i+1]==2){
                arr[i]=1;arr[i+1]--;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            answer++;
        }
    }
    return answer;
}
