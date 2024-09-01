# include<iostream>
# include<vector>
# include<climits>
using namespace std;
int main(){
    int arr[]={5,3,2,4,1,11,3,6,7,8};
    int n=10;

    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int minIndex=-1;

        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                minIndex=j;
            }
        }

        swap(arr[i],arr[minIndex]);

    }




    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}