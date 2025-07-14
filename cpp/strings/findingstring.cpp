#include <string>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int l = 0;
        int count = 0;
        while (ransomNote[l] != '\0') {
            l++;
        }
        int le = 0;
        while (magazine[le] != '\0') {
            le++;
        }

        int i, j;
        for (i = 0; i <= l; i++) {
            for (j = 0; j <= le; j++) {
                if (ransomNote[i] == magazine[j]) {
                    count++;
                }
            }
        }
        if (count == l) {
            return true;
        }
        return false;
    }
};