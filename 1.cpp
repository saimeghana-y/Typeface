#include <iostream>

using namespace std;


int main()
{
    long val;cin>>val;
    
    long ans = 0;
    long rem = 1;
    while (val > 0) {
        ans += val % 3 * rem;
        val /= 3;
        rem *= 10;
    }
    
    cout<<ans;
    
    return 0;
}
