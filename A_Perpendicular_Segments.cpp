#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--){
        int x, y, k;
        cin >> x >> y >> k;
        int mn = min(x, y);
        int ax = 0, ay = 0, bx = mn, by = mn;
        int cx = mn, cy = 0, dx = 0, dy = mn;

        cout << '0' << " " << '0' << " " << mn << " " << mn << endl;
        cout << mn << " " << '0' << " " << 0 << " " << mn << endl; 
    }
    
    
    return 0;
}