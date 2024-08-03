#ifndef PLAYER_H
#define PLAYER_H

#include <SDL2/SDL.h>

class Player {
public:

    int m_score;

    Player(int x, int y, int width, int height);
    void handleEvent(const SDL_Event& event);
    void update(int gameAreaWidth, int uiAreaWidth);
    void render(SDL_Renderer* renderer) const;
    void setSpeed(float speed){m_speed = speed;};
    int getSpeed() const{return m_speed;};
    void setSize(float size);  
    float getSize() const {return m_size;};
    SDL_Rect getRect() const {return m_rect;};
    int getVelocityX() const { return m_velocityX; } // New method to get horizontal velocity



private:
    SDL_Rect m_rect;
    int m_velocityX;
    int m_speed;
    float m_size;
};

#endif // PLAYER_H