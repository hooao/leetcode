// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem2.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
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
    inline int getValue(ListNode *node)
    {
        return node != NULL ? node->val : 0;
    }
    inline ListNode *getNextNode(ListNode *node)
    {
        return node != NULL ? node->next : NULL;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode *tmpList1Node = l1;
        ListNode *tmpList2Node = l2;
        unsigned char carrier = 0;
        ListNode *headNode = NULL;
        ListNode *tailNode = NULL;
        while(tmpList1Node != NULL || tmpList2Node != NULL || carrier != 0)
        {
            int perSum = (getValue(tmpList1Node) + getValue(tmpList2Node)) + carrier;
            ListNode *tmpNode = new  ListNode(perSum % 10);
            carrier = perSum / 10;
            if(tailNode == NULL)
            {
                tailNode = tmpNode;
                headNode = tailNode;
            }
            else
            {
                tailNode->next = tmpNode;
                tailNode = tmpNode;
            }
            tmpList1Node = getNextNode(tmpList1Node);
            tmpList2Node = getNextNode(tmpList2Node);
        }

        return headNode;
    }
};
// @lc code=end

