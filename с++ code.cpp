#include <iostream>
using namespace std;

int M[]={1,2,3,3,4,5,5,5,6}; //к примеру
void Sort(int *A,int n);
void swap(int &a,int &b)
{
int temp=a;
a=b;
b=temp;
}
void Obrabotka(int *A,int n)
{
for(int i=0;i<n;i++)cout«A[i]«" ";
cout«endl;
}
void Perestanovki(int *A,int n)
{
Sort(A,n);
int pos; // позиция первого элмента, нарушающего порядок убывания (с конца)
do
{
pos=n-2;
Obrabotka(A,n);
for(int i=n-1;pos>=0&&A[pos]>=A[i];i--)pos--; //находим pos
int j=n-1; //элемент для обмена
while(pos>=0&&A[pos]>=A[j])j--;
if(pos>=0)swap(A[pos],A[j]);
//разворачиваем часть R
int l=pos+1,r=n-1;
while(l<r)
{
swap(A[l],A[r]);
l++;
r--;
}
}while(pos>=0);
}
int main()
{
Perestanovki(M,9);
return 0;
}
