#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

class TransposeList {
public:
    Node* head;
    TransposeList() {
        head = nullptr;
    }

    void insert(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    bool search(int value) {
        Node* current = head;
        Node* prev = nullptr;
        while (current) {
            if (current->data == value) {
                if (prev != nullptr) {
                    std::swap(prev->data, current->data);
                }
                return true;
            }
            prev = current;
            current = current->next;
        }
        return false;
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
    TransposeList list;

    int n, value;
    std::cout << "Enter the number of elements to insert: ";
    std::cin >> n;
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> value;
        list.insert(value);
    }

    list.display();

    std::cout << "Enter the value to search for: ";
    std::cin >> value;

    if (list.search(value)) {
        std::cout << "Found " << value << std::endl;
    } else {
        std::cout << value << " not found" << std::endl;
    }

    list.display();
    return 0;
}