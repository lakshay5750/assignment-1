#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={1,2,3,4,8,-98,88};
    int k=4;
    int n=sizeof(arr)/4;
    priority_queue<int> pq;
   for(int i=0;i<n;i++){
      pq.push(arr[i]);
      if(pq.size()>k) pq.pop();
   }
   cout<<pq.top();
}
