#include<iostream>
using namespace std;

int arr[5];

void backtracking(int n){
    if(n==5){    //如果陣列0~4格每格的值設定完後就輸出答案
        for(int i=0;i<5;i++)
            printf("%d",arr[i]);cout<<arr[i]);
        printf("\n");
        return;
    }
    else{
        for(int i=0;i<10;i++){
            arr[n]=i;    //設定第n項的值為i
            backtracking(n+1);
        }
    }
}
int main(){
    backtracking(0);
    return 0;
}
