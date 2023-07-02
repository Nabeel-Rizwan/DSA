#include <iostream>

using namespace std;

int Binarysearch(int n, int x[], int e){

    int low,mid,high;

    low=0;
    high=n-1;

while(low <= high){
    mid=(low+high)/2;
    if(x[mid] == e){
        cout<<"Element found"<<endl;
        cout<<x[mid];
        return mid;
    }
    if(x[mid] < e){
        low=mid+1;
    }
    if(x[mid]>e){
        high=mid-1;
    }
    
}

return -1;

}


int main(){

int n;
int x[10];


cout<<"Enter length of array: "<<endl;
cin>>n;

for(int i=0;i<n;i++){

    cin>>x[i];

}

cout<<endl;

for(int i=0;i<n;i++){

    cout<<"printing elements"<<endl;
    cout<<x[i]<<" ";

}

int a;
int e;
cout<<"enter element to be searched in array: "<<endl;
cin>>e;


/* Linear Search 

for(int i=0;i<n;i++){
    if(a == x[i]){
        cout<<"Element found at index "<<i+1<<endl;
    }
    
    else{
        cout<<"Element not found in array"<<endl;
    }
}

*/


// Binarysearch(n, x, e);
int index=Binarysearch(n, x, e);

cout<<"Found in index "<<index;


}