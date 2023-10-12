struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

/*
Link:
https://leetcode.com/problems/linked-list-cycle/description/
*/

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {

        ListNode *fast, *slow;
        fast = slow = head;
        int count = 0;
        if (fast == nullptr || fast->next == nullptr)
        {
            return false;
        }

        while (fast != nullptr)
        {
            if (count != 0 && count % 2 == 0)
            {
                slow = slow->next;
            }

            if (fast == slow && count != 0)
            {
                return true;
            }

            fast = fast->next;
            count++;
        }

        return false;
    }
};