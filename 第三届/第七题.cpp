#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
 
int N = 0;  
  
//检查是否合法 
bool CheckStoneNum(int x[][6])  
{  
    for(int k=0; k<6; k++)  
    {  
        int NumRow = 0;  
        int NumCol = 0;  
        for(int i=0; i<6; i++)  
        {  
            if(x[k][i]) NumRow++;      
            if(x[i][k]) NumCol++;  
        }
        // 填空
        if(NumRow!=3 || NumCol !=3) {
            return false;  
        } 
    }  
    return true;  
}  
 
//统计行上的棋子数量 
int GetRowStoneNum(int x[][6], int r)  
{  
    int sum = 0;  
    for(int i=0; i<6; i++)   if(x[r][i]) sum++;  
    return sum;  
}  
 
//统计列上的棋子数量  
int GetColStoneNum(int x[][6], int c)  
{  
    int sum = 0;  
    for(int i=0; i<6; i++)   if(x[i][c]) sum++;  
    return sum;  
}  
 
//打印数组 
void show(int x[][6])  
{  
    for(int i=0; i<6; i++)  
    {  
        for(int j=0; j<6; j++) printf("%2d", x[i][j]);  
        printf("\n");  
    }  
    printf("\n");  
}  
  
void f(int x[][6], int r, int c);  
 
//找到下一个放棋子的位置  
void GoNext(int x[][6],  int r,  int c)  
{  
    if(c<6){
        f(x,r,c+1);   // 填空 递归搜索下一列  
    } 
    else  
        f(x, r+1, 0);  //递归搜索下一行的第0列 
}  
 
 
void f(int x[][6], int r, int c)  
{  
    if(r==6)  
    {  
        //检查是否满足 条件 
        if(CheckStoneNum(x))  
        {  
            
            N++;  
            show(x);  
        }  
        return;  
    }  
    
    //填空 
    if(x[r][c])  // 已经有棋子  
    {  
        GoNext(x,r,c);  
        return;  
    }  
    //计算当前行列的数量 
    int rr = GetRowStoneNum(x,r);   
    int cc = GetColStoneNum(x,c);  
  	// 该列棋子已满 
    if(cc>=3)   
        GoNext(x,r,c);
	// 该行棋子已满  	    
    else if(rr>=3)  
        f(x, r+1, 0);     
    else  
    {  
        x[r][c] = 1;  
        GoNext(x,r,c);  
        x[r][c] = 0;  
        //若该行列缺子，则继续 
        if(!(3-rr >= 6-c || 3-cc >= 6-r))  
            GoNext(x,r,c);    
    }  
}  
  
int main(int argc, char* argv[])  
{  
    int x[6][6] = {  
        {1,0,0,0,0,0},  
        {0,0,1,0,1,0},  
        {0,0,1,1,0,1},  
        {0,1,0,0,1,0},  
        {0,0,0,1,0,0},  
        {1,0,1,0,0,1}  
    };  
  
    f(x, 0, 0);  
      
    printf("%d\n", N);  
  
    return 0;  
}
