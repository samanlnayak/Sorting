# include<iostream>
# include<vector>

using namespace std;
int main(){
    int arr[]={9,1,0,11,19};
    vector<int>b;
    int n=5;
   // Q- find the elements less than the given element and push the element to another array and return that array
   for(int i=0;i<n;i++){
    int count=0;
    for(int j=0;j<n;j++){
        if(arr[i]>arr[j]){
            count++;
        }
    }
     b.push_back(count);
   }
    



    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }


    return 0;
}