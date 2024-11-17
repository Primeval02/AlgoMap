#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1length = word1.length();
        int w2length = word2.length();
        int min = (w1length < w2length) ? w1length : w2length;
        string result;
        for (int i = 0; i < min; i++) {
            if (i < min) {
                result += word1[i];
                cout << "Adding " << word1[i] << endl;
                result += word2[i];
                cout << "Adding " << word2[i] << endl;
            }
        }
        if (w1length > w2length)
            result += word1.substr(min);
        else
            result += word2.substr(min);
        return result;
    }
};

/*
  Time Complexity: O(n + m)
  Space Complexity: O(n + m) 
 
  Test Cases: "abc" + "pqr" = "apbqcr"
  	      "ab" + "pqrs" = "apbqrs"
	      "abcd" + "pq" = "apbqcd"

  Runtime beat 100% of posted solutions!
 */
