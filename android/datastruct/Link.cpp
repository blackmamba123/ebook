//
// Created by n5320 on 2017/5/5.
//

#include <cstdlib>
#include "Link.h"

Link::Link() {
    init();
}

Link::~Link() {
    deletes();
}

void Link::init() {
    this->header = new Node;
    this->header->next = NULL;
}

void Link::deletes() {
    Node *pTmp = this->header;
    while (pTmp != NULL) {
        this->header = this->header->next;
        delete pTmp;
        pTmp = this->header;
    }
}