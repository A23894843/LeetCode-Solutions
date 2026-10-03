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
    void reorderList(ListNode* head) {
        if (head == NULL || head-> next == NULL)    return;

        vector <ListNode*> arr;
        ListNode* temp = head;

        while (temp)    {
            arr.push_back (temp);
            temp = temp-> next;
        }   
        int left = 0;
        int right = arr.size() - 1;

        while (left < right)    {
            arr[left]-> next = arr[right];
            left++;
            if (left == right)  break;
            arr[right]-> next = arr[left];
            right--;
        }   arr[left]-> next = NULL;
    }
};