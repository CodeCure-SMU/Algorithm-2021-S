#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Condition(const pair <int,int> &com_1,const pair<int,int> &com_2){
    if(com_1.second == com_2.second){
        return (com_1.first < com_2.first);
    }
    return (com_1.second < com_2.second);
}

int main(void){
    int cnt = 0;
    int input_1, input_2;

    cin>>cnt;
    vector< pair<int, int> > v(cnt);
    // 백터 선언시 변수 이름 뒤에 괄호에 크기를 입력하여 미리 메모리를 확보해두는것이 가능한듯하다.

    for(int i = 0; i < cnt; i++){
        //cin>>input_1>>input_2;
        //v[i].first = input_1;
        //v[i].second = input_2;
        //v.push_back(make_pair(input_1,input_2));
        //v.push_back(pair<int,int>(input_1,input_2));
        cin >> v[i].first >> v[i].second; //크기를 미리 지정해줘야 이러한 형식을 사용할 수 있음
    }

    sort(v.begin(),v.end(),Condition); // sort 함수 3번째 인자값으로 조건을 판별하는 메소드를 인자값으로 줄수있다.
    /*
    for(int i=0; i<cnt; i++){
        for(int j= 0; j < (cnt-1)-i; j++){
            if(v.at(j).second > v.at(j+1).second){
                pair<int,int> temp = v.at(j);
                v.at(j) = v.at(j+1);
                v.at(j+1) = temp;
            }
            else if(v.at(j).second == v.at(j+1).second){
                if(v.at(j).first > v.at(j+1).first){
                    pair<int,int> temp = v.at(j);
                    v.at(j) = v.at(j+1);
                    v.at(j+1) = temp;
                }
            }
        }
    }
    */
    for(int i = 0; i < cnt; i++){
        //cout<<v.at(i).first<<' '<<v.at(i).second<<endl;
        cout<<v[i].first<<' '<<v[i].second<<"\n"; //endl 사용은 최소화
    }
    return 0;
}