#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{   
    std::ios::sync_with_stdio(0); 
    std::cin.tie(NULL);           
    std::cout.tie(NULL);
    
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
   int arr[] = {1, 2, 3, 4, 5, 6};
   int n = sizeof(arr) / sizeof(arr[0]);

int start = 0;
int end = n-1;
   while(start<end){
        swap(arr[start],arr[end]);
   }
  for (int i = 0; i < n; ++i)
  {
     cout<<arr[i];
  }
    
}

