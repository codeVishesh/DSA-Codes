// class Solution {
// public:
//     // Recursive function to generate all letter combinations
//     void solve(vector<string> &ans, int index, string output, string digits, vector<string> &mapping) {
//         // Base case: if index reaches the length of the digits string
//         if (index >= digits.length()) {
//             ans.push_back(output); // Add the current combination to the result list
//             return;
//         }

//         // Get the current digit and its corresponding characters from the mapping
//         int digit = digits[index] - '0'; // Convert char digit to integer
//         string value = mapping[digit]; // Get the characters mapped to the current digit

//         // Iterate over all possible characters for the current digit
//         for (int i = 0; i < value.length(); i++) {
//             char ch = value[i]; // Get each character
//             output.push_back(ch); // Append the character to the current combination

//             // Recursive call to process the next digit
//             solve(ans, index + 1, output, digits, mapping);

//             // Backtrack: remove the last character and try the next one
//             output.pop_back();
//         }
//     }

//     // Function to initiate the letter combination generation
//     vector<string> letterCombinations(string digits) {
//         vector<string> ans; // This will store all the possible letter combinations
//         if (digits.length() == 0) {
//             return ans; // If no digits are provided, return an empty list
//         }

//         // Initialize the mapping for each digit (0-9)
//         vector<string> mapping(10); 
//         mapping[2] = "abc";
//         mapping[3] = "def";
//         mapping[4] = "ghi";
//         mapping[5] = "jkl";
//         mapping[6] = "mno";
//         mapping[7] = "pqrs";
//         mapping[8] = "tuv";
//         mapping[9] = "wxyz";

//         int index = 0;
//         string output = "";

//         // Start the recursive function with initial parameters
//         solve(ans, index, output, digits, mapping);

//         return ans; // Return the list of all possible combinations
//     }
// };
