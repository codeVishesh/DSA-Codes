// // #include <iostream>
// // #include <vector>
// // #include <string>
// // using namespace std;

// //     int compress(vector<char>& chars) {
        
// //         int i =0;
// //         int ansindex =0;
// //         int n = chars.size();

// //         while(i < n ){
// //             int j = i+1;
// //             while(j<n && chars[i] == chars[j]){
// //                 j++;
// //             }
// //         //yaha kab aaoge
// //         //ya toh vector poora traverse kardia
// //         //ya fir new differnt character encounter kia hai

// //         //old char store 

// //         chars[ansindex++] = chars[i];
// //         int count= j-i;

// //         if(count > 1){
// //             //converting counting into single digit and saving 
// //             string cnt = to_string(count);

// //             for(char ch: cnt){
// //                 chars[ansindex++] = ch;
// //             }
// //         }
// //         i = j;
// //         }

// //         return ansindex;
// //     }

// //     int main(){
// //         vector<char> chars = {"a","a","b","b","c","c","c"};
// //         int ans  = compress(chars);

// //         cout << ans << endl;
// //     }

// #include <iostream>
// #include <vector>
// #include <string> // For std::to_string

// using namespace std;

// int compress(vector<char>& chars) {
//     int i = 0;
//     int ansIndex = 0;
//     int n = chars.size();

//     while (i < n) {
//         int j = i + 1;
//         while (j < n && chars[i] == chars[j]) {
//             j++;
//         }

//         // Store the character
//         chars[ansIndex++] = chars[i];
        
//         int count = j - i;

//         if (count > 1) {
//             // Convert count to string and store each digit
//             string cnt = to_string(count);
//             for (char ch : cnt) {
//                 chars[ansIndex++] = ch;
//             }
//         }

//         i = j;
//     }

//     return ansIndex;
// }

// int main() {
//     // Correctly initialize the vector with curly braces
//     vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

//     int ans = compress(chars);

//     // Output the length of the compressed vector
//     cout << "Compressed length: " << ans << endl;

//     // Output the contents of the compressed vector
//     cout << "Compressed vector: ";
//     for (int i = 0; i < ans; ++i) {
//         cout << chars[i];
//     }
//     cout << endl;

//     return 0;
// }









//answer is =>

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// int compress(vector<char>& chars) {
//     int i = 0;
//     int ansIndex = 0;
//     int n = chars.size();

//     while (i < n) {
//         int j = i + 1;
//         while (j < n && chars[i] == chars[j]) {
//             j++;
//         }

//         // Store the character
//         chars[ansIndex++] = chars[i];
        
//         int count = j - i;

//         if (count > 1) {
//             // Convert count to string and store each digit
//             string cnt = to_string(count);
//             for (char ch : cnt) {
//                 chars[ansIndex++] = ch;
//             }
//         }

//         i = j;
//     }

//     return ansIndex;
// }

// int main() {
//     // Initialize the vector by pushing elements
//     vector<char> chars;
//     chars.push_back('a');
//     chars.push_back('a');
//     chars.push_back('b');
//     chars.push_back('b');
//     chars.push_back('c');
//     chars.push_back('c');
//     chars.push_back('c');

//     int ans = compress(chars);

//     // Output the length of the compressed vector
//     cout << "Compressed length: " << ans << endl;

//     // Output the contents of the compressed vector
//     cout << "Compressed vector: ";
//     for (int i = 0; i < ans; ++i) {
//         cout << chars[i];
//     }
//     cout << endl;

//     return 0;
// }
