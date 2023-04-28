int editDistanceHelper(int i, int j, string & str1, string & str2) {
  if (i == 0) {
    return j;
  }
 
  
  if (j == 0) {
    return i;
  }
  
  int ans = 1 + min({
    editDistanceHelper(i, j - 1, str1, str2), // Insert
    editDistanceHelper(i - 1, j, str1, str2), // Remove
    editDistanceHelper(i - 1, j - 1, str1, str2) // Replace
  });
 
  if (str1[i - 1] == str2[j - 1]) {
    ans = min(ans, editDistanceHelper(i - 1, j - 1, str1, str2));
  }
  return ans;
}
 
int editDistance(string str1, string str2) {
 
  int n = str1.size() + 1, m = str2.size() + 1;
 
  int ans = editDistanceHelper(n, m, str1, str2);
 
  return ans;
}
