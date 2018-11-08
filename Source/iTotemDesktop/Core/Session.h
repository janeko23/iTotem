#ifndef SESSION_H
#define SESSION_H

#include "Content.h"
#include <list>

using std::list;

class Session {
private:
    list<Content*>* content;
public:
    Session();
    virtual ~Session();
    list<Content*>* getContent();
    void addContent(Content* content);
};

#endif