typedef struct Hero
{
  
    SDL_Surface *sprite;


    int x, y;
    int h, w;

    int frameNumber, frameTimer;
    int etat, direction;

    int onGround, timerMort;
    float dirX, dirY;


} Hero;
