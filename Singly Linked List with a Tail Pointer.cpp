#include <iostream>

struct Node {
    int data;
    Node* next;
};

class SinglyLinkedListWithTail {
public:
    Node* head;
    Node* tail;
    SinglyLinkedListWithTail() {
        head = nullptr;
        tail = nullptr;
    }

    void append(int value) {
        Node* newNode = new Node{value, nullptr};
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void display() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    SinglyLinkedListWithTail list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.display();
    return 0;
}