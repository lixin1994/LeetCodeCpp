//
// Created by lixin on 3/18/2017.
//

#ifndef LEETCODEC_NODE_H
#define LEETCODEC_NODE_H

#endif //LEETCODEC_NODE_H


template <class T>
class binary_node{

private:
    T Key;

    binary_node<T> *left_child;

    binary_node<T> *right_child;

    binary_node<T> *parent;

public:
    binary_node(T k);

    binary_node(T k, binary_node<T> *lc, binary_node<T> *rc, binary_node<T> *p);

    void set_left_child(binary_node<T> *bn);

    void set_right_child(binary_node<T> *bn);

    void set_parent(binary_node<T> *bn);

    void set_key(T k);

    T get_key() const;

    binary_node *get_left_child() const;

    binary_node *get_right_child() const;

    binary_node *get_parent() const;

};

template <class T>
binary_node::binary_node(T k) {Key = k;}

template <class T>
binary_node::binary_node(T k, binary_node<T> *lc, binary_node<T> *rc, binary_node<T> *p) {
    Key = k;
    left_child = lc;
    right_child = rc;
    parent = p;
}

template <class T>
void binary_node::set_key(T k) {Key = k;}

template <class T>
void binary_node::set_left_child(binary_node<T> *bn) {
    this->left_child = bn;
}

template <class T>
void binary_node::set_right_child(binary_node<T> *bn) {
    this->right_child = bn;
}

template <class T>
void binary_node::set_parent(binary_node<T> *bn) {
    this->parent = bn;
}

template <class T>
T binary_node::get_key() const {
    return Key;
}

binary_node *binary_node::get_left_child() const {
    return left_child;
}

binary_node *binary_node::get_right_child() const {
    return right_child;
}

binary_node *binary_node::get_parent() const {
    return parent;
}



template <class T>

class aa_node: public binary_node{

public:
    int level;

public:
    aa_node(T k): binary_node(k){level = 0;};

    aa_node(T k, binary_node<T> *lc, binary_node<T> *rc, binary_node<T> *p, int l): binary_node(k, lc, rc, p){level = l;}

    void set_level(int l){
        level = l;
    }
    int get_level(){
        return level;
    };

};
