#include "Finder.h"

using namespace std;

// vector<int> Finder::findSubstrings(string s1, string s2) {
//   vector<int> result;
//   for(size_t i = 1; i <= s2.size(); i++) {
//     size_t found = s1.find(s2.substr(0, i));

//     if (found != string::npos) {
//       result.push_back(found);
//     } else {
//       result.push_back(-1);
//     }
//   }
//   return result;
// }

vector<int> Finder::findSubstrings(string s1, string s2) {
  vector<int> result;

  // Iterate through potential starting positions in s1
  for (size_t start = 0; start <= s1.size() - s2.size(); start++) {
    bool match = true;  // Assume a match initially

    // Check for a match for each character in s2
    for (size_t i = 0; i < s2.size(); i++) {
      if (s1[start + i] != s2[i]) {
        match = false;
        break;  // Exit the inner loop if a mismatch is found
      }
    }

    if (match) {
      result.push_back(start);
    }
  }

  return result;
}

