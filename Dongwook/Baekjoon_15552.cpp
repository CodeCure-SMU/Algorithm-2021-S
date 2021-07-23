#include <iostream>
using namespace std;
int main(void){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    
    int cnt = 0;
    int num1, num2;
    cin>>cnt;
    for(int i = 0; i < cnt; i++){
        cin>>num1>>num2;
        cout<<num1+num2<<"\n";
    }
    return 0;
}