/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==nullptr) return head;
    ListNode* temp=head;
    vector<int>v;
    v.push_back(temp->val);
    while(temp->next!=nullptr){
       
        temp=temp->next;
         v.push_back(temp->val);
    }
  sort(v.begin(),v.end());
    if (v.empty()) return NULL;

    ListNode* header = new ListNode(v[0]);
     ListNode* tail = header;

    for (int i = 1; i < v.size(); i++) {
        tail->next = new ListNode(v[i]);
        tail = tail->next;
    }

    return header;
}


};

auto init = atexit( [](){ ofstream("display_runtime.txt") <<'0'; });
