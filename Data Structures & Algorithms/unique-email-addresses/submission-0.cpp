class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> map;
        for (string email : emails) {
            string mail;
            int atIndex = email.find('@');
            for (int i = 0; i < atIndex; ++i) {
                if (email[i] == '+') break;
                if (email[i] != '.') mail += email[i];
            }
            mail += email.substr(atIndex);
            map.insert(mail);
        }
        return map.size();
    }
};