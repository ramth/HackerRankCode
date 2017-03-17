#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
   // cout << n;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    vector<int> terminated;
    vector<int> pendingHeight;
    vector<int> pendingLength;
  
    int intarr[n];
    int recarr[n];
    for (int i = 0; i < n; i++) {
        
       
        cin >> intarr[i];
        
        //cout << i << ' ' << current;
        
    }
    
    for (int i = 0; i < n; i++) {
        
        int center = intarr[i];
        int length = 1;
        //grow left and right
        int prev = i - 1;
        int next = i + 1;
        //grow left
        while ( prev >= 0 && intarr[prev] > center)
        {
         length++;
         prev--;
        }
        //grow right
        while(next < n && intarr[next]>center)
        {
         length++;
         next++;
        }
        
        recarr[i] = length*center;
        
    }
    //cout << terminated.size();
    
    int k = *max_element(&recarr[0],&recarr[n]);
     cout << k;
    return 0;
}
