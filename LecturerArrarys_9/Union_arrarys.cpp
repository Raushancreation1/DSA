#include <iostream>
#include <vector>
using namespace std;


int findUnique(vector<int> arr){
    int ans =0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans= ans ^ arr[i];
    }
    return ans;
    
}

int main()
{

   //UNION
   int arr[] = {1,3,5,7,9};
   int sizea= 5;
   int brr[] = {2,4,6,8};
   int sizeb = 4;

   vector<int> ans;

   //push all element of vectors arr
   for (int i = 0; i < sizea; i++)
   {
    ans.push_back(arr[i]);
   }

   //push all element of vectors brr
   for (int i = 0; i < sizeb; i++)
   {
    ans.push_back(brr[i]);
   }

   //printing ans 
   cout<<"Printing  ans array "<<endl;
   for (int i = 0; i < ans.size(); i++)
   {
    cout<<ans[i]<< " ";
   }
   
   
   

    return 0;
}