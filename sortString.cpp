# include<iostream>
# include<vector>
# include<string>
# include<algorithm>
using namespace std;



int main(){
   
    string s="AXYBCDFELIEFAJ";
    string str;


   
   for(int i=0;i<s.size();i++){
    if(s[i]<='X'){
        str.push_back(s[i]);
    }
   }

//    sort(str.begin(),str.end());// this is to sort the string

    int i=0;
    int j=str.size()-1;

    while(i<j){

        if(str[i]>str[j])
        {
        int temp=str[i];
        str[i]=str[i+1];
        str[i+1]=temp;

        }
        i++;
        j--;
    }


   cout<<str;
   

   return 0;
}
