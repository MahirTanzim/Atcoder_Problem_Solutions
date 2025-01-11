#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl


int sum(int x){
    int s = 0;
    int arr[9][9];
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            arr[i][j] = (i+1)*(j+1);
            if(arr[i][j] == x)
                continue;
            s+=arr[i][j];
        }
    } 
    return s;
}


int main()
{
    int x;
    cin >> x;
    cout << sum(x) << endl;
    
    return 0;
}