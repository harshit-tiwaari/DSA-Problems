using namespace std; 
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ans = 0;
        for (int i = 1; i < n; i++) {
            if (prices[i] > prices[i - 1])
                ans += prices[i] - prices[i - 1];
        }
        return ans;
    }
int main() 
{ 
 vector<int> arr = { 7,1,5,3,6,4 }; 
 cout<<maxProfit(arr)<<endl; 
 return 0;
