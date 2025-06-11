#include <iostream>
using namespace std;
#include<vector>

class node{
    public :
    int data;
    node* next;
    node(int data1){
        data =data1;
        next = nullptr;
    }
};

int main() {
    vector <int> arr = {1,2,3,4};
    node* head = new node(arr[0]);
    node* current = head;
    for (int i = 1 ; i<arr.size(); i++){
        node* temp = new node(arr[i]);
        current->next = temp;
        current = current->next;
    }
    node*trav = head;
    while (trav!=nullptr){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
    return 0;
}