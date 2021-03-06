#include "cammy.hpp"

cammy::cammy() {}
cammy::~cammy() {}

void cammy::rect_initializer()
{
    idle_frames = 8;
    walkleft_frames = 12;
    walkright_frames = 12;
    jump_frames = 8;
    crouch_frames = 4;
    idleblock_frames = 4;
    crouchblock_frames = 7;
    idlepunch_frames = 6;
    idlekick_frames = 6;
    crouchkick_frames = 9;
    crouchpunch_frames = 10;
    idlehit_frames = 6;
    crouchhit_frames = 5;
    knockdown_frames = 4;
    KO_frames = 4;
    victory_frames = 21;
    special1_frames = 14;
    special2_frames = 21;

    idle_src = new SDL_Rect[idle_frames];
    idle_dst = new SDL_Rect[idle_frames];

    idle_src[0] = {0, 1, 71, 94};
    idle_src[1] = {78, 2, 72, 93};
    idle_src[2] = {156, 3, 72, 92};
    idle_src[3] = {234, 2, 72, 93};
    idle_src[4] = {312, 1, 71, 94};
    idle_src[5] = {390, 2, 72, 93};
    idle_src[6] = {469, 3, 70, 92};
    idle_src[7] = {545, 2, 72, 93};

    walkleft_src = new SDL_Rect[walkleft_frames];
    walkleft_dst = new SDL_Rect[walkleft_frames];

    walkleft_src[0] = {0, 261, 68, 99};
    walkleft_src[1] = {69, 259, 68, 96};
    walkleft_src[2] = {138, 262, 68, 101};
    walkleft_src[3] = {209, 266, 49, 98};
    walkleft_src[4] = {273, 267, 42, 97};
    walkleft_src[5] = {323, 266, 49, 100};
    walkleft_src[6] = {378, 260, 68, 98};
    walkleft_src[7] = {446, 259, 68, 99};
    walkleft_src[8] = {515, 262, 73, 101};
    walkleft_src[9] = {591, 266, 55, 98};
    walkleft_src[10] = {656, 267, 46, 95};
    walkleft_src[11] = {706, 266, 49, 95};

    walkright_src = new SDL_Rect[walkright_frames];
    walkright_dst = new SDL_Rect[walkright_frames];

    walkright_src[0] = {2, 515, 72, 97};
    walkright_src[1] = {75, 514, 72, 94};
    walkright_src[2] = {148, 517, 72, 99};
    walkright_src[3] = {221, 521, 64, 96};
    walkright_src[4] = {292, 523, 46, 94};
    walkright_src[5] = {343, 521, 64, 98};
    walkright_src[6] = {408, 515, 72, 96};
    walkright_src[7] = {481, 514, 72, 97};
    walkright_src[8] = {554, 517, 73, 99};
    walkright_src[9] = {628, 521, 64, 96};
    walkright_src[10] = {694, 523, 51, 92};
    walkright_src[11] = {750, 521, 64, 93};

    jump_src = new SDL_Rect[jump_frames];
    jump_dst = new SDL_Rect[jump_frames];

    jump_src[0] = {0, 1, 71, 94};
    jump_src[1] = {16, 844, 57, 117};
    jump_src[2] = {75, 810, 45, 82};
    jump_src[3] = {132, 798, 49, 66};
    jump_src[4] = {193, 789, 58, 55};
    jump_src[5] = {257, 781, 54, 66};
    jump_src[6] = {318, 762, 53, 94};
    jump_src[7] = {382, 764, 57, 121};

    crouch_src = new SDL_Rect[crouch_frames];
    crouch_dst = new SDL_Rect[crouch_frames];

    crouch_src[0] = {0, 1, 71, 94};
    crouch_src[1] = {0, 1008, 66, 83};
    crouch_src[2] = {67, 1023, 61, 67};
    crouch_src[3] = {129, 1034, 64, 57};

    idleblock_src = new SDL_Rect[idleblock_frames];
    idleblock_dst = new SDL_Rect[idleblock_frames];

    idleblock_src[0] = {0, 1, 71, 94};
    idleblock_src[1] = {9, 1268, 63, 92};
    idleblock_src[2] = {84, 1269, 63, 91};
    idleblock_src[3] = {163, 1268, 63, 92};

    crouchblock_src = new SDL_Rect[crouchblock_frames];
    crouchblock_dst = new SDL_Rect[crouchblock_frames];

    crouchblock_src[0] = {0, 1, 71, 94};
    crouchblock_src[1] = {0, 1008, 66, 83};
    crouchblock_src[2] = {67, 1023, 61, 67};
    crouchblock_src[3] = {129, 1034, 64, 57};
    crouchblock_src[4] = {9, 1414, 62, 57};
    crouchblock_src[5] = {81, 1413, 63, 59};
    crouchblock_src[6] = {155, 1414, 62, 57};

    idlepunch_src = new SDL_Rect[idlepunch_frames];
    idlepunch_dst = new SDL_Rect[idlepunch_frames];

    idlepunch_src[0] = {0, 1, 71, 94};
    idlepunch_src[1] = {0, 1511, 69, 94};
    idlepunch_src[2] = {78, 1511, 80, 94};
    idlepunch_src[3] = {163, 1511, 107, 94};
    idlepunch_src[4] = {78, 1511, 80, 94};
    idlepunch_src[5] = {0, 1511, 69, 94};

    idlekick_src = new SDL_Rect[idlekick_frames];
    idlekick_dst = new SDL_Rect[idlekick_frames];

    idlekick_src[0] = {0, 1, 71, 94};
    idlekick_src[1] = {0, 1767, 69, 90};
    idlekick_src[2] = {70, 1764, 57, 93};
    idlekick_src[3] = {128, 1766, 71, 91};
    idlekick_src[4] = {200, 1764, 57, 93};
    idlekick_src[5] = {0, 1767, 69, 90};

    crouchkick_src = new SDL_Rect[crouchkick_frames];
    crouchkick_dst = new SDL_Rect[crouchkick_frames];

    crouchkick_src[0] = {0, 1, 71, 94};
    crouchkick_src[1] = {0, 1008, 66, 83};
    crouchkick_src[2] = {67, 1023, 61, 67};
    crouchkick_src[3] = {129, 1034, 64, 57};
    crouchkick_src[4] = {4, 2007, 73, 57};
    crouchkick_src[5] = {9, 2270, 67, 51};
    crouchkick_src[6] = {85, 2270, 97, 51};
    crouchkick_src[7] = {186, 2270, 67, 51};
    crouchkick_src[8] = {254, 2267, 68, 55};

    crouchpunch_src = new SDL_Rect[crouchpunch_frames];
    crouchpunch_dst = new SDL_Rect[crouchpunch_frames];

    crouchpunch_src[0] = {0, 1, 71, 94};
    crouchpunch_src[1] = {0, 1008, 66, 83};
    crouchpunch_src[2] = {67, 1023, 61, 67};
    crouchpunch_src[3] = {129, 1034, 64, 57};
    crouchpunch_src[4] = {4, 2007, 73, 57};
    crouchpunch_src[5] = {78, 2007, 73, 57};
    crouchpunch_src[6] = {156, 2007, 65, 57};
    crouchpunch_src[7] = {229, 2011, 105, 53};
    crouchpunch_src[8] = {156, 2007, 65, 57};
    crouchpunch_src[9] = {78, 2007, 73, 57};

    idlehit_src = new SDL_Rect[idlehit_frames];
    idlehit_dst = new SDL_Rect[idlehit_frames];

    idlehit_src[0] = {0, 1, 71, 94};
    idlehit_src[1] = {14, 2520, 72, 91};
    idlehit_src[2] = {96, 2523, 82, 89};
    idlehit_src[3] = {179, 2525, 96, 86};
    idlehit_src[4] = {284, 2523, 82, 89};
    idlehit_src[5] = {374, 2520, 72, 91};

    crouchhit_src = new SDL_Rect[crouchhit_frames];
    crouchhit_dst = new SDL_Rect[crouchhit_frames];

    crouchhit_src[0] = {9, 2771, 66, 65};
    crouchhit_src[1] = {81, 2776, 83, 60};
    crouchhit_src[2] = {170, 2776, 95, 60};
    crouchhit_src[3] = {271, 2776, 83, 60};
    crouchhit_src[4] = {359, 2771, 66, 65};

    knockdown_src = new SDL_Rect[knockdown_frames];
    knockdown_dst = new SDL_Rect[knockdown_frames];

    knockdown_src[0] = {12, 3017, 62, 88};
    knockdown_src[1] = {75, 3016, 65, 89};
    knockdown_src[2] = {147, 3017, 66, 88};
    knockdown_src[3] = {214, 3016, 65, 89};

    KO_src = new SDL_Rect[KO_frames];
    KO_dst = new SDL_Rect[KO_frames];

    KO_src[0] = {12, 3017, 62, 88};
    KO_src[1] = {75, 3016, 65, 89};
    KO_src[2] = {147, 3017, 66, 88};
    KO_src[3] = {214, 3016, 65, 89};

    victory_src = new SDL_Rect[victory_frames];
    victory_dst = new SDL_Rect[victory_frames];

    victory_src[0] = {12, 3536, 73, 93};
    victory_src[1] = {92, 3523, 64, 107};
    victory_src[2] = {162, 3537, 68, 92};
    victory_src[3] = {235, 3534, 67, 95};
    victory_src[4] = {303, 3534, 67, 95};
    victory_src[5] = {371, 3534, 42, 95};
    victory_src[6] = {414, 3533, 43, 96};
    victory_src[7] = {458, 3533, 52, 96};
    victory_src[8] = {511, 3537, 61, 92};
    victory_src[9] = {573, 3530, 54, 99};
    victory_src[10] = {628, 3531, 58, 98};
    victory_src[11] = {628, 3531, 58, 98};
    victory_src[12] = {573, 3530, 54, 99};
    victory_src[13] = {511, 3537, 61, 92};
    victory_src[14] = {458, 3533, 52, 96};
    victory_src[15] = {414, 3533, 43, 96};
    victory_src[16] = {371, 3534, 42, 95};
    victory_src[17] = {303, 3534, 67, 95};
    victory_src[18] = {235, 3534, 67, 95};
    victory_src[19] = {162, 3537, 68, 92};
    victory_src[20] = {92, 3523, 64, 107};

    special1_src = new SDL_Rect[special1_frames];
    special1_dst = new SDL_Rect[special1_frames];

    special1_src[0] = {0, 1, 71, 94};
    special1_src[1] = {12, 3790, 74, 92};
    special1_src[2] = {87, 3796, 66, 86};
    special1_src[3] = {154, 3793, 66, 89};
    special1_src[4] = {221, 3794, 68, 90};
    special1_src[5] = {290, 3782, 74, 102};
    special1_src[6] = {364, 3790, 56, 90};
    special1_src[7] = {421, 3789, 52, 91};
    special1_src[8] = {474, 3787, 65, 93};
    special1_src[9] = {551, 3795, 95, 85};
    special1_src[10] = {650, 3801, 97, 79};
    special1_src[11] = {760, 3803, 123, 77};
    special1_src[12] = {885, 3801, 97, 79};
    special1_src[13] = {995, 3786, 67, 94};

    special2_src = new SDL_Rect[special2_frames];
    special2_dst = new SDL_Rect[special2_frames];

    special2_src[0] = {0, 1, 71, 94};
    special2_src[1] = {12, 4039, 66, 83};
    special2_src[2] = {79, 4042, 71, 82};
    special2_src[3] = {151, 4049, 91, 58};
    special2_src[4] = {243, 4059, 170, 33};
    special2_src[5] = {414, 4058, 170, 29};
    special2_src[6] = {585, 4063, 166, 28};
    special2_src[7] = {752, 4061, 166, 30};
    special2_src[8] = {919, 4061, 167, 30};
    special2_src[9] = {1086, 4063, 167, 33};
    special2_src[10] = {1254, 4067, 167, 31};
    special2_src[11] = {1422, 4059, 170, 29};
    special2_src[12] = {1593, 4059, 170, 33};
    special2_src[13] = {1764, 4067, 167, 29};
    special2_src[14] = {1931, 4067, 167, 31};
    special2_src[15] = {2098, 4069, 167, 28};
    special2_src[16] = {2265, 4075, 167, 30};
    special2_src[17] = {2433, 4073, 153, 37};
    special2_src[18] = {2587, 4067, 63, 59};
    special2_src[19] = {2651, 4068, 68, 56};
    special2_src[20] = {2720, 4067, 64, 57};
}

cammy::cammy(SDL_Renderer *renderer, bool opponent, int vol, int level)
{
    gRenderer = renderer;
    assets = loadTexture("playersprite/cammy.png");
    hitjump = Mix_LoadWAV("music/playerssound/cammy_hitjump.wav");
    lost = Mix_LoadWAV("music/playerssound/cammy_lost.wav");
    special = Mix_LoadWAV("music/playerssound/cammy_special.wav");
    stun = Mix_LoadWAV("music/playerssound/cammy_stun.wav");

    playerwidth = 100;
    playerheight = 200;
    opp_player = opponent;
    rect_initializer();
    src = idle_src;
    dst = idle_dst;
    ratio_set(src, dst, idle_frames, playerwidth, playerheight);
    setvolume(vol);

    if (!opp_player)
    {
        xpos = 0;
        ypos = 600 - playerheight;
        player_difficulty(0, level);
    }
    else if (opp_player)
    {
        xpos = 800 - playerwidth;
        ypos = 600 - playerheight;
        player_difficulty(level, 0);
    }
}

void cammy::idle(int x_opp, int width_opp)
{
    if (idle_flag == false)
    {
        reset_move(1, idle_frames, false, true, false, idle_src, idle_dst);
        Player::idle(x_opp, width_opp);
    }
    ratio_set(src, dst, idle_frames, playerwidth, playerheight);
}

void cammy::walkleft()
{
    if (walkleft_flag == false)
    {
        if (opp_player)
        {
            reset_move(1, walkright_frames, false, true, false, walkright_src, walkright_dst);
        }
        else
        {
            reset_move(1, walkleft_frames, false, true, false, walkleft_src, walkleft_dst);
        }
        Player::walkleft();
    }
    else
    {
        Player::walkleft();
    }
    ratio_set(src, dst, walkleft_frames, playerwidth, playerheight);
}

void cammy::walkright()
{
    if (walkright_flag == false)
    {
        if (opp_player)
        {
            reset_move(1, walkleft_frames, false, true, false, walkleft_src, walkleft_dst);
        }
        else
        {
            reset_move(1, walkright_frames, false, true, false, walkright_src, walkright_dst);
        }
        Player::walkright();
    }
    else
    {
        Player::walkright();
    }
    ratio_set(src, dst, walkright_frames, playerwidth, playerheight);
}

void cammy::jump()
{
    if (jump_flag == false)
    {
        reset_move(1, jump_frames, true, false, false, jump_src, jump_dst);
        Player::jump();
    }
    else
    {
        if (frame_delay % delay_time == 0)
        {
            switch (frame_count)
            {
            case 0:
                break;
            case 1:
                ypos -= 40;
                break;
            case 2:
                ypos -= 50;
                break;
            case 3:
                ypos -= 70;
                break;
            case 4:
                break;
            case 5:
                ypos += 70;
                break;
            case 6:
                ypos += 50;
                break;
            case 7:
                ypos += 40;
                break;
            }
        }
    }
    ratio_set(src, dst, jump_frames, playerwidth, playerheight);
}

void cammy::crouch()
{
    if (crouch_flag == false)
    {
        reset_move(1, crouch_frames, false, false, true, crouch_src, crouch_dst);
        Player::crouch();
    }
    ratio_set(crouch_src, crouch_dst, crouch_frames, playerwidth, playerheight);
}

void cammy::idleblock()
{
    if (idleblock_flag == false)
    {
        reset_move(1, idleblock_frames, false, false, true, idleblock_src, idleblock_dst);
        Player::idleblock();
    }
    ratio_set(src, dst, idleblock_frames, playerwidth, playerheight);
}

void cammy::crouchblock()
{
    if (crouchblock_flag == false)
    {
        reset_move(1, crouchblock_frames, false, false, true, crouchblock_src, crouchblock_dst);
        Player::crouchblock();
    }
    ratio_set(src, dst, crouchblock_frames, playerwidth, playerheight);
}

void cammy::idlepunch()
{
    if (idlepunch_flag == false)
    {
        reset_move(1, idlepunch_frames, true, false, false, idlepunch_src, idlepunch_dst);
        Player::idlepunch();
    }
    ratio_set(idlepunch_src, idlepunch_dst, idlepunch_frames, playerwidth, playerheight);
}

void cammy::idlekick()
{
    if (idlekick_flag == false)
    {
        reset_move(1, idlekick_frames, true, false, false, idlekick_src, idlekick_dst);
        Player::idlekick();
    }
    ratio_set(idlekick_src, idlekick_dst, idlekick_frames, playerwidth, playerheight);
}

void cammy::crouchpunch()
{
    if (crouchpunch_flag == false)
    {
        reset_move(1, crouchpunch_frames, true, false, false, crouchpunch_src, crouchpunch_dst);
        Player::crouchpunch();
    }
    ratio_set(crouchpunch_src, crouchpunch_dst, crouchpunch_frames, playerwidth, playerheight);
}

void cammy::crouchkick()
{
    if (crouchkick_flag == false)
    {
        reset_move(1, crouchkick_frames, true, false, false, crouchkick_src, crouchkick_dst);
        Player::crouchkick();
    }
    ratio_set(crouchkick_src, crouchkick_dst, crouchkick_frames, playerwidth, playerheight);
}

void cammy::idlehit()
{
    if (idlehit_flag == false)
    {
        reset_move(1, idlehit_frames, true, false, false, idlehit_src, idlehit_dst);
        Player::idlehit();
    }
    ratio_set(idlehit_src, idlehit_dst, idlehit_frames, playerwidth, playerheight);
}

void cammy::crouchhit()
{
    if (crouchhit_flag == false)
    {
        reset_move(1, crouchhit_frames, true, false, false, crouchhit_src, crouchhit_dst);
        Player::crouchhit();
        ypos = ypos + 70;
    }
    else
    {
        if (frame_count == crouchhit_frames - 1 && frame_delay % delay_time == 0)
        {
            ypos = ypos - 70;
        }
    }
    ratio_set(crouchhit_src, crouchhit_dst, crouchhit_frames, 100, 130);
}

void cammy::knockdown()
{
    if (knockdown_flag == false)
    {
        reset_move(1, knockdown_frames, true, false, false, knockdown_src, knockdown_dst);
        Player::knockdown();
    }
    ratio_set(knockdown_src, knockdown_dst, knockdown_frames, playerwidth, playerheight);
}

void cammy::KO()
{
    if (KO_flag == false)
    {
        reset_move(1, KO_frames, false, true, false, KO_src, KO_dst);
        Player::KO();
    }
    ratio_set(src, dst, KO_frames, playerwidth, playerheight);
}

void cammy::victory()
{
    if (victory_flag == false)
    {
        reset_move(1, victory_frames, false, true, false, victory_src, victory_dst);
        Player::victory();
    }
    ratio_set(src, dst, victory_frames, playerwidth, playerheight);
}

void cammy::special1()
{
    if (special1_flag == false)
    {
        reset_move(1, special1_frames, true, false, false, special1_src, special1_dst);
        xpos_distance = abs(xpos_opp - xpos) / special1_frames;
        Player::special1();
    }
    else
    {
        if (frame_delay % delay_time == 0)
        {
            xmover();
            switch (frame_count)
            {
            case (13):
                if (opp_player)
                {
                    xpos += playerwidth;
                }
                else if (!opp_player)
                {
                    xpos -= playerwidth;
                }
                break;
            }
        }
    }
    ratio_set(special1_src, special1_dst, special1_frames, playerwidth, playerheight);
}

void cammy::special2()
{
    if (special2_flag == false)
    {
        reset_move(1, special2_frames, true, false, false, special2_src, special2_dst);
        xpos_distance = abs(xpos_opp - xpos) / special2_frames;
        Player::special2();
    }
    else
    {
        if (frame_delay % delay_time == 0)
        {
            xmover();
            switch (frame_count)
            {
            case 3:
                ypos -= 20;
                break;
            case 4:
                ypos -= 70;
                break;
            case 18:
                ypos += 90;
                break;
            case (20):
                if (opp_player)
                {
                    xpos += playerwidth;
                }
                else if (!opp_player)
                {
                    xpos -= playerwidth;
                }
                break;
            }
        }
    }
    ratio_set(special2_src, special2_dst, special2_frames, playerwidth, playerheight);
}