#include <iostream>
using namespace std;
#include <unordered_set>
class ListNode{
    public : 
    int data ;
    ListNode* next;
    ListNode(int data){
        this->data = data;
        this->next = nullptr;
    }
};

bool hasCycle(ListNode *head) {
    unordered_set <ListNode *> st;
    ListNode* temp = head;
    while(temp!=NULL){
        if (st.find(temp)!=st.end()){
            return true;
        }
        st.insert(temp);
        temp=temp->next;
    }
    return false;
}

int main() {
 
    set <ListNode*>st;

 
    return 0;
}