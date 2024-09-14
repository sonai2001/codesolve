// https://www.geeksforgeeks.org/problems/count-digits5716/1


//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int count = 0; // take counter for count
        int temp = N; // take a  temporary variable
        while(temp!=0){ // start a while loop until temporary variable is zero
            int d = temp%10; // take every digits
            if(d!=0 && N%d==0){ //check any digit is not zero and every digit is gives remainder zero
                count += 1; // increase the counter
            }
            temp = temp/10; // decrease the temp variable upto zero
        }
        return count; // return the counter variable
    }
};

//{ Driver Code Starts.
int main() 
{ 
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    return 0; 
}
// } Driver Code Ends