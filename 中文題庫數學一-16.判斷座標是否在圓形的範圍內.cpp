#include <iostream>  
#include <utility>  
#include <climits>  
#include <functional>  
#include <iomanip>  
#include <stack>  
#include<cstring>  
#include<time.h>  
#include <vector>  
#include<string>  
#include<cmath>  
#include <algorithm>  
using namespace std;  
  
bool compare(int a, int b) {  
  return a > b;  
}  
int main()  
{  
    int a,b;  
    int i,j,tmp,sum;  
    //[input]  
    while(cin>>a>>b)  
    {  
        sum=pow(a,2)+pow(b,2);  
        if(sum<=10000)  
            cout<<"inside"<<endl;  
        else cout<<"outside"<<endl;  
    }  
  
    //[output]  
    return 0;  
} 
