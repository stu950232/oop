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
bool compare(int a, int b) {  
  return a > b;  
}  
char *getedgid(char *line,char *word)  
{  
    char *ptr,*qtr;  
    ptr=line;  
    while(!isdigit(*ptr)&&*ptr!='\0'){ptr++;}  
    qtr=word;  
    while(isdigit(*ptr)&&*ptr!='\0')  
    {  
        *qtr++=*ptr++;  
    }  
    *qtr='\0';  
    if(strlen(word)==0)return NULL;  
    else{return ptr;}  
}  
int main()  
{  
    int matrix[10],cnt=0;  
    char line[50],word[10],*ptr;  
    int max,min;  
    //vector<int> number;  
    int i;  
    fgets(line,50,stdin);  
    ptr=line;  
    while(ptr=getedgid(ptr,word))  
    {  
        matrix[cnt]=atoi(word);  
        cnt++;  
        //cout<<word<<endl;  
    }  
    sort(matrix,matrix+cnt);  
    //cout<< cnt<<endl;  
    /*for(i=0;i<cnt;i++) 
    { 
        cout<< matrix[i]<<endl; 
    }*/  
    max=0;  
    for(int i=0;i<cnt;i++)  
    {  
        max+=matrix[i]*pow(10,i);  
    }  
    //cout<<max<<endl;  
    min=0;  
    sort(matrix,matrix+cnt,compare);  
    for(int i=0;i<cnt;i++)  
    {  
        min+=matrix[i]*pow(10,i);  
    }  
    //cout<<min<<endl;  
    cout<<max-min<<endl;  
    return 0;  
}  
