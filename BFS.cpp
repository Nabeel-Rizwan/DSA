#include <iostream>
#include <queue>
using namespace std;

// Graph Traversal using BFS

int main(){

int visited[7]={0,0,0,0,0,0,0};

int i=1;

queue<int> q;

int arr[7][7]={
{0,1,1,1,0,0,0},
{1,0,1,0,0,0,0},
{1,0,1,0,1,0,0},
{0,0,1,1,0,1,1},
{0,0,0,0,1,0,0},
{0,0,0,0,1,0,0}
};

cout<<i<<" ";
visited[i]=1;       // node 1 visited

q.push(i);

while(! q.empty()){

int val=q.front();
q.pop();

for(int j=0;j<7;j++){
    if(arr[val][j] == 1 && visited[j] == 0){
    cout<<j<<" ";
    q.push(j);
    visited[j]=1;
    }
}

}

}