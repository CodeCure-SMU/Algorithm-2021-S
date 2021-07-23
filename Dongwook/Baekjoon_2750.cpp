#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
    int cnt = 0;
    cin>>cnt;
    vector<int> v;
    for(int i = 0; i <cnt; i++){
        int temp = 0;
        cin>>temp;
        v.push_back(temp);
    }

    sort(v.begin(),v.end());
    for(auto &i : v){
        cout<<i<<endl;
    }

    return 0;
}