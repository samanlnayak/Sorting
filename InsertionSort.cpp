# include<iostream>
# include<vector>
# include<climits>
using namespace std;
int main(){
    int arr[]={5,3,2,4,1,11,3,6,7,8};
    int n=10;
    // This is insertion sort;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>=1;j--){
            if(arr[j]>arr[j-1]) break;// instead of break we can write even continue 
            else{
                swap(arr[j],arr[j-1]);
            }
        }
    }



    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}