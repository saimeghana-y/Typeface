#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string word;
    cin>>word;
    
    int n=word.length();
    
    char find=word[n-1];
    
    int ans=0;
    for(int i=0 ; i < s.length(); i++){
        if(s[i]==find)
            ans++;
    }
    cout<<ans;
    
    return 0;
}
