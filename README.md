#include <iostream>
using namespace std;
//void swap(int ,int );
int main() {
    int x=5,y=6;
    //cout<<"Enter the Two Numbers to Swap in: ";
   // cin>>x>>y;
    swap(x,y);
  cout<<"\nAfter Swappin of Two Numbers:"<<x<<y;
  return 0;
}
void swap(int x,int y){
    int z;
    z= x;
    x= y;
    y= z;
    //cout<<x<<y;
}
