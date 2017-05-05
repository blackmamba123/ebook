//
// Created by n5320 on 2017/5/5.
//

#ifndef MYNDKPROJECT_LINK_H
#define MYNDKPROJECT_LINK_H

#endif //MYNDKPROJECT_LINK_H
class Link{
private:
    typedef struct Node{
        int data;
        Node* next;
    };

    Node* header;
public:
    Link();
    ~Link();
    void init();
    void deletes();
};