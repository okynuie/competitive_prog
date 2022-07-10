#include <iostream>
#include <string>
using namespace std;

int main(){

    string n;
    cin>>n;
    // for (int i=0; i<n; i++)
    // {
    //     string x;
    //     cin>>x;
    //     int len=x.length();
    //     int result = (int(x[0]-48)-1)*10;
    //     if (len==1){
    //         result+=1;
    //     }else if (len==2){
    //         result+=3;
    //     }else if (len==3){
    //         result+=6;
    //     }else {
    //         result+=10;
    //     }
    //     cout<<result<<"\n";
    // }
    int len = n.length();
    // int result = (int(n[0]-48)-1)*10;
    int x1 = int(n[0]-48);
    int x2 = x1-1;
    int result = x2*10;

    cout << n << endl;
    cout << x1 << endl;
    cout << x2 << endl;
    cout << result << endl;
}