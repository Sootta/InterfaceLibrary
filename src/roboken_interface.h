#ifndef SOTA_INTERFACE_H
#define SOTA_INTERFACE_H

class Motor {
    public:
    void rotate(int speed) {
        if(speed < 0) {
            this->ccw(-speed);
        }
        else{
            this->cw(speed);
        }
    }
    virtual void cw(int speed) = 0;
    virtual void ccw(int speed) = 0;
};
#endif