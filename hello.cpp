#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int search(vector<int> &arr,int key){
    int l=0,h = arr.size() - 1;
    while(l <= h){
        int mid = (l + h) / 2;
        if(key < arr[mid]) h = mid - 1;
        else if(key > arr[mid]) l = mid + 1;
        else return mid;
    }
    return -1;
}

int main(){
    vector<int> arr;
    int data;
    while(cin>>data && data!=-1) {arr.push_back(data);}
    sort(arr.begin(),arr.end());
    for(int num: arr) cout<<num<<" ";
    int key;
    cin>>key;
    int idx = search(arr,key);
    cout<<endl;
    if(idx == -1) cout<<"Key not present"<<endl;
    else cout<<"Key found at index :"<<idx<<endl;
    return 0;
}