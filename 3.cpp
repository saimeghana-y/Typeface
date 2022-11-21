#include <bits/stdc++.h>
using namespace std;

bool isValid(int n){
    if(n== 0 || n== 1 || n== 2 || n== 5 || n== 8 || n== 6 || n== 9)
    return true;
    return false;
}

bool validate(int N)
{
    int digit = N % 10;
 
    while (N != 0)
    {
        int current_digit = N % 10;
        N = N / 10;
 
        if (!isValid(current_digit))
        {
            return false;
        }
    }
    return true;
}

int findNth(int n)
{
    int num=1;
    int bound = 1;
    while(num<10){
        if(isValid(num)){
            if(bound == n)
                return num;
            num++;
            bound++;
        }
        else num++;
    }
    
    while(bound!= n){
        if(validate(num)){
            bound++;
            num++;
        }
        else num++;
    }
    
    return num;
}

int main()
{
	int n = 8;
	cout << findNth(n);
	return 0;
}
