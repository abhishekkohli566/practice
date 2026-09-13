# include <iostream>
using namespace std;
int main(){
    // int n=5;
    // int count =1;
    // while (count <=n)
    // {
    //     cout<<"* "<<endl;
    //     //count++;
    // }

    // for loop 
    // int n=5;
    // for(int i=0;i<=n;i++){
    //     cout<<i<<endl;
    // }
    //sum n numners
    int sum=0;
    int n;
    cout<<"enetr n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
        //cout<<sum<<" ";
    }
    cout<<sum<<endl;
    return 0;
}