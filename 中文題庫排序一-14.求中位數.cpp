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
#include<cmath>  
#include <algorithm>  
using namespace std;  
int main()  
{  
    int N;  
    int num,halnum;  
    int sum=0,so=1;  
    int i,j,tmp;  
    int score[5];  
    //[input]  
    while(cin >> score[0]>>score[1]>>score[2]>>score[3]>>score[4])  
    {//cout<<N<<endl;  
        if(score[0]==0&&score[1]==0&&score[2]==0&&score[3]==0&&score[4]==0)  
            break;  
        else{  
            //cout<<score[0]<<" "<<score[1]<<" "<<score[2]<<" "<<score[3]<<" "<<score[4]<<endl;  
            sort(score,score+5);  
            cout<<score[2]<<endl;  
        }  
    }//[output]  
    return 0;  
}
