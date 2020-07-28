#ifndef GUILE_H
#define GUILE_H
#include "playerupdate.hpp"

class guile : public Player
{
private:
    void rect_initializer();

public:
    guile();
    guile(SDL_Renderer *, bool, int, int);
    virtual ~guile();
    void idle(int, int);
    void walkleft();
    void walkright();
    void jump();
    void crouch();
    void idleblock();
    void crouchblock();
    void idlepunch();
    void idlekick();
    void crouchpunch();
    void crouchkick();
    void idlehit();
    void crouchhit();
    void knockdown();
    void KO();
    void victory();
    void special1();
    void special2();
};
#endif