#include<iostream>
using namespace std;

int arr[5];

void backtracking(int n){
    if(n==5){    //�p�G�}�C0~4��C�檺�ȳ]�w����N��X����
        for(int i=0;i<5;i++)
            printf("%d",arr[i]);cout<<arr[i]);
        printf("\n");
        return;
    }
    else{
        for(int i=0;i<10;i++){
            arr[n]=i;    //�]�w��n�����Ȭ�i
            backtracking(n+1);
        }
    }
}
int main(){
    backtracking(0);
    return 0;
}
