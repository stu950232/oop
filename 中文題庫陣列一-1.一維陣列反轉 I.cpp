#include <iostream>  
#include<fstream>  
#include <map>  
#include <queue>  
#include <utility>  
#include <climits>  
#include <functional>  
#include <iomanip>  
#include <stack>  
#include<cstring>  
#include <vector>  
#include<string>  
using namespace std;  
int main()  
{  
    //int matrix[100];  
    vector<int> number;  
    int tmp;  
    while(scanf("%d",&tmp)!=EOF)  
    {  
        number.push_back(tmp);  
    }  
    int n = number.back();  
    number.pop_back();  
    cout << n ;  
    while(!number.empty()) {  
        int n = number.back();  
        number.pop_back();  
        cout << " "<<n;          
    }  
    cout<<endl;  
    return 0;  
} 
