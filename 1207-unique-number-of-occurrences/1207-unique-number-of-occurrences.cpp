class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        vector<int> storeAccourences;

        for(int i=0; i<arr.size(); i++){
            int count = 1;

            while(i+1 < arr.size() && arr[i] == arr[i+1]){
                count++;
                i++;
            }

            storeAccourences.push_back(count);
        }
         sort(storeAccourences.begin(), storeAccourences.end());
         for(int i=1; i<storeAccourences.size(); i++){
            if(storeAccourences[i] == storeAccourences[i-1]){
                return false;
            }
         }

         return true;
    }
};