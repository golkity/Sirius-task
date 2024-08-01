#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    vector<int> b(n);
    for(int i =0;i<a.size();++i){
        cin>>a[i];
    }
    for(int i =0;i<n;++i){
        cin>>b[i];
    }
    int maxMoney = x;
    int buyDay = -1;
    int sellDay =-1;
    int minPrice = a[0];
    int minday = 0;

    for(int i =1;i<n;++i){
        int profit = (x / minPrice)*b[i] + x%minPrice;
        if(profit>maxMoney){
            maxMoney = profit;
            buyDay = minday;
            sellDay = i;
        }
        if(a[i]< minPrice){
            minPrice = a[i];
            minday = i;
        }
    }
    cout<<maxMoney<<endl;

    if(buyDay == -1){
        cout<<"-1 -1"<<endl;
    }else{
        cout<<buyDay+1<<" "<<sellDay+1<<endl;
    }


    return 0;
}
