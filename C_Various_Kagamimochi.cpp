#include <bits/stdc++.h>
using namespace std;
# define endl "\n"
# define ll long long int
# define yes cout <<"YES"<< endl
# define no cout<<"NO"<<endl


int main()
{
    ll n;
    cin >> n;
    vector <ll> v;
    ll val;
    for(ll i = 0; i < n; i++){
        cin >> val;
        v.push_back(val);
    }
    ll cnt = 0;
    ll high = n-1, low = v[0];

    for(ll i = 0; i < n; i++){
        ll x = 2 * v[i];
        ll high = n-1, low = i;
        while (low <= high){
        ll mid = low + (high - low) / 2;

            if (v[mid] >= x){
                if(v[mid-1] < x){
                    cnt = cnt + (n - mid);
                    break;
                }
                    
                
            }

            
            if (v[mid] < x)
                low = mid + 1;

            
            else
                high = mid - 1;
        }
    }
    
    

    
    cout << cnt << endl;
    
    
    return 0;
}