#include "GameManager.h"

int main(){
    GameManager *gameManager = GameManager::getInstance();
    //load the beatmap and run it, no questions asked
    gameManager->loadGame("padoru.osu");
    gameManager->run();
    return 0;
}