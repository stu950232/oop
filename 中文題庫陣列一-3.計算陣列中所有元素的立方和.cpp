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
    int matrix[6],cnt=0;  
    //vector<int> number;  
    int i;  
    for(i=0;i<6;i++)  
    {  
        cin>>matrix[i];  
        cnt+=matrix[i]*matrix[i]*matrix[i];  
    }  
    cout<< cnt<<endl;  
    return 0;  
}  
