#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl

class Snake{
    public:
        int l;
        int w;

};

int main()
{   
    int n, d;
    cin >> n >> d;
    Snake ss[n];
    for(int i = 0; i < n; i++)
        cin >> ss[i].l >> ss[i].w;
    
    for(int i = 0; i < d; i++){
        for(int j = 0; j < n; j++)
            ss[j].w++;

        int arr[n];
        for(int j = 0; j < n; j++)
            arr[j] = ss[j].l * ss[j].w;
        
        cout << *max_element(arr, arr + n) << endl;

    }


    
    
    return 0;
}